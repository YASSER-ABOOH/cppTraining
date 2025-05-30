//Animal Sound


#include <iostream>
using namespace std;

class Animal {
public:
    void make_sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void make_sound() {
        cout << "Dog Barks" << endl;
    }
};

class Cat : public Animal {
public:
    void make_sound() {
        cout << "Cat Purrs" << endl;
    }
};

int main() {

    Dog d;
    

    cout << "Dog sound: ";
    d.make_sound();

    cout << endl;

    Cat c;
    cout << "Cat sound: ";
    c.make_sound();

    return 0;
}