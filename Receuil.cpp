//
// Created by shash on 31/12/2025.
//

#include "Receuil.h"
#include "Livre.h"

Receuil::Receuil(){ vers = NULL; prose = NULL; }
Receuil::Receuil(bool vers_, bool prose_){ vers = vers_; prose = prose_; }

Livre::Type Receuil::get_type(){return Livre :: Type :: Recueil;}

bool Receuil::get_prose(){return prose;}
void Receuil::set_prose(bool prose_){prose = prose_;}

bool Receuil::get_vers(){return vers;}
void Receuil::set_vers(bool vers_){vers = vers_;}