#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

double sumam=0;
float lineas=0;
double sumac=0;
double sumah=0;

int main ()
{

string line;
  ifstream myfile ("93cars.data.txt");
  if (myfile.is_open())
  {
  bool cond=true;
    while ( getline (myfile,line) )
    {
      if (cond)
      {
      string a=line.substr(42,4);
      sumam += atof(a.c_str());
      string b=line.substr(52,2);
      sumac +=atof(b.c_str());
      string c=line.substr(55,2);
      sumah +=atof(c.c_str());
      cond=false;
      lineas++;
 }
      else
      {
      cond=true;
      }
    }
    myfile.close();
  }
  else {
    cout << "Unable to open file";
  }

  double average=sumam/lineas;
  cout<<sumam<<endl;
  cout<<sumac<<endl;
  cout<<sumah<<endl;
  cout<<lineas<<endl;
  double averagecity=sumac/lineas;
  double averagehigh=sumah/lineas;

  cout<<"the average gas mileage in city is: "<<averagecity<<endl;
  cout<<"the average gas mileage on highway is: "<<averagehigh<<endl;
  cout<<"the average midrange price of the vehicles in the set is: "<<average<<endl;



  return 0;

}
