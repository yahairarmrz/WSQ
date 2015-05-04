#include <iostream>
#include <vector>
using namespace std;

int main(){
    std::vector<int> myints;

    std::cout << "0. size: " << myints.size() << '\n';

    for (int i=0; i<20; i++) myints.push_back(i);
    std::cout << "1. size: " << myints.size() << '\n';

    myints.insert (myints.end(),10,23);
    std::cout << "2. size: " << myints.size() << '\n';

    myints.pop_back();
    std::cout << "3. size: " << myints.size() << '\n';

  //  std::cout<<""


    return 0;
}
