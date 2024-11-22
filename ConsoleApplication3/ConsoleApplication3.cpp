// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Transport {
protected:
    string name;
    double weight;
    double razhodTopl;
public:
    Transport() = default;
    Transport(string _name, double _weiight, double _razhodTopl,double _costOfDelivery) {
        name = _name;
        weight = _weiight;
        razhodTopl = _razhodTopl;
    }
    void costOfDelivery() {
        cout << "NONE"<<endl;
    }
};

class Car :public Transport {
    double klvoPass;
public:
    Car() = default;
    Car(string _name, double _weiight, double _razhodTopl, double _costOfDelivery, double _klvoPass) :Transport(_name, _weiight, _razhodTopl) {
        klvoPass = _klvoPass;
    }
    void costOfDelivery(){
        cout << "Cost Of Delivery = 500$";
    }
};



class Airplane :public Transport {
    double klvoPass;
public:
    Airplane() = default;
    Airplane(string _name, double _weiight, double _razhodTopl, double _costOfDelivery, double _klvoPass) :Transport(_name, _weiight, _razhodTopl) {
        klvoPass = _klvoPass;
    }
    void costOfDelivery() {
        cout << "Cost Of Delivery = 2000$";
    }
};



class waterShip :public Transport {
    double klvoPass;
public:
    waterShip() = default;
    waterShip(string _name, double _weiight, double _razhodTopl, double _costOfDelivery, double _klvoPass) :Transport(_name, _weiight, _razhodTopl) {
        klvoPass = _klvoPass;
    }
    void costOfDelivery() {
        cout << "Cost Of Delivery = 1500$";
    }
};



class Gruz :public Transport {
    double klvoPass;
public:
    Gruz() = default;
    Gruz(string _name, double _weiight, double _razhodTopl, double _costOfDelivery, double _klvoPass) :Transport(_name, _weiight, _razhodTopl) {
        klvoPass = _klvoPass;
    }
    void costOfDelivery() {
        cout << "Cost Of Delivery = 300$";
    }
};



int main()
{
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
