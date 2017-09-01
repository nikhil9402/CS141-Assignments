#include <iostream>
#include <cmath> 
using namespace std;
int main() {float l, A ;
cout << "To calculate area of an equilateral triangle of side length l,"<< "\nEnter l=";
cin >> l;
A = ((pow(3,0.5))*(pow(l,2)))/4;
cout << "Area A="<<A<<endl;
return 0;
}
