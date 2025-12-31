#include <iostream>
#include <string>
#include "Livre.h"
#include "Bibliotheque.h"
#include "Adherent.h"

using namespace std;

int main() {
    // bibliotheques
    Bibliotheque bib1("Bibliotheque Centrale", "10 rue de Paris",40);
    Bibliotheque bib2("Mediatheque Jean Moulin", "45 Avenue de la Republique", 40);
    Bibliotheque bib3("Espace Lecture Jeunesse", "5 Square des Arts",40);

    // Livres
    bib1.ajoutLivre(Livre("George Orwell", "1984", "Gallimard", "9780451524935", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("George Orwell", "1984", "Gallimard", "9780451524936", Livre::Audience::Adulte)); // Duplicate 1
    bib1.ajoutLivre(Livre("Albert Camus", "L'Etranger", "Folio", "9782070360024", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("F. Scott Fitzgerald", "The Great Gatsby", "Scribner", "9780743273565", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("J.R.R. Tolkien", "The Hobbit", "Houghton", "9780547928227", Livre::Audience::Tout_public));
    bib1.ajoutLivre(Livre("Harper Lee", "To Kill a Mockingbird", "Lippincott", "9780446310789", Livre::Audience::Adolescent));
    bib1.ajoutLivre(Livre("Gabriel Garcia Marquez", "One Hundred Years of Solitude", "Harper", "9780060883287", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Jane Austen", "Pride and Prejudice", "T. Egerton", "9780141439518", Livre::Audience::Tout_public));
    bib1.ajoutLivre(Livre("J.D. Salinger", "The Catcher in the Rye", "Little, Brown", "9780316769174", Livre::Audience::Adolescent));
    bib1.ajoutLivre(Livre("Ernest Hemingway", "The Old Man and the Sea", "Scribner", "9780684801223", Livre::Audience::Tout_public));
    bib1.ajoutLivre(Livre("Aldous Huxley", "Brave New World", "Chatto & Windus", "9780060850524", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Ray Bradbury", "Fahrenheit 451", "Ballantine", "9781451673319", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("William Golding", "Lord of the Flies", "Faber", "9780399501487", Livre::Audience::Adolescent));
    bib1.ajoutLivre(Livre("John Steinbeck", "Of Mice and Men", "Covici Friede", "9780140177398", Livre::Audience::Tout_public));
    bib1.ajoutLivre(Livre("Leo Tolstoy", "War and Peace", "The Russian Messenger", "9781400079988", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Fyodor Dostoevsky", "Crime and Punishment", "The Russian Messenger", "9780451530066", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Mark Twain", "The Adventures of Huckleberry Finn", "Chatto & Windus", "9780486280615", Livre::Audience::Jeunesse));
    bib1.ajoutLivre(Livre("Oscar Wilde", "The Picture of Dorian Gray", "Lippincott's", "9780141439570", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Mary Shelley", "Frankenstein", "Lackington", "9780141439471", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Bram Stoker", "Dracula", "Archibald Constable", "9780141439846", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Herman Melville", "Moby Dick", "Richard Bentley", "9780142437247", Livre::Audience::Tout_public));
    bib1.ajoutLivre(Livre("Charles Dickens", "A Tale of Two Cities", "Chapman & Hall", "9780141439600", Livre::Audience::Tout_public));
    bib1.ajoutLivre(Livre("Charlotte Bronte", "Jane Eyre", "Smith, Elder & Co", "9780141441146", Livre::Audience::Adolescent));
    bib1.ajoutLivre(Livre("Emily Bronte", "Wuthering Heights", "Thomas Cautley Newby", "9780141439556", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Victor Hugo", "Les Miserables", "A. Lacroix", "9782253096337", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Gustave Flaubert", "Madame Bovary", "Revue de Paris", "9782253005674", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Marcel Proust", "Du cote de chez Swann", "Grasset", "9782070379248", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Franz Kafka", "The Metamorphosis", "Kurt Wolff", "9780393006155", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Virginia Woolf", "To the Lighthouse", "Hogarth Press", "9780156907392", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("James Joyce", "Ulysses", "Sylvia Beach", "9780679722762", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("T.S. Eliot", "The Waste Land", "Hogarth Press", "9780156947237", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Sylvia Plath", "The Bell Jar", "Heinemann", "9780060837020", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Margaret Atwood", "The Handmaid's Tale", "McClelland & Stewart", "9780385490818", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Toni Morrison", "Beloved", "Alfred A. Knopf", "9781400033416", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Chinua Achebe", "Things Fall Apart", "William Heinemann", "9780385474542", Livre::Audience::Tout_public));
    bib1.ajoutLivre(Livre("Gabriel Garcia Marquez", "Love in the Time of Cholera", "Alfred A. Knopf", "9780307389732", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Milan Kundera", "The Unbearable Lightness of Being", "Harper & Row", "9780060912109", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Umberto Eco", "The Name of the Rose", "Bompiani", "9780156001311", Livre::Audience::Adulte));
    bib1.ajoutLivre(Livre("Paulo Coelho", "The Alchemist", "HarperTorch", "9780062315007", Livre::Audience::Tout_public));
    bib1.ajoutLivre(Livre("Haruki Murakami", "Norwegian Wood", "Kodansha", "9780375704024", Livre::Audience::Adulte));

    bib2.ajoutLivre(Livre("J.K. Rowling", "Harry Potter 1", "Bloomsbury", "9780747532699", Livre::Audience::Jeunesse));
    bib2.ajoutLivre(Livre("J.K. Rowling", "Harry Potter 2", "Bloomsbury", "9780747538493", Livre::Audience::Jeunesse));
    bib2.ajoutLivre(Livre("J.K. Rowling", "Harry Potter 2", "Bloomsbury", "9780747538494", Livre::Audience::Jeunesse)); // Duplicate 2
    bib2.ajoutLivre(Livre("J.K. Rowling", "Harry Potter 3", "Bloomsbury", "9780747542155", Livre::Audience::Jeunesse));
    bib2.ajoutLivre(Livre("J.K. Rowling", "Harry Potter 4", "Bloomsbury", "9780747546245", Livre::Audience::Jeunesse));
    bib2.ajoutLivre(Livre("J.K. Rowling", "Harry Potter 5", "Bloomsbury", "9780747551003", Livre::Audience::Jeunesse));
    bib2.ajoutLivre(Livre("J.K. Rowling", "Harry Potter 6", "Bloomsbury", "9780747581086", Livre::Audience::Jeunesse));
    bib2.ajoutLivre(Livre("J.K. Rowling", "Harry Potter 7", "Bloomsbury", "9780747591054", Livre::Audience::Jeunesse));
    bib2.ajoutLivre(Livre("Suzanne Collins", "The Hunger Games", "Scholastic", "9780439023481", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Suzanne Collins", "Catching Fire", "Scholastic", "9780439023498", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Suzanne Collins", "Mockingjay", "Scholastic", "9780439023511", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Veronica Roth", "Divergent", "Katherine Tegen", "9780062024039", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Veronica Roth", "Insurgent", "Katherine Tegen", "9780062024053", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Veronica Roth", "Allegiant", "Katherine Tegen", "9780062024077", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("John Green", "The Fault in Our Stars", "Dutton", "9780525478812", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("John Green", "Paper Towns", "Dutton", "9780142414934", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Stephenie Meyer", "Twilight", "Little, Brown", "9780316015844", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Stephenie Meyer", "New Moon", "Little, Brown", "9780316160193", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Stephenie Meyer", "Eclipse", "Little, Brown", "9780316160209", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Stephenie Meyer", "Breaking Dawn", "Little, Brown", "9780316067928", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Rick Riordan", "The Lightning Thief", "Disney Hyperion", "9780786856299", Livre::Audience::Jeunesse));
    bib2.ajoutLivre(Livre("Rick Riordan", "The Sea of Monsters", "Disney Hyperion", "9780786856862", Livre::Audience::Jeunesse));
    bib2.ajoutLivre(Livre("Rick Riordan", "The Titan's Curse", "Disney Hyperion", "9781423101451", Livre::Audience::Jeunesse));
    bib2.ajoutLivre(Livre("Rick Riordan", "The Battle of the Labyrinth", "Disney Hyperion", "9781423101468", Livre::Audience::Jeunesse));
    bib2.ajoutLivre(Livre("Rick Riordan", "The Last Olympian", "Disney Hyperion", "9781423101475", Livre::Audience::Jeunesse));
    bib2.ajoutLivre(Livre("Philip Pullman", "Northern Lights", "Scholastic", "9780590660549", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Philip Pullman", "The Subtle Knife", "Scholastic", "9780590112895", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Philip Pullman", "The Amber Spyglass", "Scholastic", "9780440238157", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Markus Zusak", "The Book Thief", "Picador", "9780375831003", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Lois Lowry", "The Giver", "Houghton Mifflin", "9780544336261", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Patrick Ness", "A Monster Calls", "Walker", "9781406311525", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Cassandra Clare", "City of Bones", "Margaret K. McElderry", "9781416914280", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Cassandra Clare", "City of Ashes", "Margaret K. McElderry", "9781416914297", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Cassandra Clare", "City of Glass", "Margaret K. McElderry", "9781416914303", Livre::Audience::Adolescent));
    bib2.ajoutLivre(Livre("Stephen King", "It", "Viking", "9781501142970", Livre::Audience::Adulte));
    bib2.ajoutLivre(Livre("Stephen King", "The Shining", "Doubleday", "9780307743657", Livre::Audience::Adulte));
    bib2.ajoutLivre(Livre("Stephen King", "Misery", "Viking", "9781501143106", Livre::Audience::Adulte));
    bib2.ajoutLivre(Livre("Stephen King", "Carrie", "Doubleday", "9780307743664", Livre::Audience::Adulte));
    bib2.ajoutLivre(Livre("Agatha Christie", "Murder on the Orient Express", "Collins Crime Club", "9780007119318", Livre::Audience::Tout_public));
    bib2.ajoutLivre(Livre("Agatha Christie", "Death on the Nile", "Collins Crime Club", "9780007119325", Livre::Audience::Tout_public));

    bib3.ajoutLivre(Livre("Roald Dahl", "Matilda", "Jonathan Cape", "9780141365466", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Roald Dahl", "The Witches", "Jonathan Cape", "9780141365473", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Roald Dahl", "The BFG", "Jonathan Cape", "9780141365428", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Roald Dahl", "Charlie and the Chocolate Factory", "Knopf", "9780141365374", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("E.B. White", "Charlotte's Web", "Harper", "9780061124952", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Lewis Carroll", "Alice in Wonderland", "Macmillan", "9780141439761", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("C.S. Lewis", "The Lion, the Witch and the Wardrobe", "Geoffrey Bles", "9780064404990", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("C.S. Lewis", "Prince Caspian", "Geoffrey Bles", "9780064405003", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("C.S. Lewis", "The Voyage of the Dawn Treader", "Geoffrey Bles", "9780064405027", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Beatrix Potter", "The Tale of Peter Rabbit", "Warne", "9780723247708", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Maurice Sendak", "Where the Wild Things Are", "Harper", "9780060254926", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Dr. Seuss", "The Cat in the Hat", "Random House", "9780394800011", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Dr. Seuss", "Green Eggs and Ham", "Random House", "9780394800165", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("A.A. Milne", "Winnie-the-Pooh", "Methuen", "9780140361216", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Astrid Lindgren", "Pippi Longstocking", "Rabén & Sjögren", "9780140302158", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("L.M. Montgomery", "Anne of Green Gables", "L.C. Page", "9780553213133", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Frances Hodgson Burnett", "The Secret Garden", "Heinemann", "9780141439730", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Frances Hodgson Burnett", "A Little Princess", "Scribner's", "9780141439747", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Louisa May Alcott", "Little Women", "Roberts Brothers", "9780147514011", Livre::Audience::Tout_public));
    bib3.ajoutLivre(Livre("Kenneth Grahame", "The Wind in the Willows", "Methuen", "9780143039044", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("J.M. Barrie", "Peter Pan", "Hodder", "9780141322575", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("R.L. Stevenson", "Treasure Island", "Cassell", "9780141321004", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("R.L. Stevenson", "Kidnapped", "Cassell", "9780141321035", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Jules Verne", "Twenty Thousand Leagues Under the Sea", "Hetzel", "9780140390513", Livre::Audience::Tout_public));
    bib3.ajoutLivre(Livre("Jules Verne", "Around the World in Eighty Days", "Hetzel", "9780140390520", Livre::Audience::Tout_public));
    bib3.ajoutLivre(Livre("H.G. Wells", "The Time Machine", "Heinemann", "9780141439976", Livre::Audience::Adulte));
    bib3.ajoutLivre(Livre("H.G. Wells", "The War of the Worlds", "Heinemann", "9780141439977", Livre::Audience::Adulte));
    bib3.ajoutLivre(Livre("Arthur Conan Doyle", "A Study in Scarlet", "Ward Lock", "9780141036199", Livre::Audience::Tout_public));
    bib3.ajoutLivre(Livre("Arthur Conan Doyle", "The Hound of the Baskervilles", "Newnes", "9780141036205", Livre::Audience::Tout_public));
    bib3.ajoutLivre(Livre("Arthur Conan Doyle", "The Adventures of Sherlock Holmes", "Newnes", "9780141036212", Livre::Audience::Tout_public));
    bib3.ajoutLivre(Livre("Rudyard Kipling", "The Jungle Book", "Macmillan", "9780141325293", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Jack London", "The Call of the Wild", "Macmillan", "9780141321059", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Jack London", "White Fang", "Macmillan", "9780141321066", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Anna Sewell", "Black Beauty", "Jarrold", "9780141334882", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Michael Bond", "A Bear Called Paddington", "Collins", "9780007174164", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("E. Nesbit", "The Railway Children", "Wells Gardner", "9780141321608", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Mary Norton", "The Borrowers", "Dent", "9780141332024", Livre::Audience::Jeunesse));
    bib3.ajoutLivre(Livre("Mary Norton", "The Borrowers", "Dent", "9780141332025", Livre::Audience::Jeunesse)); // Duplicate 3
    bib3.ajoutLivre(Livre("Mary Norton", "The Borrowers", "Dent", "9780141332026", Livre::Audience::Jeunesse)); // Duplicate 4
    bib3.ajoutLivre(Livre("Mary Norton", "The Borrowers", "Dent", "9780141332027", Livre::Audience::Jeunesse)); // Duplicate 5

    Adherent a1("Martin", "Lucas", "12 Rue de la Paix", bib1, 5);
    Adherent a2("Bernard", "Chloé", "5 Avenue Foch", bib1, 3);
    Adherent a3("Thomas", "Hugo", "8 Boulevard Saint-Germain", bib1, 10);

    Adherent a4("Petit", "Manon", "22 Rue Lafayette", bib2, 5);
    Adherent a5("Robert", "Arthur", "3 Villa des Roses", bib2, 6);
    Adherent a6("Richard", "Emma", "17 Rue du Commerce", bib2, 2);
    Adherent a7("Durand", "Enzo", "9 bis Quai de Seine", bib2, 4);

    Adherent a8("Dubois", "Jade", "101 Rue de Rivoli", bib3, 8);
    Adherent a9("Moreau", "Nathan", "2 Rue de l'Eglise", bib3, 5);
    Adherent a10("Laurent", "Alice", "66 Avenue Victor Hugo", bib3, 7);

    cout<<endl;cout<<endl;
    bib1.afficheLivres();
    a8.empruntLivre("9780141321035");


    return 0;
}