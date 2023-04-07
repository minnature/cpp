#ifndef TYLYPAHKA_H
#define TYLYPAHKA_H

#include <iostream>
#include <fstream>
#include <conio.h>
#include "tyyppi.cpp"
#include "nimi.cpp"
#include "sauva.cpp"
#include "tupa.cpp"
#include "tupaGenetiivi.cpp"
#include "tekstitiedosto.cpp"
using namespace std;

string tyyppi();
string nimi();
string sauva(string t, string n);
string tupa();
string tupaGenetiivi(string t);
void tekstitiedosto(string ty, string n, string s, string tu, string tug);

#endif


