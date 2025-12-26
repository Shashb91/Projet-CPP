//
// Created by shash on 24/12/2025.
//

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

Type Livre::getType(){
    return Type::Null;
}