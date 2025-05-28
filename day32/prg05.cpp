#include<iostream>

using namespace std;

class Animal
{
public:
	void eat() { cout << "eat"; }
	void walk() { cout << "walk"; }
	void makeasound() { cout << "makes a sound"; }
	void soundslike() { cout << "sounds : "; }
};

class Cat :public Animal
{
public:
	void dispC() { cout << "Cat"; }
	void soundslike() { cout << "Meows."; }
};

class Dog :public Animal
{
public:
	void dispD() { cout << "Dog"; }
	void soundslike() { cout << "Barks"; }
};



int main()
{
	Animal* bcPtr;
	
	Cat c;
	
	c.dispC();
	c.eat();
	c.makeasound();
	c.walk();
	c.soundslike();
	cout << endl;
	Dog d;
	d.dispD();
	d.eat();
	d.makeasound();
	d.walk();
	d.soundslike();


	cout << "======================" << endl;

	bcPtr = &c;
	bcPtr->eat();
	bcPtr->walk();
	bcPtr->makeasound();
	bcPtr->soundslike();

	cout << endl;

	bcPtr = &d;
	bcPtr->eat();
	bcPtr->walk();
	bcPtr->makeasound();
	bcPtr->soundslike();


}