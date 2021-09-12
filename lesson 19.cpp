
#include <iostream>

class Animals
{
    
public:
    virtual void MakeSound() const = 0;

};

class Dog :public Animals
{

public:
    void MakeSound() const override
    {
        std::cout << "Meow\n";
    }

};

class Cat :public Animals
{

public: 
    void MakeSound() const override
    {
        std::cout << "Woof\n";
    }

};

int main()
{

    Animals* animals[2];
    animals[0] = new Cat();
    animals[1] = new Dog();

    for (Animals* a : animals)
        a->MakeSound();
    
}
