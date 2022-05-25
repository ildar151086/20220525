/*
 Создадим примитивную структуру наследования. Соберем животное — пельмень.
Класс рога и класс копыта
*/

#include <iostream>

using namespace std;

class Testo {
    string muka;
    int wes;
    int sol;
    int yaso;
public:
    Testo() {
        muka = " пшено ";
        sol = 10;
        yaso = 2;
        wes = 1;
    };
    Testo(string muka, int sol, int yaso, int wes) {
        this->muka = muka;
        this->sol = sol;
        this->yaso = yaso;
        this->wes = wes;
    };
    string getMuka() {
        return muka;
    };
    int getSol() {
        return sol;
    };
    int getYaso() {
        return yaso;
    };
    int getWes() {
        return wes;
    };
    void print() {
        cout << "Используеться мука " << muka;
    }
};

class Mayso {
    string mayso;
    int wes;
    int sol;
    int peres;
public:
    Mayso() {
        mayso = " говядина ";
        sol = 30;
        peres = 5;
        wes = 1;
    };
    Mayso(string mayso, int sol, int peres, int wes) {
        this->mayso = mayso;
        this->sol = sol;
        this->peres = peres;
        this->wes = wes;
    };
    string getMayso() {
        return mayso;
    };
    int getSol() {
        return sol;
    };
    int getPeres() {
        return peres;
    };
    int getWes() {
        return wes;
    };
    void print() {
        cout << "Используеться мясо " << mayso;
    }
};


class Pelmen : public Testo, public Mayso {
public:
    void print() {
        cout << " Пельмени " << endl;
        Testo::print();
        Mayso::print();
    };
};

int main(){
    setlocale(LC_ALL, "RUS");

    Pelmen pelmen;

    pelmen.print();

    return 0;
}
