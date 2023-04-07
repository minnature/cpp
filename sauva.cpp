#include "tylypahka.h"
#include <iostream>
using namespace std;

string sauva(string t, string n){
    string tyyppi = t;
    string nimi = n;
    string sauva = "";

    std::cout << "Jokainen " + tyyppi + " tarvitsee taikasauvan." << std::endl;
    getch();
    std::cout << "Taikamaailmassa sauva kuitenkin valitsee omistajansa, eika toisinpain..." << std::endl;
    getch();

    for (int i = 0; i<5; i++) {
        std::cout << "*" << std::endl;
        }

    char eka;
    nimi[0] = eka;

    std::string ekatKirjaimet, tokatKirjaimet;
    ekatKirjaimet = "ABCDEFGHI";
    tokatKirjaimet = "JKRLMNOPQR";

    if (ekatKirjaimet.find(eka)) {
        sauva = "lohikaarmeen sydanjuuresta";
    }
    else if (tokatKirjaimet.find(eka)) {
        sauva = "yksisarvisen hantajouhista";
    }
    else {
        sauva = "feenikslinnun pyrstosulasta";
    }

    std::cout << "Tama " + sauva + " tehty sauva on kuin sinulle tehty!" << std::endl;
    std::cout << "Oletko samaa mielta? (y/n)" << std::endl;
    char temp;
    cin >> temp;
    temp = toupper(temp);
        
    if (temp == 'N') {  
        std::cout << "Vai niin...harmillista." << std::endl;
        std::cout << "Minulla on viela yksi sauva, joka voisi sopia sinulle." << std::endl;
        getch();
        std::cout << "Se on valmistettu veelan hiuksista. Valitsetko ennemmin sen? (y/n)" << std::endl;
        cin >> temp;
        temp = toupper(temp);
        if (temp == 'Y') {
            sauva = "veelan hiuksista"; 
            }
        else {
            std::cout << "Pysyttelet siis alkuperaisessa sauvassa. Fiksu valinta..." << std::endl;
        }
    }

    return sauva;
}
