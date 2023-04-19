#include <iostream>
using std::cout;

class c1 {
    int c1value{};
    public:
    void setvalue (int value ){c1value=value; }
    int getvalue (){return c1value; }
};

int main (){
    c1 o1;
    o1.setvalue (47);
    cout << o1.getvalue();
    

}