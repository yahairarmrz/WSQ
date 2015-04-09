#include <iostream>
#include <iomanip>
using namespace std;

double calculate_e(int n){
	double e = 2.0;
	double factorial = 1;
	for (int i=2; i<n; i++){
	factorial *= i;
	e += 1/factorial;
	}
return e;
}


int main(){

int precision;

cout << "How many decimals do you want? " << endl;
cin >> precision;

cout << "Value of Euler is: " << setprecision(precision+1) << calculate_e(100) << endl;
return 0;
}
