#include "tylypahka.h"
#include <iostream>
#include <conio.h>

using namespace std;

class OmatTiedot {
    public:
        string tyyppi;
        string nimi;
        string sauva;
        string tupa;
        string tupaGenetiivi;
    };

int main() {
    OmatTiedot myObj;

    std::cout << "Tervetuloa Tylypahkan noitien ja velhojen kouluun!" << std::endl;
    std::cout << "Paaset eteenpain Enterilla tai vastaamalla sinulle esitettyihin kysymyksiin. Kokeillaanpa. " << std::endl;
    getch();
    std::cout << "Tama on ensimmainen koulupaivasi Tylypahkassa. Tehtavasi on paasta johonkin koulun tuvista ja loytaa tiesi tuvan oleskeluhuoneeseen." << std::endl;
    getch();

    // Suoritetaan funktiot tyypin ja nimen selvittämiseksi
    myObj.tyyppi = tyyppi();
    myObj.nimi = nimi();
    std::cout << "Hauska tutustua " + myObj.tyyppi + " " + myObj.nimi + "!" << std::endl;
    getch();

    // Suoritetaan funktio taikasauvan selvittämiseksi
    myObj.sauva = sauva(myObj.tyyppi, myObj.nimi);
    std::cout << "Sinulla on nyt " + myObj.sauva << " valmistettu sauva." << std::endl;
    getch();

    // Suoritetaan funktio tuvan selvittämiseksi
    std::cout << "Seuraavaksi meidan pitaa selvittaa mihin tupaan kuulut..." << std::endl;
    getch();
    myObj.tupa = tupa();
    myObj.tupaGenetiivi = tupaGenetiivi(myObj.tupa);
    std::cout << "Tupasi on nyt " + myObj.tupa << std::endl;
    getch();

    // Suoritetaan lopuksi tekstitiedoston muodostamisen funktio
    std::cout << "Sinun pitaa enaa vain paasta " + myObj.tupaGenetiivi + " oleskeluhuoneeseen. Se on linnan toisella puolella - seuraa minua..." << std::endl;
    getch();
    tekstitiedosto(myObj.tyyppi, myObj.nimi, myObj.sauva, myObj.tupa, myObj.tupaGenetiivi);

    std::cout << "Olet saavuttanut nyt pelin lopun." << std::endl;
    std::cout << "THE END." << std::endl;
    getch();
}