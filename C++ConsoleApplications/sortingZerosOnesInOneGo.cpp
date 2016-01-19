//for you roomie!
//expects just 0s and 1s in input.
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	//storing the input in vector arr
	vector <int> arr;
	unsigned int tempInt;
	while (cin >> tempInt)
	{
		arr.push_back(tempInt);
	}//done with storing data


	unsigned int start_index = 0; //at the beginning
	unsigned int end_index = arr.size() - 1; //at the end

	while (start_index < end_index)
	{
		while ((start_index < arr.size()) && (arr[start_index] == 0))
			++start_index; //moving forward, stops when finds a 1 

		while ((end_index > 0) && (arr[end_index] == 1))
			--end_index; //moving backward, stops when finds a 0

		if (start_index < end_index)
		{
			arr[start_index] = 0; //sort of, swapping values
			arr[end_index] = 1;
		}
	}

	for (auto index = 0; index < arr.size(); ++index)
	{
		cout << arr[index] << " ";
	}

	system("pause");
	return 0;
}