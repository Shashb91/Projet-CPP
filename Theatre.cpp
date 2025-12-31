//
// Created by shash on 31/12/2025.
//

#include "Theatre.h"
#include "Livre.h"

Theatre::Theatre() : Livre(){siecle = 0;}

Theatre::Theatre(string auteur_, string titre_, string editeur_, string ISBN_, Audience audience_, int siecle_)
    : Livre(auteur_, titre_, editeur_, ISBN_, audience_){siecle = siecle_;}

Livre::Type Theatre::get_type(){return Type::Theatre ;}

int Theatre::get_siecle(){return siecle;}
void Theatre::set_siecle(int siecle_){siecle = siecle_;}