#include <iostream>
using namespace std;

int main(){
   int numeroa=0, numerob=0, suma=0, resta=0, mult=0, a=0, b=0, remainder;
   float dived=0;
  cout << "Enter one number" << endl;
  cin>> a ;

  cout << "Enter a second number"<<endl;
  cin>> b ;
	suma=a+b;
	resta=a-b;
	mult=a*b;
	dived=a/b;
	remainder=a%b;

  cout << "A + B= " <<suma <<endl;
  cout << "A - B= " <<resta <<endl;
  cout << "A * B= " <<mult <<endl;
  cout << "A / B= " <<dived <<endl;
  cout << "Residuo: " <<remainder <<endl;
  return 0;
}
