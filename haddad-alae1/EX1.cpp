#include <iostream>

using namespace std;

class Mere{
public:
    void display(){
        cout<<"display pour mere"<<endl;
    }
};
class Fille:public Mere{
   public:
   void display(){
    cout<<"display pour fille"<<endl;

}
};

int main()
{
    Fille c;
    c.display();

    return 0;
}

