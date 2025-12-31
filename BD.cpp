//
// Created by shash on 31/12/2025.
//

#include "BD.h"
#include "Livre.h"

BD :: BD() : Livre(){dessinateur = "";}
BD :: BD(string auteur_, string titre_, string editeur_, string ISBN_, Audience audience_, string dessinateur_) : Livre(auteur_, titre_, editeur_, ISBN_,audience_) {dessinateur = dessinateur_;}

Livre::Type BD::get_type(){return Livre::Type::BD;}
string BD::get_dessinateur(){return dessinateur;}
void BD::set_dessinateur(string dessinateur_){dessinateur = dessinateur_;}