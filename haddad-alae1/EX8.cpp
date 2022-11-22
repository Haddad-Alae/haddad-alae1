#include <iostream>
#include <cstring>
using namespace std;
class Media {
public:
virtual void imprime();
virtual char *id();
protected:
string titre;
};
class Livre: public Media {
public:
  Livre();
private:
string auteur, editeur, isbn;
};
class Audio:public Media{
public:
        Audio();
  virtual char	*cd_length();
 virtual  char	*cd_elapsed_time();
  virtual void	pause();
   virtual bool	is_playing();
   virtual bool	is_pause();
private:
    bool bplaying, bpause;
};
class CD:public Audio{
private:
string Nom, *TitreCD;
int Duree;
public:
CD();
 virtual void Afficher();
};
class Cassette:public Audio{
private:
string Nom, *Titre;
int Duree;
public:
Cassette();
 virtual void Afficher();
};
class Disque:public Audio{
private:
string Nom, *TitreDis;
int Duree;
public:
Disque();
 virtual void Afficher();
};
class Presse:public Media{
public:
    Presse();
virtual void Afficher();
virtual void Impimer();
private:
string nom;
};
class Magazine:public Presse
{
   private:
       string auteur, editeur;
   public:
    Magazine();
    virtual void Afficher();
};
class Journal:public Presse{
private:
string editeur;
int Duree;
public:
    virtual void Afficher();
Journal();
};
class Revue:public Presse{
public:
Revue();
virtual void Afficher();
};
int main()
{

    return 0;
}

