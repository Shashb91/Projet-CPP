//Code de la classe theatre

#include "Theatre.h"
#include "Livre.h"

Theatre::Theatre() : Livre(){siecle = 0;}

Theatre::Theatre(string auteur_, string titre_, string editeur_, string ISBN_, Audience audience_, int siecle_)
    : Livre(auteur_, titre_, editeur_, ISBN_, audience_){siecle = siecle_;}

std::string toRoman(int n)
{
    static const std::string romans[] = {"","I","II","III","IV","V","VI","VII","VIII","IX","X","XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX","XX","XXI"};
    if (n < 0 || n > 21){return "";}
    return romans[n];
}

Livre::Type Theatre::get_type(){return Type::Theatre ;}
void Theatre::affiche(){
    cout<<"Livre "<< this->get_codeLivre();
    cout<<" | Titre : "<< this->get_titre();
    cout<<" | Auteur : "<< this->get_auteur();
    cout<<" | Genre : " << this->get_type_string();
    cout<<" | Siecle : "<< toRoman(this->siecle);
    cout<<" | ISBN : "<< this->get_isbn();
    cout<<" | Etat : " << this->get_etat_string()<<endl;
}

int Theatre::get_siecle(){return siecle;}
void Theatre::set_siecle(int siecle_){siecle = siecle_;}