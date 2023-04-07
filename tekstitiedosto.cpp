#include "tylypahka.h"
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
using namespace std;
namespace fs = std::filesystem;

void tekstitiedosto(string ty, string n, string s, string tu, string tug) {
    string tyyppi = ty;
    string nimi = n;
    string sauva = s;
    string tupa = tu;
    string tupaGenetiivi = tug;

    string teksti = ("TYLYPAHKAN NOITIEN JA VELHOJEN KOULU \n\n\nHyvä " + tyyppi + " " + nimi + ",\n\n meillä on ilo saada sinut oppilaaksi kouluumme. Hyvä, että löysitkin jo "+ tupaGenetiivi + " oleskeluhuoneeseen - tämä on kotisi seuraavan lukuvuoden ajan. \n\nLukukalenterissasi on huomisesta alkaen taikajuomien valmistusta, pimeyden olennoilta suojautumista ja huispausta. Muista olla kelpo " + tupa + " ja pidä huolta, että olet ajoissa ja pidä sauvastasi huolta (kuulinkin sauvaseppä Ollivanderilta, että sinun on " + sauva + " tehty, joten se on erityisen arvokas!). \n\nTaianomaista kouluvuotta Tylypahkassa, \n\nMinerva McGarmiwa \nTylypahkan rehtori");

    // Haetaan polku/sijainti:
    fs::path omaPolku = fs::current_path();
    std::string omaPolku_str = omaPolku.string();
    string polku = omaPolku_str;
    string tiedosto = "";
    string tiedostoNimi = "tervetuloaTylypahkaan.txt";
    tiedosto = (polku+tiedostoNimi);

    for (int i = 0; i<5; i++) {
        std::cout << "*" << std::endl;
        }

    // Tiedoston kirjoitus
    ofstream myFile(tiedostoNimi);
    if (myFile) {
        myFile << teksti;
        myFile.close();
        std::cout << "Huoneessa sinua odottaa kirje:" << std::endl;
        getch();
        std::cout << teksti << std::endl;
        getch();
        std::cout << "Loydat kirjeen myos taalta: " + tiedosto << std::endl;
        getch();
    }
    // Virhekäsittely
    if (myFile.bad()) {
        std::cout << "Virhe havaittu!" << std::endl;
    }

}
