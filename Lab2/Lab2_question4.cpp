#include <iostream>
#include <cmath>
using namespace std;

int main() {
int d,Y,W,D;
cout << "Enter no. of days ";
cin >>d;
Y = d/365;
W = (d%365)/7;
D = (d%365)%7;
cout << "It means " << Y << " years " << W << " weeks and " << D << " days.\n";
return 0;
}
