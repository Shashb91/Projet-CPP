// Code de la classe Adhérent

#include "Adherent.h"
#include <string>
using std::string;
#include <iostream>
using namespace std;
#include "Bibliotheque.h"
#include "Livre.h"
int Adherent::numAdherent = 0;

Adherent::Adherent(string nom_, string prenom_, string adresse_, Bibliotheque bib_, int maxEmprunt_){
    numAdherent++;
    nom = nom_;
    prenom = prenom_;
    adresse = adresse_;
    bib = bib_;
    maxEmprunt = maxEmprunt_;
    liste = new Livre[maxEmprunt];
    tailleListeEmprunt = 0;
}

void Adherent::empruntLivre(string ISBN){
    try
    {
        if (tailleListeEmprunt < maxEmprunt){
            Livre* listebib = bib.get_liste();
            for (int i = 0; i < bib.get_nbrLivres(); i++){
                if ((listebib[i].get_isbn() == ISBN) && (liste[i].get_etat() == Livre :: Etat :: Libre)){
                    Livre* liste_ = new Livre[tailleListeEmprunt + 1];
                    for (int j = 0; j < tailleListeEmprunt; j++) {liste_[j] = liste[j];}
                    liste[tailleListeEmprunt + 1] = listebib[i];
                    tailleListeEmprunt ++; liste = liste_;

                    listebib[i].set_etat(Livre :: Etat :: Emprunte);break;
                }
            }
            cout << "201 : Emprunt effectue" << endl;
        }
        else{throw 301;}
    }
    catch(int e){cout << e << " : Nombre de livres empruntés supérieur à la limite"<<endl;}
}

void Adherent::retourLivre(string ISBN){
    try
    {
        if (tailleListeEmprunt > 0 ){
            int ipos;
            Livre* listebib = bib.get_liste();
            for (int i = 0; i < tailleListeEmprunt ; i++ ){if (liste[i].get_isbn() == ISBN){ipos = i;}}

            // comparaison entre les codes au lieu de l'ISBN puisque c'est l'exemplaire qui compte au retour
            for (int k = 0; k < bib.get_nbrLivres(); k ++){if (liste[ipos].get_code() == listebib[k].get_code()){listebib[k].set_etat(Livre :: Etat :: Libre);}}
            for (int j = ipos; j < tailleListeEmprunt - 1 ; j++){liste[j] = liste[j+1];}
            tailleListeEmprunt --;
            cout << "202 : Retour effectue" << endl;
        }
        else{throw 302;}
    }
    catch(int e)
    {
        cout << e << " : Effectuez un emprunt avant un retour"<<endl;
    }
}

int Adherent::get_numAdherent(){ return numAdherent;}

string Adherent::get_nom(){ return nom;}
void Adherent::set_nom(string nom_){ nom = nom_;}

string Adherent::get_prenom(){ return prenom;}
void Adherent::set_prenom(string prenom_){ prenom = prenom_;}

string Adherent::get_adresse(){ return adresse;}
void Adherent::set_adresse(string adresse_){ adresse = adresse_;}

int Adherent::get_maxEmprunt(){return maxEmprunt;}
void Adherent::set_maxEmprunt(int maxEmprunt_){maxEmprunt = maxEmprunt_;}

Bibliotheque Adherent::get_bib(){return bib;}
void Adherent::set_bib(Bibliotheque bib_){bib = bib_;}

Livre* Adherent::get_liste(){return liste;}
void Adherent::set_liste(Livre* liste_){ liste = liste_;}