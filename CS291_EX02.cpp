#include <iostream>
#include <array>
#include <vector>
using namespace std;
				 //7 when const is added here, there is an error
void increaseOne( vector<int> & vec) //2 //5 (pass by reference instead of pass by value -- &)
{
	for (int i = 0; i < vec.size(); i++)
		vec[i] = vec[i] + 1; //or vec[i]++;
}

void displayVec(vector<int> vec) //3
{
	for (auto itr = vec.begin(); itr != vec.end(); itr++)
	{
		cout << *itr << " ";
	}
}
/*
int find(vector <int> vec, int value)
{
	for (int f = 0; f < vec.size(); f)
	{
		cout << vec[f] << " ";
	}
}
*/
int main()
{
	vector <int> vec = { 4, 2, 100, 50, 35 , 99, 87 }; //1

	increaseOne(vec); //4

	displayVec(vec); //4
	cout << endl;

	cout << &vec; //6 -- &vec prints out a random series of numbers and letters. error?
	cout << endl;
	vec.insert(4, 5);
	displayVec(vec);
	cout << endl;

	//find(vec, 100);

	system("pause");
	return 0;
}