#include <iostream>
using namespace std;


int main (){

int r=0,a=0,b=0,z=0,y=0;

cout<<"This will calculate the sum of int in the range you provide"<<endl;	
cout<<"Type the lower bound: "<<endl;
cin>>a;

cout<<"Type the upper bound: "<<endl;
cin>>b;

if(a>b){

cout<<"The lower number is higher than the upper number, try again"<<endl;

}
else{
z=a;
while(z<=b)
{  
     r= r + z;
     z++;
}	
cout<<"the result is: "<<r<<endl;
}


return 0;
}
