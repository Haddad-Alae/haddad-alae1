#include <iostream>

using namespace std;
class Shape{
protected:
    float Longeur;
    float largeur;
public:
    Shape(float L,float l){
        Longeur=L;
        largeur=l;
    }

};
class Rectangle:public Shape{
    public:
    Rectangle(float L,float l):Shape(L,l){}
    float Area(){
        return (Longeur*largeur);


        }
};

class Triangle:public Shape{
public:
    Triangle(float L,float l):Shape(L,l){}
    float Area(){
        return (largeur*Longeur/2);
    }
};


int main()
{
    Rectangle Rectangle(2,2);
    Triangle Triangle(6,3);
    cout<<Rectangle.Area()<<endl;
    cout<<Triangle.Area()<<endl;
    return 0;	
}

