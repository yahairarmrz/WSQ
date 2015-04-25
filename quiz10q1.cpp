#include <iostream>
using namespace std;

float findThrees (int array[]){

float div, sum=0;	
	for(int x=1; x<11 ; x++){
	div=array[x]%3;
	if(div==0)	
	sum= sum + array[x];
	}

return sum;
}

int main (){

int dim, numbers[10];
for(int i=1; i<11; i++){
cout<<"Introduce the "<<i<<" number"<<endl;
cin>> dim;
numbers[i]=dim;
}

cout<<"The sum of the numbers that can be divided by three is:"<<findThrees(numbers)<<endl;

return 0;
}

