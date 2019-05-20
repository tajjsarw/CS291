#include<iostream>
using namespace std;

int main(int argc, const char * argv[])
{
	int x;
	int y;
	
	cout << "Enter integer x: " << endl;
	cin >> x;
	cout << endl;
	
	cout << "Enter integer y: " << endl;
	cin >> y;
	cout << endl;

	int *ptrX;
	int *ptrY;

	ptrX = &x;
	ptrY = &y;

	cout << "Value of ptrX is " << *ptrX << " and it is stored in address " << ptrX << endl;
	cout << endl;
	cout << "Value of ptrY is " << *ptrY << " and it is stored in address " << ptrY << endl;

	cout << endl;
	system("pause");
	return 0;
}