#include <iostream>
#include <cmath>
using namespace std ;
int main () {
float p,r,t,CI;
cout << "To calculate Compound interest," << "\nPrinciple = " ;
cin >>p;
cout << "Rate in % = ";
cin >> r;
cout << "Time in years = ";
cin >> t;
CI = p*pow((1+r/100),t)-p;
cout << "Compound interest = " << CI<<endl;
return 0;
}
