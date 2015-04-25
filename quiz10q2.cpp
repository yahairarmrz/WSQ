#include <iostream>
using namespace std;

float dotProduct (int v1[], int v2[]){

float dot, sum=0;	
	for(int i=1; i<6; i++){
	dot=v1[i]*v2[i];
	sum= sum + dot;
	}
return sum;
}

int main (){

int dim, v1[5], v2[5];
for(int i=1; i<6; i++){
cout<<"Introduce the "<<i<<" number of the first vector"<<endl;
cin>> dim;
v1[i]=dim;
}
for(int i=1; i<6; i++){
cout<<"Introduce the "<<i<<" number of the second vector"<<endl;
cin>> dim;
v2[i]=dim;
}

cout<<"The dot product of the vectors is: "<<dotProduct(v1, v2)<<endl;

return 0;
}

