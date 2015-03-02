#include <iostream>
#include <cstdlib>
using namespace std;

int main (){
	srand(time(NULL));
	int x=0, n=0, r=1;
	x=rand () % 100;
	
	cout<<"I have a number between 1 and 100"<<endl;
	cout<<"Try to guess the number: "<<endl;
	cin>>n;

while (n!=x){
if (n>x){
cout<<"Sorry but "<<n<<" is too high, try again: "<<endl;
cin>>n;
r++;
}
else{
cout<<"Sorry but "<<n<<" is too low, try again: "<<endl;
cin>>n;
r++;
}

}

cout<<"You got it ! The answer is: "<<n<<endl;
cout<<"You made it in "<<r<<" guesses"<<endl;

return 0;
}

