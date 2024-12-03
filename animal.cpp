#include <iostream>

using namespace std;

// polymorphism - mamy form ( many class use same method perform difference operation )

class Animal
{
public:
    void animalSound()
    {
        cout << "The animal makes a sound \n";
    }
};

class Cat : public Animal
{
public:
    void animalSound()
    {
        cout << "The cat makes a sound meow meow\n";
    }
};

class Dog : public Animal
{
public:
    void animalSound()
    {
        cout << "The dog makes a sound bow bow\n";
    }
};

int main()
{
    Animal myAnimal;
    Cat myCat;
    Dog myDog;

    myAnimal.animalSound();
    myCat.animalSound();
    myDog.animalSound();
    return 0;
}