#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	float r,pi,d,a;
	pi= 3.14;
	cout<< "Enter the radius of a circle:";
	cin>>r;
	d= (2*r)*pi;
	a= (r*r)*pi;
	cout<< "The diameter of the circle is:" <<d;
	cout<< "\nThe area of the circle is:" <<a;
	return 0;
}
