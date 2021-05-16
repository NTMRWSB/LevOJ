#include<iostream>
#include<string>

using namespace std;

int main()
{
	string input, output;
	while (cin >> input)
	{
		for (int i = 0; i < input.size(); i++)
		{
			switch (input[i])
			{
			case 'A':
				output += ".-";
				output += "===";
				break;
			case 'B':
				output += "-...";
				output += "===";
				break;
			case 'C':
				output += "-.-.";
				output += "===";
				break;
			case 'D':
				output += "-..";
				output += "===";
				break;
			case 'E':
				output += ".";
				output += "===";
				break;
			case 'F':
				output += "..-.";
				output += "===";
				break;
			case 'G':
				output += "--.";
				output += "===";
				break;
			case 'H':
				output += "....";
				output += "===";
				break;
			case 'I':
				output += "..";
				output += "===";
				break;
			case 'J':
				output += ".---";
				output += "===";
				break;
			case 'K':
				output += "-.-";
				output += "===";
				break;
			case 'L':
				output += ".-..";
				output += "===";
				break;
			case 'M':
				output += "--";
				output += "===";
				break;
			case 'N':
				output += "-.";
				output += "===";
				break;
			case 'O':
				output += "---";
				output += "===";
				break;
			case 'P':
				output += ".--.";
				output += "===";
				break;
			case 'Q':
				output += "--.-";
				output += "===";
				break;
			case 'R':
				output += ".-.";
				output += "===";
				break;
			case 'S':
				output += "...";
				output += "===";
				break;
			case 'T':
				output += "-";
				output += "===";
				break;
			case 'U':
				output += "..-";
				output += "===";
				break;
			case 'V':
				output += "...-";
				output += "===";
				break;
			case 'W':
				output += ".--";
				output += "===";
				break;
			case 'X':
				output += "-..-";
				output += "===";
				break;
			case 'Y':
				output += "-.--";
				output += "===";
				break;
			case 'Z':
				output += "--..";
				output += "===";
				break;
			case '0':
				output += ".----";
				output += "===";
				break;
			case '1':
				output += "..---";
				output += "===";
				break;
			case '2':
				output += "...--";
				output += "===";
				break;
			case '3':
				output += "....-";
				output += "===";
				break;
			case '4':
				output += ".....";
				output += "===";
				break;
			case '5':
				output += "-....";
				output += "===";
				break;
			case '6':
				output += "--...";
				output += "===";
				break;
			case '7':
				output += "---..";
				output += "===";
				break;
			case '8':
				output += "----.";
				output += "===";
				break;
			case '9':
				output += "-----";
				output += "===";
				break;
			default:
				break;
			}
		}
		output.pop_back(); 
		output.pop_back(); 
		output.pop_back();
		cout << output << endl;
		output.clear();
	}
	return 0;
}