#include <iostream>
using namespace std;
class Complexe{
public:
    Complexe(float x,float y);
    Complexe();
    void lis();
    void affiche();
    Complexe operator+(Complexe g);
private:
    float re,im;
};
Complexe::Complexe(float x ,float y)
{
    re=x;
    im=y;
}
Complexe::Complexe(){
    re=0;
    im=0;
}
void Complexe::lis(){
    cout<<"Partie reel ?"<<endl;
    cin>>re;
    cout<<"Partie imaginaire ?"<<endl;
    cin>>im;
}
void Complexe::affiche(){
    cout<<re<<"+i"<<im;
}
 Complexe Complexe::operator+(Complexe g){
    return Complexe(re+g.re,im+g.im);
}
int main()
{
Complexe Z1(0,1);
Complexe Z2;
Z1.affiche();
cout<<endl<<"entrez un nombre complexe"<<endl;
Z2.affiche();
cout<<"Vous avez entre:";
Z2.affiche();
Complexe Z3=Z1+Z2;
cout<<endl<<"le somme de" <<endl;
Z1.affiche();
cout<<endl<<"et"<<endl;
Z2.affiche();
cout<<endl<<"est"<<endl;
Z3.affiche();
return 0;

}


