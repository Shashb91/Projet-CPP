// Code de la classe BD

#include "BD.h"
#include "Livre.h"

BD :: BD() : Livre(){dessinateur = "";}
BD :: BD(string auteur_, string titre_, string editeur_, string ISBN_, Audience audience_, string dessinateur_) : Livre(auteur_, titre_, editeur_, ISBN_,audience_) {dessinateur = dessinateur_;}

Livre::Type BD::get_type(){return Livre::Type::BD;}
void BD :: affiche(){
    cout<<"Livre "<< this->get_codeLivre();
    cout<<" | Titre : "<< this->get_titre();
    cout<<" | Auteur : "<< this->get_auteur();
    cout<<" | Dessinateur : " << this->get_dessinateur();
    cout<<" | Genre : " << this->get_type_string();
    cout<<" | ISBN : "<< this->get_isbn();
    cout<<" | Etat : " << this->get_etat_string()<<endl;
}

string BD::get_dessinateur(){return dessinateur;}
void BD::set_dessinateur(string dessinateur_){dessinateur = dessinateur_;}