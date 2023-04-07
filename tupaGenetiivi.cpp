#include "tylypahka.h"
#include <iostream>
using namespace std;

string tupaGenetiivi(string t) {
    string tupa = t;
    string tupaGenetiivi; 

    if (tupa == "Rohkelikko") {
        tupaGenetiivi = "Rohkelikon";
    }
    else if(tupa== "Puuskupuh") {
        tupaGenetiivi = "Puuskupuhin";
    }
    else if (tupa ==  "Korpinkynsi") {
        tupaGenetiivi = "Korpinkynnen";
    }
    else {
        tupaGenetiivi ="Luihuisen";
    }

return tupaGenetiivi;
}