// Code de la classe abstraite Livre

#include "Livre.h"
int Livre::nextCodeLivre = 0;

Livre::Livre() {
    codeLivre = ++nextCodeLivre; auteur = "";
    titre = ""; editeur = "";
    ISBN = ""; audience = Audience::Null;
    etat = Etat::Libre;
}

Livre::Livre(string auteur_, string titre_, string editeur_, string ISBN_, Audience audience_){
    codeLivre = ++nextCodeLivre; auteur = auteur_;
    titre = titre_; editeur = editeur_;
    ISBN = ISBN_; audience = audience_;
    etat = Etat::Libre;
}

Livre::Type Livre::get_type(){
    return Type::Null;
}

string Livre::get_audience_string(){
    switch (audience){
    case Audience::Null: return "Null"; break;
    case Audience::Jeunesse: return "Jeunesse";break;
    case Audience::Adolescent: return "Adolescent";break;
    case Audience::Adulte: return "Adulte";break;
    case Audience::Tout_public: return "Tout public";break;
    }
    return "";
}

string Livre::get_etat_string(){
    switch (etat){
    case Etat::Libre: return "Libre";break;
    case Etat::Emprunte: return "Emprunte";break;
    case Etat::Pret: return "Prete";break;
    }
    return "";
}

string Livre::get_type_string(){
    switch (this->get_type()){
    case Type :: Null: return "Null";break;
    case Type::Album: return "Album";break;
    case Type::BD: return "BD";break;
    case Type::Recueil: return "Recueil";break;
    case Type::Roman: return "Roman";break;
    case Type::Theatre: return "Theatre";break;
    }
    return "";
}

void Livre:: affiche(){
    cout<<"Livre "<< codeLivre;
    cout<<" | Titre : "<< titre;
    cout<<" | Auteur : "<< auteur;
    cout<<" | Genre : " << this->get_type_string();
    cout<<" | ISBN : "<< ISBN;
    cout<<" | Etat : " << this->get_etat_string()<<endl;
}

int Livre :: get_codeLivre(){return codeLivre;}

string Livre :: get_auteur(){return auteur;}
void Livre :: set_auteur(string auteur_){auteur = auteur_;}

string Livre :: get_titre(){return titre;}
void Livre :: set_titre(string titre_){titre = titre_;}

string Livre :: get_editeur(){return editeur;}
void Livre :: set_editeur(string editeur_){editeur = editeur_;}

string Livre :: get_isbn(){return ISBN;}
void Livre :: set_isbn(string isbn_){ISBN = isbn_;}

Livre::Audience Livre :: get_audience(){return audience;}
void Livre :: set_audience(Audience audience_){audience = audience_;}

Livre::Etat Livre :: get_etat(){return etat;}
void Livre :: set_etat(Etat etat_){etat = etat_;}

