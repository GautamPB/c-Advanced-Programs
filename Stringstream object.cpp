//input one line of n integers into a string stream object.
//push each integer into a vector and display the items.
#include<iostream>
#include<sstream>
#include<vector>

using namespace std;

void display(vector <int> numbers)
{
	for(int i = 0; i<numbers.size(); i++)
	{
		cout << numbers[i] << endl;
	}
}

void toInt(string input)
{
	stringstream stm;
	vector <int> numbers;
	stm << input;
	int num;
	char ch;
	while(!stm.eof())
	{
		stm >> num >> ch;
		numbers.push_back(num);
	}
	display(numbers);
}

int main()
{
	cout << "Enter a line of integers separated by commas: \n";
	string input;
	getline(cin, input);
	toInt(input);
	return 0;
}
