#include "tylypahka.h"
#include <iostream>
using namespace std;

string tupa(){
    string tupa;
    string tuvat[4] = {"Rohkelikko", "Puuskupuh", "Korpinkynsi", "Luihuinen"};
    int arvontaKerta = 1;
    char temp;

    std::cout << "Tylypahkassa on nelja tupaa: " << tuvat[0] << ", " + tuvat[1] + ", " + tuvat[2] +" ja " + tuvat[3] << std::endl;
    std::cout << "Pista lajitteluhattu paahasi, niin kuulemme mita mielta se on."<< std::endl;
    getch();
    while (true) { // Arvonta loop alkaa
            for (int i = 0; i<5; i++) {
                std::cout << "*" << std::endl;
            }

            int RandIndex = rand() % 4;
            tupa = tuvat[RandIndex];
            std::cout << "Lajitteluhatun mukaan olet " << tupa << "." << std::endl;
            getch();

            if (arvontaKerta < 2) { // Kysytään ekan jälkeen, halutaanko uusinta-arvonta:
                arvontaKerta = arvontaKerta+1;
                std::cout << "Lajitteluhatun on joskus hankala sijoittaa oppilaita. Oletko tyytyvainen tulokseen? (y/n)" << std::endl;
                cin >> temp;
                temp = toupper(temp);
        
                if (temp == 'N') {  
                    std::cout << "Selva - kysytaan hatulta viela kerran..." << std::endl;
                        getch();
                } // Palataan ylös uusinta-arvontaan
                else {
                    break;
                } // Ei uusinta-arvontaa, hypätään ulos
            } 
            else if (arvontaKerta=2){ // Maksimi arvontojen määrä, hypätään ulos arvonta-loopista
                std::cout << "Toivottavasti tama tupa on enemman mieleesi." << std::endl;
                break;
            }
    } // Arvonta loop päätty

    return tupa;
}

