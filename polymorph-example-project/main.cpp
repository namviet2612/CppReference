#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void GetFood()
    {
        std::cout << "Animal likes food" << '\n';
    }
};

class Dog : public Animal
{
public:
    void GetFood()
    {
        std::cout << "Dog likes bones" << '\n';
    }
};

class Cat : public Animal
{
public:
    void GetFood()
    {
        std::cout << "Cat likes fishes" << '\n';
    }
};

int main(int argc, char const *argv[]) {
    /* code */
    Animal *Pet;
    Cat Tom;
    Dog Spike;

    Pet = &Tom;
    Pet -> GetFood();

    Pet = &Spike;
    Pet -> GetFood();

    return 0;
}
