#include "tylypahka.h"
#include <iostream>
using namespace std;

string nimi() {  

    string nimi="";   
    char temp;
    
    while (true) {
        std::cout << "Mika nimesi on? " << std::endl;
        cin >> nimi;
        nimi[0]=toupper(nimi[0]);

        std::cout << "Olet siis " + nimi + "? (y/n)" << std::endl;
        cin >> temp;
        temp = toupper(temp);
        if (temp == 'N') {
            std::cout << "Aloitetaanpa alusta..." << std::endl;
            }
        else if (temp=='Y'){
            break;
        }
    } // Loop loppuu

    return nimi;

}
