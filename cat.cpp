#include "cat.h"
#include <iostream>
 
Cat::Cat(std::string name, int age, bool isIndoor)
    : Animal(name, age), isIndoor(isIndoor)
{}
 
void Cat::speak() const {
    std::cout << name << ": ћ€у!\n";
}
 
void Cat::purr() const {
    std::cout << name << " мурлычет..\n";
}
 
bool Cat::isIndoorCat() const { return isIndoor; }

