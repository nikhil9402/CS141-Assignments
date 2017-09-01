#include <iostream> 
using namespace std;
int main () {int p,c,m,b,e;
float Total,Average,Percentage;

cout<<"Physics marks=" ;
cin>> p;
cout<<"Chemistry marks=" ;
cin>> c;
cout<<"Mathematics marks=" ;
cin>> m;
cout<<"Biology marks=" ;
cin>> b;
cout<<"English marks=" ;
cin>> e;
Total = p+c+m+b+e;
Average = Total/5;
cout<<"\nTotal="<<Total<<"\nAverage="<<Average<<"\nPercentage="<<Average<<"%";
return 0;
}
