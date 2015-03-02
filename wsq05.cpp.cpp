#include <iostream>
using namespace std;

int main (){
	float c=0, f=0;

   cout <<"What is the temperature in Fahrenheit?"<<endl;
   cin >> f;

	c= (5*(f-32))/9;

   cout <<"A temperature of "<< f <<" degrees Fahrenheit is "<< c <<" in Celsius"<< endl;

	if (c<100){
   cout <<"Water does not boil at this temperature, under typical conditions"<<endl;
	}
	else{
   cout <<"Water will start to boil, watch out !!!"<<endl;
	}
	return 0;
}
