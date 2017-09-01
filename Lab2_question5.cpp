#include <iostream>
#include <cmath> 
using namespace std;
int main() {float x, y, z ;
cout << "To calculate x raised to the power y"<< "\nEnter base, x=";
cin >> x;
cout << "\nExponent, y=";
cin >> y;
z = pow(x, y);
cout << x << "^" << y << "=" << z;
return 0;
}
