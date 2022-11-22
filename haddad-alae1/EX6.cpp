#include <iostream>

using namespace std;
    class Personne
    {
    private :
        string nom;
         string prenom;
         double datenaissance;

    public:
        Personne(string n, string p, double dn)
        {
            nom = n;
            prenom = p;
            datenaissance = dn;
        }

         virtual void Afficher()
        {
            cout<<"Nom: " << nom << " Prénom: " << prenom << " Date de naissance: " << datenaissance<<endl;
        }
    };
class Employe :public Personne
    {
    private:
        double salaire;

    public:
        Employe(string n, string p, double dn, double s) : Personne(n, p, dn)
        {
            salaire = s;
        }

        void Afficher()
        {
           cout<<" Salaire: " << salaire;
    }
    };

class Chef :public Employe
    {
    private:
         string service;
        public:
             Chef(string n, string p, double dn, double s, string ser): Employe(n, p, dn, s)
        {
            service = ser;
        }

        void Afficher()
        {

            cout<<" Service: " << service;
        }
    };
class Directeur :public Chef
    {
        private:
             string societe;

        public :
        Directeur(string n, string p, double dn, double s, string ser, string soc):Chef(n, p, dn, s, ser)
        {
            societe = soc;
        }

         void Afficher()
        {

            cout<<" Société: " << societe;
        }
    };

         int main()
        {
        return 0;
    }

