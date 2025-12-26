// Code de la classe Bibliothèque

#include "Bibliotheque.h"
#include "Livre.h"
#include <string>
using std::string;
#include <iostream>
using namespace std;
#include <iomanip>


Bibliotheque::Bibliotheque() {
    nom = NULL; adresse = NULL;
    code ++; liste = NULL; nbrLivres = 0;
}
Bibliotheque::Bibliotheque(string Nom, string Adresse) {
    nom = Nom; adresse = Adresse;
    code ++; liste = NULL; nbrLivres = 0;
}

Bibliotheque::Bibliotheque(string Nom, string Adresse, int NbrLivres) {
    nom = Nom; adresse = Adresse;
    code ++; liste = new Livre[NbrLivres]; nbrLivres = NbrLivres;
}


void Bibliotheque::afficheLivres(){
    size_t* largeur = new size_t[2];

    for (int i = 0; i < nbrLivres; i++) {
        if (liste[i].get_titre().length() > largeur[0]){largeur[0] = liste[i].get_titre().length();}
        if (liste[i].get_auteur().length() > largeur[1]){largeur[1] = liste[i].get_auteur().length();}
    }
    if (largeur[0] > 5){largeur[0] = 5;}
    if (largeur[1] > 6){largeur[1] = 6;}

    // entetes du tableau
    cout << "CODE" << " TITRE" << std :: setw(largeur[1]-5);
    cout << " AUTEUR" << std :: setw(largeur[1]-6);
    cout << " PUBLIC" << std :: setw(5);
    cout << " ISBN" << std :: setw(13);
    cout << " ETAT" << std :: setw(4) << endl;

    // separation entre les entetes du tableau et le contenu
    cout << string(45 + largeur[0] + largeur[1], '=') << endl;

    // contenu du tableau
    for (int i = 0; i < nbrLivres; i++){
        int code_ = liste[i].get_code();
        string titre_ = liste[i].get_titre();
        string auteur_ = liste[i].get_auteur();
        string isbn_ = liste[i].get_isbn();
        string audience_ = liste[i].get_audience_string();
        string etat_ = liste[i].get_etat_string();

        // les +1 servent de separaeurs entre les différentes colonnes
        cout << code_ << std :: setw(5-to_string(code_).length()+1);
        cout << titre_ << std :: setw(largeur[0]-titre_.length()+1);
        cout << auteur_ << std :: setw(largeur[1]-auteur_.length()+1);
        cout << audience_ << std :: setw(10-audience_.length()+1);
        cout << isbn_ << std :: setw(17 - isbn_.length()+1);
        cout << etat_ << std :: setw(8 - etat_.length()) << endl;
    }
}

void Bibliotheque::afficheLivres(Livre::Type cat) {
    for (int i = 0; i<nbrLivres; i++) {
        if (liste[i].getType() == cat) {
            liste[i].affiche();
        }
    }
}

void Bibliotheque::supprimerLivre(int codeLivre) {
    int ipos = 0;
    for (int i = 0; i < nbrLivres; i++) {
        if (codeLivre == liste[i].get_code()) {ipos = i;}
    }
    for (int i = ipos;i < nbrLivres - 1; i++) {liste[i] = liste[i+1];}
    nbrLivres --;
}

void Bibliotheque::ajoutLivre(Livre livre) {
    Livre* liste_ = new Livre[nbrLivres + 1];
    for (int i = 0; i < nbrLivres; i++) {liste_[i] = liste[i];}
    liste[nbrLivres + 1] = livre;
    nbrLivres ++; liste = liste_;
}

void Bibliotheque::echangeLivre(Bibliotheque biblio, string ISBN) {
    Livre livre;
    for (int i = 0; i < nbrLivres; i++){
        if (biblio.liste[i].get_isbn() == ISBN){
            livre = biblio.liste[i];
        }
    }
    this->ajoutLivre(livre);
    biblio.supprimerLivre(livre.get_code());
}

string Bibliotheque::get_nom() {return nom;}
void Bibliotheque::set_nom(string nom_) { nom = nom_;}

string Bibliotheque::get_adresse() {return adresse;}
void Bibliotheque::set_adresse(string adresse_) {adresse = adresse_;}

Livre * Bibliotheque::get_liste() {return liste;}
void Bibliotheque::set_liste(Livre liste_) {liste = liste_;}

int Bibliotheque :: get_nbrLivres(){return nbrLivres;}
int Bibliotheque :: get_code(){return code;}