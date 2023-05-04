// Mid Term Exam Q#4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Base character class
class Character 
{
protected:
    int id;
    string name;
    int maxPower;
    int strength;
public:
    Character(int id, const string& name, int maxPower, int strength): id(id), name(name), maxPower(maxPower), strength(strength) {}
    void walk() 
    {
        cout << name << " is walking." << endl;
    }
    void jump() 
    {
        cout << name << " is jumping." << endl;
    }
    void eat()
    {
        cout << name << " is eating." << endl;
    }
};
// Doraemon character class, inherits from Character
class Doraemon : public Character 
{
private:
    vector<string> gadgets;
    string partnerName;
public:
    Doraemon(int id, const string& name, int maxPower, int strength,
        const vector<string>& gadgets, const string& partnerName)
        : Character(id, name, maxPower, strength), gadgets(gadgets), partnerName(partnerName) {}
    void showGadgets() 
    {
        cout << name << " has the following gadgets: ";
        for (const auto& gadget : gadgets) 
        {
            cout << gadget << ", ";
        }
        cout << endl;
    }
    void launch() 
    {
        cout << name << " is launching something." << endl;
    }
    void attack()
    {
        cout << name << " is attacking." << endl;
    }
    void fly() 
    {
        cout << name << " is flying." << endl;
    }
};
// Ben 10 character class, inherits from Character
class Ben10 : public Character 
{
private:
    string watchName;
    vector<string> powers;
    int watchCharge;

public:
    Ben10(int id, const string& name, int maxPower, int strength,
        const string& watchName, const vector<string>& powers, int watchCharge)
        : Character(id, name, maxPower, strength), watchName(watchName), powers(powers), watchCharge(watchCharge) {}
    void rotateWatch() 
    {
        cout << name << " is rotating the watch." << endl;
    }
    void fight()
    {
        cout << name << " is fighting." << endl;
    }
    void drive() {
        cout << name << " is driving." << endl;
    }
    void launch()
    {
        cout << name << " is launching something." << endl;
    }
    void attack()
    {
        cout << name << " is attacking." << endl;
    }
    void fly()
    {
        cout << name << " is flying." << endl;
    }
};
int main() 
{
    vector<string> doraemonGadgets = { "Bamboo-copter", "Anywhere Door", "Time Machine" };
    Doraemon doraemon(1, "Doraemon", 100, 80, doraemonGadgets, "Nobita");
    vector<string> ben10Powers = { "Heatblast", "Four Arms", "XLR8" };
    Ben10 ben10(2, "Ben 10", 120, 90, "Omnitrix", ben10Powers, 80);
    doraemon.walk();
    doraemon.jump();
    doraemon.eat();
    doraemon.showGadgets();
    doraemon.launch();
    doraemon.attack();
    doraemon.fly();
    ben10.walk();
    ben10.jump();
    ben10.eat();
    ben10.launch();
    ben10.attack();
    ben10.fly();
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