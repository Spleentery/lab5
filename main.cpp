#include <iostream>
using namespace std;

class windows{
    static string najnowsza_wersja_oprogramowania;
    string zainstalowana_wersja_oprogramowania = "v1.0";
public:
    static string opublikujNoweOprogramowanie(string nowe){
        return najnowsza_wersja_oprogramowania = (nowe);
    }
    void update(){
        zainstalowana_wersja_oprogramowania = najnowsza_wersja_oprogramowania;
    }

string getWin() const{
        return zainstalowana_wersja_oprogramowania;
    }
    void print() const{
            cout << this->getWin()<< endl;
    }

};
string windows::najnowsza_wersja_oprogramowania ="v2.0";


int main () {
     windows eleven;
     eleven.print();
     eleven.update();
     eleven.print();
     eleven.opublikujNoweOprogramowanie("v3.0");
     eleven.update();
     eleven.print();

}
