#include <iostream>
#include <string>
using namespace std;

class Cube
{
private: 
	int height;
	int width;
	int depth;
public:
	Cube(int, int, int);
	void setHeight(int);
	void setWidth(int);
	void setDepth(int);
	int getVolume();
};

Cube::Cube(int h, int w, int d)
{
	height = h;
	width = w;
	depth = d;
}

void Cube::setHeight(int h)
{
	height = h;
}

void Cube::setWidth(int w)
{
	width = w;
}

void Cube::setDepth(int d)
{
	depth = d;
}

int Cube::getVolume()
{
	return height * width * depth;
}

int main(int argc, const char * argv[])
{
	Cube cubeOne(3, 4, 5);
	cout << "Volume of cube one is: " << cubeOne.getVolume() << "." << endl;

	system("pause");
	return 0;
}