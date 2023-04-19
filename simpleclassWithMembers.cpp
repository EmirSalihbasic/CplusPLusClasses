#include <iostream>
using std::cout;

struct A{  //you can create a class using class or struct keywoard
    int ia{};  //3 data members
    int ib{};
    int ic{};
};

int main (){   //in main is created an object based on a struct A
    A o1 {10,20,30} ;
   
    cout << o1.ia << " " << o1.ib << " " << o1.ic;
    

}