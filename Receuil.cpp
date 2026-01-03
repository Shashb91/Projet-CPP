//Code de la classe receuil

#include "Receuil.h"
#include "Livre.h"

Receuil::Receuil() : Livre() { vers = NULL; prose = NULL; }
Receuil::Receuil(string auteur_, string titre_, string editeur_, string ISBN_, Audience audience_,bool vers_, bool prose_) : Livre(auteur_, titre_, editeur_, ISBN_, audience_) { vers = vers_; prose = prose_; }

Livre::Type Receuil::get_type(){return Type :: Recueil;}

void Receuil::affiche(){
    cout<<"Livre "<< this->get_codeLivre();
    cout<<" | Titre : "<< this->get_titre();
    cout<<" | Auteur : "<< this->get_auteur();
    cout<<" | Genre : " << this->get_type_string();
    cout<<" | Vers/Prose : " << this->get_vers() << "/" << this->get_prose();
    cout<<" | ISBN : "<< this->get_isbn();
    cout<<" | Etat : " << this->get_etat_string()<<endl;
}

bool Receuil::get_prose(){return prose;}
void Receuil::set_prose(bool prose_){prose = prose_;}

bool Receuil::get_vers(){return vers;}
void Receuil::set_vers(bool vers_){vers = vers_;}