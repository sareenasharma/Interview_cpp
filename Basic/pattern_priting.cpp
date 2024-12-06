// Problem Statement
//      *
//     ***
//	  *****
//	 ******* 
//	*********
//always thing of left spaces only, donot over think of the right spaces.
/*

4+1(space is one less from the row and star is odd number)
3+3
2+5
1+7
0+9

*/



#include<iostream>
using namespace std;

int main()
{
	int row = 5;
	for (int i = 0; i < row;i++)
	{
		for (int j = 0; j < row - i+1; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * i+1; j++)
		{
			cout << "*";
		}
		
		cout << endl;
	}


	return 0;
}