# C++ kurssin lopputyö

Tein tämän tekstiseikkailupelin osana Centria ammattikorkeakoulun kurssia **C++ -ohjelmointi** (AV00AC42-3009) keväällä 2023.

## Ohjeet

Harry Potter aiheista tekstiseikkailupeliä pelataan komentorivillä. Pelissä liikutaan eteenpäin Enterillä ja vastaamalla sinulle esitettyihin kysymyksiin.

## Kuvaus pelistä

Peli koostuu useammasta funktiosta, joita kutsutaan peli.cpp lähdekooditiedoston main-funktiosta.

![pelikuvaus][pelikuvaus]

[pelikuvaus]: kuvat/pelikuvaus.jpg


Funktiot on määritetty omaan .h tiedostoonsa:

![tylypahka_h][tylypahka_h]

[tylypahka_h]: kuvat/tylypahka_h.jpg


Funktiot palauttavat (viimeistä tekstitiedosto()-funktiota lukuunottamatta) arvoja OmatTiedot-luokan muuttujiin:

![OmatTiedot][OmatTiedot]

[OmatTiedot]: kuvat/OmatTiedot.jpg



**Tyyppi- ja nimi-funktioissa** pelaaja vaikuttaa itse valinnallaan siihen, onko hän tyypiltään noita/velho/taikaolento ja antaa input-arvona nimensä.

**Sauva-funktiossa** pelaajalle valitaan sauva hänen nimensä ensimmäisen kirjaimen perusteella, mutta käyttäjän on mahdollista tämän jälkeen vielä valita ns. villikortti.

**Tupa-funktiossa** pelaajan tupa arvotaan satunnaisesti (hyödynnetään rand()-funktiota). Pelaaja voi arpoa tuvan kahdesti.

Tuvan perusteella haetaan **tupaGenetiivi-funktiosta** genetiivimuotoinen tuvan nimi (esim. Rohkelikko -> Rohkelikon), jotta tätä voidaan hyödyntää jatkossa pelin output-teksteissä.

Lopuksi **tekstitiedosto-funktiossa** sisäänluetaan parametreilta kaikki aiemmista funktiosta saadut muuttujien arvot ja kirjoitetaan pelaajan koneelle tekstitiedosto, joka myös tulostetaan komentoriville.


## Prosessista

Päädyin korjaamaan ääkköset a- ja o-kirjaimiksi output-teksteissä, koska en saanut ääkkösiä toimimaan komentorivillä muuten järkevästi. Googlasin aihetta paljon, mutta testailuista huolimatta en saanut ääkkösiä toimimaan komentorivillä oikein.
Uskon, että teksti on nyt kuitenkin hiukan luettavampaa pelaajalle.

Haastavaa prosessissa oli myös se, että sain pelin jaksotettua pelaajalle miellyttäväksi ja selkeäksi. Päädyin ratkaisemaan tämän niin, että peli "keskeytyy" aika ajoin ```getch();``` komennolla ja peli jatkuu Enterillä.
Olen kuitenkin tyytyväinen lopputulokseen, eli pelin eri vaiheet jaksottuvat mielestäni hyvin. 

Lisäsin myös muutamiin kohtiin ```for``` looppeja, joissa tulostetaan tähtiä, jotta komentorivin lukeminen olisi pelaajalle toivon mukaan helpompaa.

Jos tekisin ohjelman nyt uusiksi, haluaisin paneutua erityisesti virheiden käsittelyyn, eli esim. miten ohjelma toimii jos annetaan väärä input tai tekstitiedoston kirjoituksessa tapahtuu virheitä.
Koitin hiukan huomioidakin tätä, esim. tyyppi()-funktiossa käyttäjältä odotetaan inputina joko n- tai v-vastausta (noita/velho), mutta jos hän antaa jonkin muun merkin, niin ohjelma olettaa hänen olevan taikaolento.
Kuitenkin jos inputina koittaa antaa string-arvon, niin ohjelma tulee kaatumaan. Tämmöisiin asioihin kiinnittäisin enemmän huomiota, jos tekisin ohjelman uusiksi.

Yleisesti kuitenkin ohjelman teko oli minusta melko helppoa ja pidin siitä kovasti.
