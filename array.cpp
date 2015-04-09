#include <iostream>
using namespace std;


int main (){

int max, z, dim;

cout<<"How many numbers are you going to introduce? "<<endl;
cin>> max;

int arreglo[max];
for(int i=0; i<max; i++){
cout<<"introduce the number: "<<endl;
cin>>dim;
arreglo[i]=dim;
}

for(int z=0;z<max;z++){
cout<<arreglo[z]<<" ";
}
cout<<endl;
return 0;
}
