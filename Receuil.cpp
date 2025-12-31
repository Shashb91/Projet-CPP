//
// Created by shash on 31/12/2025.
//

#include "Receuil.h"
#include "Livre.h"

Receuil::Receuil() : Livre() { vers = NULL; prose = NULL; }
Receuil::Receuil(string auteur_, string titre_, string editeur_, string ISBN_, Audience audience_,bool vers_, bool prose_) : Livre(auteur_, titre_, editeur_, ISBN_, audience_) { vers = vers_; prose = prose_; }

Livre::Type Receuil::get_type(){return Livre :: Type :: Recueil;}

bool Receuil::get_prose(){return prose;}
void Receuil::set_prose(bool prose_){prose = prose_;}

bool Receuil::get_vers(){return vers;}
void Receuil::set_vers(bool vers_){vers = vers_;}