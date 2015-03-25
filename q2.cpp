#include <iostream>
using namespace std;

void triangles (int x){

int a=0, line=0, i=1, z=1;
while(z<x){
do{
i++;
a++;
cout<<"T";
line++;
}
while (line<=a & a<=i & i<=z);
line=0;
i=1;
a=0;
cout<<endl;
z++;
} //cuando llega al numero maximo, empieza a disminur
while(z>0){
do{
i++;
a++;
cout<<"T";
line++;
}
while (line<=a & a<=i & i<=z);
line=0;
i=1;
a=0;
cout<<endl;
z--;
}
//hasta el valor 0
return;
}

int main () {

int times;

cout<<"Introduce the times T will be print: "<<endl;
cin>>times;
triangles (times);

return 0;
}
