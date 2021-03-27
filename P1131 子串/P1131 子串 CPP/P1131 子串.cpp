#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int t, n;
char str[100][101];

int searchMaxSubString(char*);
//Reinventing the wheel
char* my_strrev(char* str)
{
	char* right = str;
	char* left = str;
	char ch;
	while (*right)
		right++;
	right--;
	while (left < right)
	{
		ch = *left;
		*left++ = *right;
		*right-- = ch;
	}
	return(str);
}

int main()
{
	int minStrLen, subStrLen;
	char minStr[101];
	while (cin >> t)
	{
		while (t--)
		{
			cin >> n;
			minStrLen = 100;
			for (int i = 0; i < n; i++)
			{
				cin >> str[i];
				if (strlen(str[i]) < minStrLen)
				{
					strcpy(minStr, str[i]);
					minStrLen = strlen(str[i]);
				}
			}
			subStrLen = searchMaxSubString(minStr);
			cout << subStrLen << endl;
		}
	}
	return 0;
}

int searchMaxSubString(char* source)
{
	int subStrLen, sourceStrLen;
	int i, j;
	bool foundMaxSubStr;
	char subStr[101], revSubStr[101];
	subStrLen = sourceStrLen = strlen(source);
	while (subStrLen > 0)
	{
		for (i = 0; i <= sourceStrLen - subStrLen; i++)
		{
			strncpy(subStr, source + i, subStrLen);
			strncpy(revSubStr, source + i, subStrLen);
			subStr[subStrLen] = revSubStr[subStrLen] = '\0';
			my_strrev(revSubStr);
			foundMaxSubStr = true;
			for (j = 0; j < n; j++) {
				if (strstr(str[j], subStr) == NULL && strstr(str[j], revSubStr) == NULL)
				{
					foundMaxSubStr = false;
					break;
				}
			}
			if (foundMaxSubStr)
				return subStrLen;
		}
		subStrLen--;
	}
	return 0;
}