#include "tylypahka.h"
#include <iostream>
using namespace std;

string tyyppi() {  

    string tyyppi="";   
    char temp;
    
    std::cout << "Aloitetaanpa..." << std::endl;
    // Ylin looppi alkaa
    while (true) {
        //Tyypin looppi
        while (true) {

            std::cout << "Oletko noita (n) vai velho (v)?" << std::endl;
            cin >> temp;
            temp = toupper(temp);
            if (temp == 'N') {
                tyyppi = "Noita";
                break; // Hyppää tyypin loopista ulos
            }
            else if (temp == 'V') {
                tyyppi = "Velho";
                break; // Hyppää tyypin loopista ulos
            }
            else {
                tyyppi = "Taikaolento";
                std::cout << "Et vastannut kysymykseeni, mutta ei se mitaan. Tylypahkassa on kylla tilaa kaikille taikaolennoille!" << std::endl;
                break; // Hyppää tyypin loopista ulos
            }
        } // Tyypin looppi loppuu tähän

        std::cout << "Olet siis " + tyyppi + "? (y/n)" << std::endl;
        cin >> temp;
        temp = toupper(temp);
        if (temp == 'N') {
            std::cout << "Aloitetaanpa alusta..." << std::endl;
            }
        else if(temp == 'Y') {
            break;
        }
    } // Ylimmän tason loop loppuu

    return tyyppi;

}
