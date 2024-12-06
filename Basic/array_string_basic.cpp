#include<iostream>
#include<string>
#include<array>
using namespace std;

void arraryBasic();
void multiDimensionalArrays();
void stringBasic();
void stringOperations();
void characterArrays();

int main()
{
	arraryBasic();
	multiDimensionalArrays();
	stringBasic();
	stringOperations();
	//arrayOperations();
	//characterArrays();



	return 0;
}

void arraryBasic()
{
	cout << "Array Basic" << endl;
	//Array declration and initialization
	int a1[5];//uninitialized array with 5 integers
	int a2[5] = {};//initialized value zero
	int a3[] = {1,2,3,4,5};
	int a5[5] = {2,4,6,7,5 }; //array with fixed size
	array<int,5> modernA = {1,2,3,4,5}; //modern C++ 11 array

	//array size
	int size = sizeof(a5) / sizeof(a5[0]);
	//accessing elements and iterating through array normal for loop
	for (int i = 0; i < size; i++)
	{
		cout << a5[i] << endl;
	}
	cout << "size of modern c++ array" << modernA.size()<<endl;
	cout << "Range based for lopp" << endl;
	for (int num : a5)
	{
		cout << num;
	}
	cout << endl;

}
void multiDimensionalArrays()
{
	int matrix[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}


}
void stringBasic()
{
	cout << "string basic" << endl;
	string str = "Hello";
	string str2{ "What's up" };
	string result = str + " " + str2;
	cout << "String Concatenate :" << result << endl;
	cout << "Length of string is"<<str.length() << endl;
	cout <<"back of string value is:" << result.back();
	//can access the string value by using subscript [] operator.like reuslt[0]. at zero index what value is present.

}
void stringOperations()
{
	cout << "String Operations" << endl;
	string text = "Hello, What's up";
	cout <<"Value of substring is :" << text.substr(0, 5);

	//Find functions find the first occurance of the substring
	size_t pos = text.find("What");
	cout << "position of first occurence of substring 'What' in the sting:  " << pos << endl;
	
	


}

void characterArrays()
{

}
