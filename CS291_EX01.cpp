#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
	//1)
	cout << "1. ";
	vector <int> first_vec = { 150, 150, 150, 150, 150, 150, 150, 150 };
	for (auto x : first_vec)
		cout << x << " ";
	cout << endl;
	cout << endl;

	//2
	cout << "2. ";
	first_vec.push_back(200);
	for (auto x : first_vec)
		cout << x << " ";
	cout << endl;
	cout << endl;

	//3
	cout << "3. ";
	first_vec.insert(first_vec.begin(), 130);
	for (auto x : first_vec)
		cout << x << " ";
	cout << endl;
	cout << endl;

	//4
	cout << "4. ";
	for (auto itr = first_vec.begin()+1;itr!= first_vec.end()-1; itr++)
	{
		cout << *itr << " ";
	}
	cout << endl;
	cout << endl;

	//5
	cout << "5. ";
	void insertLast(vector<int> &vec, int value);
	{
		first_vec.push_back(100);
	}
	for (auto x : first_vec)
	cout << x << " ";
	cout << endl;
	cout << endl;

	//6
	cout << "6. ";
	for (auto itr = first_vec.begin(); itr != first_vec.end(); itr++)
	{
		cout << *itr << " ";
	}
	cout << endl;
	cout << endl;
	system("pause");
	return 0;
}