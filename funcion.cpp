#include <iostream>
using namespace std;

int sumar(int x){
	
	if(x>5){
	cout<<"mayor a 5"<<endl;
	return (x+2);
}
	else{ 
	cout<<"menor a 5"<<endl;
	return (x*2);//el resultado sera multiplicado por dos
}}
int main (){
int a, b;

cout<<"dame un numero: "<<endl;//el usuario va a introducir un numero
cin>>a;

cout<<"Resultado: "<<sumar(a)<<endl;

return 0;
}
