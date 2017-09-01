#include <iostream>
using namespace std;

int main() {
	float l;
	cout << "Enter length in centimeter" << endl;
	cin >> l;
	
	cout << "length in centimeter=";
	cout << l <<endl;
	cout << "length in meter=";
	cout << l/100 <<endl;
	cout << "length in kilometer=";
	cout << l/100000 <<endl;
	// your code goes here
	return 0;
}
