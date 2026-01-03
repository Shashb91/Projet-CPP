//Code de la classe Roman

#include "Roman.h"
#include "Livre.h"

Roman::Roman() : Livre(){genre = Genre::Null;}
Roman::Roman(string auteur_, string titre_, string editeur_, string ISBN_, Audience audience_, Genre genre_)
    :Livre(auteur_,titre_,editeur_,ISBN_, audience_){genre = genre_;}

Livre::Type Roman::get_type(){return Livre::Type::Roman;}

void Roman::affiche(){
    cout<<"Livre "<< this->get_codeLivre();
    cout<<" | Titre : "<< this->get_titre();
    cout<<" | Auteur : "<< this->get_auteur();
    cout<<" | Genre : " << this->get_genre_string();
    cout<<" | ISBN : "<< this->get_isbn();
    cout<<" | Etat : " << this->get_etat_string()<<endl;
}

Roman::Genre Roman :: get_genre(){return genre;}
string Roman::get_genre_string() {
    switch (genre) {
    case Genre::Null: return "Null";
    case Genre::Litterature: return "Litterature";
    case Genre::Roman_noir: return "Roman noir";
    case Genre::Roman_policier: return "Roman policier";
    case Genre::Roman_animalier: return "Roman animalier";
    case Genre::Roman_amour: return "Roman d'amour";
    case Genre::Roman_moeurs: return "Roman de moeurs";
    case Genre::Roman_gothique: return "Roman gothique";
    case Genre::Roman_courtois: return "Roman courtois";
    case Genre::Roman_epistolaire: return "Roman epistolaire";
    case Genre::Roman_feuilleton: return "Roman feuilleton";
    case Genre::Roman_graphique: return "Roman graphique";
    case Genre::Roman_historique: return "Roman historique";
    case Genre::Roman_photo: return "Roman photo";
    case Genre::Roman_picaresque: return "Roman picaresque";
    case Genre::Roman_memoire: return "Roman memoire";
    case Genre::Roman_populaire: return "Roman populaire";
    case Genre::Roman_aventure: return "Roman d'aventure";
    case Genre::Roman_anticipation: return "Roman d'anticipation";
    case Genre::Roman_espionnage: return "Roman d'espionnage";
    case Genre::Roman_apprentissage: return "Roman d'apprentissage";
    case Genre::Roman_chevalerie: return "Roman de chevalerie";
    case Genre::Roman_autobiographique: return "Roman autobiographique";
    case Genre::Nouveau_roman: return "Nouveau roman";
    case Genre::Roman_chevaleresque: return "Roman chevaleresque";
    case Genre::Conte: return "Conte";
    case Genre::Nouvelle: return "Nouvelle";
    default: return "Inconnu";
    }
}

void Roman :: set_genre(Roman :: Genre genre_){genre = genre_;}