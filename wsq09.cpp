#include <iostream>
using namespace std;

long long factorial (unsigned int x)
{
	if(x<2){
	  return 1;
	}
	else 
	  return (x * factorial (x-1));
}

int main (){
	int number;
	string answer="";
do {
	cout<<"Introduce a number: "<<endl;
	cin>> number;

	cout<<"The factorial for the number is: "<<factorial(number)<<endl;
	cout<<"Would you like to try another number?"<<endl;
cin>> answer;
}
while (answer=="yes");

cout<<"Have a nice day :D ! "<<endl;
return 0;
}
