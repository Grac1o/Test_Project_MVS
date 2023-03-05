#include <iostream>
#include <string>
using namespace std;

int main()
{
	int counter = 0;
	string original_str, copy_str, output_str;
	cout << "Enter the original string: ";
	cin >> original_str;

	for (auto x : original_str)
		copy_str += tolower(x);

	for (int i = 0; i < copy_str.length(); i++)
	{
		counter = 1;
		for (int j = 0; j < copy_str.length(); j++)
		{
			if (copy_str[i] == copy_str[j] && i != j)
			{
				counter++;
			}
		}

		if (counter < 2)
			output_str += '(';
		else
			output_str += ')';
	}

	system("cls");
	cout << "Original string:\t" << original_str << endl;
	cout << "Output string:\t\t" << output_str << endl;

	return 0;
}