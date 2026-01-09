#include <iostream>

using namespace std;
int game(int maxnum) {

    srand(time(NULL));
    int satluku = rand() % maxnum + 1;
    int laskuri = 0;
    int arvaus = 0;
    while ( satluku != arvaus) {
    cout << "Arvauksesi?";

    cin >> arvaus;
    laskuri++;
    if(satluku == arvaus) {
        cout << "Oikein" << endl;

    } else if (arvaus < satluku) {
        cout << "Arvauksesi on pienempi kuin satunnaisluku" << endl;

    } else if (arvaus > satluku) {
        cout << "Arvauksesi on suurempi kuin satunnaisluku" << endl;

    }

    }
    cout << "Satunnaisluku oli "  << satluku <<  " ja arvauksesi "  << arvaus << endl;
    return laskuri;
}







int main()
{

int tulos = game(40);
    cout << "Arvausten maara: " << tulos << endl;
    return 0;
}
