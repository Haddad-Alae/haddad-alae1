#include <iostream>

using namespace std;
class Myclass{
public:
Myclass(){
    cout<<"constructeur par defaut"<<endl;
}
  ~Myclass(){
      cout<<"destructeur"<<endl;

  }
};

int main()
{
    Myclass a;

    return 0;
}

