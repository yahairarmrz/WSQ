#include <iostream>
using namespace std;

int mcd(int, int);

int main() {
    int a, b;
	
    cout<<"Please introduce the first number: "<<endl;
    cin>>a;
    cout<<"Introduce the second number: "<<endl;
    cin>>b;

    cout << "mcd(" << a << ", " << b << ")= " << mcd(a,b) << endl;
    return 0;
}

int mcd(int a, int b) {
    if(a < b) return mcd(b,a);
    if(b == 0) return a;
    return mcd(b, a % b);
}
