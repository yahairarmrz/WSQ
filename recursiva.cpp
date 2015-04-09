#include <iostream>
using namespace std;

long long factorial (unsigned int x)
{
	if(x<2)
	return 1;

	else
	return (x * factorial(x-1));
}

int main (){

int number;

cout<<"Introduzca un numero: "<<endl;	
cin>>number;


cout<<"el factorial es : "<<factorial(number)<<endl;

return 0;
}
