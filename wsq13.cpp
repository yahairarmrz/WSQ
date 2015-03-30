#include <iostream>
#include <cmath>
using namespace std;

float babylonian(float x){
	float z;
	z=pow(10,(.5*log10(x)));
return z;
}
int main(){

float x;

cout<<"Introduce a number for the square root: "<<endl;
cin>>x;

cout<<"The square root of "<<x<<" is "<<babylonian(x)<<endl;

return 0;
}
