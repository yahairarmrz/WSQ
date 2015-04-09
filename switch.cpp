#include <iostream>
using namespace std;


int main (){

int x;

cout<<"Introduce un numero: "<<endl;
cin>>x;

switch(x)
{
case 1: 
	cout<<"tu numero es 1"<<endl;
	break;
case 2: 
	cout<<"tu numero es 2"<<endl;
	break;
case 3:
	cout<<"tu numero es 3"<<endl;
	break;
default:
	cout<<"No es una opcion valida"<<endl;
	break;
}
return 0;
}
