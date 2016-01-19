/*
* from cracking the coding interview!
* discussed with a friend of mine
*/	


#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

#define numChars 26

static int counter = 0;

bool isInOrder(string str)
{
	for (size_t i = 1; i < str.length(); i++)
	{
		if (str[i] < str[i - 1])
			return false;
	}

	return true;
}

void printSortedString(int remaining, string prefix)
{
	if (remaining == 0)
	{
		if (isInOrder(prefix))
		{
			cout << prefix << endl;
			++counter;
		}
	}
	else
	{
		for (int i = 0; i < numChars; ++i)
		{
			char c = i + 'a';
			printSortedString(remaining - 1, prefix + c);
		}
	}
}

void printSortedString(int remaining)
{
	printSortedString(remaining, "");
}



int main()
{
	int number;
	cout << "Enter the number: ";
	cin >> number;
	printSortedString(number);
	cout << "The counter is: " << counter << endl;
	system("pause");
}

