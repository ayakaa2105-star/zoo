#include "dog.h"
#include <iostream>
 //lalala
Dog::Dog(std::string name, int age, std::string breed)
    : Animal(name, age),   // âûçîâ êîíñòðóêòîðà ðîäèòåëÿ
      breed(breed)
{}
 
void Dog::speak() const {
    std::cout << name << " (" << breed << "): Ãàâ!\n";
}
 
void Dog::fetch() const {
    std::cout << name << " ïðèí¸ñ ìÿ÷!\n";
}
 
std::string Dog::getBreed() const { return breed; }

