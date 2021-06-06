// Volume of cylinder = V = 3.142*r*r*h
#include <iostream>

using namespace std;

void VolCylinder(int r, int h)
{
	cout << "Volume of the cylinder is\n" << 3.142*r*r*h;
}

int main()
{
	int r, h;
	cout << "Please Enter the cylinder radius\n";
	cin >> r;
	cout << "Please Enter the cylinder height\n";
	cin >> h;
	VolCylinder(r, h);
	
}
