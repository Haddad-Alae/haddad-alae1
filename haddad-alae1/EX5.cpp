#include <iostream>

using namespace std;

class Animal{
    protected:
    int age;
    string nom;
    public:
    void set_value(int a,string b){
        age=a;
        nom=b;

    }
};
class Zebra:public Animal{
public:
    void msgZebra(){
        cout<<"age du zebra est "<<age<< " ans"<< " et son nom est "<<nom<<endl;


        }
    };
  class Dolphin:public Animal{
      public:

      void msgDolphin (){
          cout<<"age du dolphine "<<age << " ans"<<" et son nom est "<<nom<<endl;
      }

  };




int main()
{
    Zebra Z;
    Dolphin D;
    Z.set_value(5,"abel");
    D.set_value(2,"loli");
    Z.msgZebra();
    D.msgDolphin();
    return 0;
}

