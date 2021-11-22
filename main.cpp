#include <string>
#include <vector>
#include <iostream>
using namespace std;

class pojazd{
    int numer;
    string nazwa;
    int ilosc;
     std::vector<std::string> miejsce{};
     string marka;
     string typ;
public:
    pojazd(int num, string nazwa_pojazdu,int il, string mark, string ty, string im = "", string nazwisk = "Puste"){
        numer = num;
        nazwa = nazwa_pojazdu;
        ilosc = il;
        miejsce.push_back(nazwisk);
        miejsce.push_back(im);
        marka = mark;
        typ = ty;

    }
    pojazd(){
        miejsce.push_back("Puste");
    }
    pojazd(pojazd &kopia){
        numer = kopia.numer;
        nazwa = kopia.nazwa;
        ilosc = kopia.ilosc;
        marka = kopia.marka;
        typ = kopia.typ;
    }
    pojazd(string d){
        miejsce.push_back(d);
    }
    pojazd(string b, string d){
       miejsce.push_back(b);
       miejsce.push_back(d);

    }
    void printImie(){
        for (int i = 0; i < miejsce.size(); ++i) {
            cout << miejsce[i] << " " << endl;
        }
    }
    void print(){
        cout << nazwa << "\t" << ilosc << "\t" << typ << endl;
    }

   void setMiejsce(string n, string i){
        miejsce.push_back(n);
        miejsce.push_back(i);
    }
    int getNumer(){
        return numer;
    }
    string getNazwa() {
        return nazwa;
    }
    string getMarka(){
        return marka;
    }
    string getType(){
        return typ;
    }
    void setName(string n){
        nazwa = n;
    }
    void setNumer(int n){
        numer = n;
    }
    ~pojazd(){
         miejsce.clear();
         cout << "vector cleared\n";
    }
};

int main()
{
    pojazd aircraft(124135,"samolot", 3,"Boeing","bezzalogowy", "David","Burchakov");
    aircraft.printImie();
      pojazd veicle(124135,"samolot", 3, "Boeing","bezz");

      pojazd pociag(aircraft);
      pociag.print();
}