#include <iostream>
#include <math.h>
using namespace std;


int main (){

int dim=0, sum=0, max=0, z=0 ;
float average=0, desvestand=0;
string answer="";

cout<<"How many numbers are you going to introduce? "<<endl;
cin>> max;
int numbers[max];
for(int i=0; i<max; i++){
cout<<"Introduce a number"<<endl;
cin>> dim;
numbers[i]=dim;
z=i;
}
do {
cout<<"Do you want to introduce another number?"<<endl;
cin>>answer;
	if(answer=="yes"){
	cout<<"Introduce a number"<<endl;
	cin>> dim;
	z++;
	numbers[z]=dim;
	}}
	while(answer=="yes");
for(int x=0; x<max ; x++){
	sum = sum + numbers[x];
	}
average= sum/max;

for(int y=0; y<max ; y++){
desvestand=desvestand + (pow(numbers[y] - average, 2));
	
}	
desvestand=sqrt(desvestand/max);
cout<<"This is the total: "<<sum<<endl;
cout<<"This is the average: "<<average<<endl;
cout<<"This is the standar deviation: "<<desvestand<<endl;

return 0;
}

