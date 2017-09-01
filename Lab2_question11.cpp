#include <iostream>
#include <cmath>
using namespace std ;
int main () {
float p,r,t,I;
cout << "To calculate Simple interest," << "\nPrinciple = " ;
cin >>p;
cout << "Rate in % = ";
cin >> r;
cout << "Time in years = ";
cin >> t;
I = ((p*r*t)/100);
cout << "Simple interest = " << I<<endl;
return 0;
}
