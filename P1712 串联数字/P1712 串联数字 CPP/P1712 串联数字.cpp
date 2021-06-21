/*
题目描述
假设： S1 = 1 S2 = 12 S3 = 123 S4 = 1234 ......... S9 = 123456789 S10 = 1234567891 S11 = 12345678912 ............ S18 = 123456789123456789 .................. 现在我们把所有的串连接起来 S = 1121231234.......123456789123456789112345678912......... 那么你能告诉我在 S 串中的第 N 个数字是多少吗？

输入描述
输入首先是一个数字 K，代表有 K 次询问。 接下来的 K 行每行有一个整数 N (1 <= N < 2^31)

输出描述
对于每个 N，输出 S 中第 N 个对应的数字

样例输入
6
1
2
3
4
5
10

样例输出
1
1
2
1
2
4
*/

#include<iostream>

using namespace std;

int main()
{
	int k;
	long long n;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> n;
		for (int i = 1; n > i; i++)
		{
			n -= i;
		}
		cout << (n - 1) % 9 + 1 << endl;
	}
	return 0;
}