// Code de la classe Livre

#include "Livre.h"

Livre::Livre() {
    code ++; auteur = NULL;
    titre = NULL; editeur = NULL;
    ISBN = NULL; audience = Audience::Null;
    etat = Etat::Libre;
}

Livre::Livre(string auteur_, string titre_, string editeur_, string ISBN_, Audience audience_){
    code ++; auteur = auteur_;
    titre = titre_; editeur = editeur_;
    ISBN = ISBN_; audience = audience_;
    etat = Etat::Libre;
}

Livre::Type Livre::getType(){
    return Type::Null;
}

void Livre:: affiche(){
    cout<<"Livre "<< code;
    cout<<" | Titre : "<< titre;
    cout<<" | Auteur : "<< auteur;
    cout<<" | Editeur : "<< editeur;
    cout<<" | ISBN : "<< ISBN;
    cout<<" | Audience : ";
    switch (audience){
        case Audience::Null: cout<<"Null"; break;
        case Audience::Jeunesse: cout<<"Jeunesse";break;
        case Audience::Adolescent: cout<<"Adolescent";break;
        case Audience::Adulte: cout<<"Adulte";break;
        case Audience::Tout_public: cout<<"Tout_public";break;
    }
    cout<<" | Etat : ";
    switch (etat){
        case Etat::Libre: cout<<"Libre"<<endl;break;
        case Etat::Emprunte: cout<<"Emprunté"<<endl;break;
        case Etat::Pret: cout<<"Prêté"<<endl;break;
    }
}

int Livre :: get_code(){return code;}

string Livre :: get_auteur(){return auteur;}
void Livre :: set_auteur(string auteur_){auteur = auteur_;}

string Livre :: get_titre(){return titre;}
void Livre :: set_titre(string titre_){titre = titre_;}

string Livre :: get_editeur(){return editeur}
void Livre :: set_editeur(string editeur_){editeur = editeur_;}

string Livre :: get_isbn(){return ISBN;}
void Livre :: set_isbn(string isbn_){ISBN = isbn_;}

Livre::Audience Livre :: get_audience(){return audience;}
void Livre :: set_audience(Audience audience_){audience = audience_;}

Livre::Etat Livre :: get_etat(){return etat;}
void Livre :: set_etat(Etat etat_){etat = etat_;}