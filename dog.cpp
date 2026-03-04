#include "dog.h"
#include <iostream>
 
Dog::Dog(std::string name, int age, std::string breed)
    : Animal(name, age),   // вызов конструктора родител€
      breed(breed)
{}
 
void Dog::speak() const {
    std::cout << name << " (" << breed << "): √ав!\n";
}
 
void Dog::fetch() const {
    std::cout << name << " принЄс м€ч!\n";
}
 
std::string Dog::getBreed() const { return breed; }

