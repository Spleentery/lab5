#include <iostream>
using namespace std;
const double pi = 3.14159265359;
class complex{
public:
    double real;
    double imag;

    complex(double X,double Y){
          real = X;
          imag = Y;
    }
    double absolute() const{  // distance between  {0,0} and z
        double abs = this->real* this->real+this->imag* this->imag;
        abs = sqrt(abs);
        return abs;
    }

};
class vector{
      double x;
      double y;
public:

    vector(double x,double y): x(x),y(y){

    }
    double length() const{
        return sqrt(x*x+y*y);
    }

     vector operator+(const vector &rhs) const {
        return {x + rhs.x, y + rhs.y};
    }

    vector &operator+=(const vector &rhs) {
        this->x = this->x + rhs.x;
        this->y = this->y + rhs.y;
        return *this;
    }
    vector operator-(const vector &odej) const{
        return {x-odej.x, y - odej.y};
    }
    vector &operator-=(const vector &odej){
        this->x = this->x - odej.x;
        this->y = this->y - odej.y;
        return *this;
    }
    vector operator*(const vector &ilocz){
        return {x = x*ilocz.x, y = this->y*ilocz.y};
    }
    vector &operator*=(const vector &ilocz) {
        this->x = this->x * ilocz.x;
        this->y = this->y * ilocz.y;
        return *this;
    }
    vector operator==(const vector &rawn){
        if(this->x == rawn.x && this->y == rawn.y){
            cout << "are equal" << endl;
        } else{
            cout << "are not equal" << endl;
        }
        return *this;
    }
    vector operator&(const double num){ //mnozenie przez skalar
        this->x = this->x*num;
        this->y = this->y*num;
        return *this;
    }
    vector &operator~(){
        x = -x;
        y = -y;
        return *this;
    }

    void przecz(){
        this->x = -x;
        this->y = -y;
    }
    double getx(){
        return x;
    }
    double gety(){
        return y;
    }
    void print(){
        cout << "vector data: " << this->x << ", " << this->y << endl;
    }
};

int main () {
       vector a(4,10);
       vector b(3,3);
       a.print();
       vector c = a*b;
       c.print();
       a.operator*(b);
       vector e(3,3);
       b==e;
       a==b;
       e.operator&(10);
       e.operator~();
       a.print();
       e.print();
       complex z(3,7);
       cout << "Real part:" << z.real << endl;
       cout << "imag part:" << z.imag << endl;
      cout << z.absolute() << endl;


}
