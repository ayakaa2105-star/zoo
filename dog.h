#pragma once
#include "animal.h"   // наследуем от Animal
#include <string>
 
class Dog : public Animal {
public:
    Dog(std::string name, int age, std::string breed);
 
    // Переопределяем виртуальный метод
    void speak() const override;
    void fetch() const;
 
    std::string getBreed() const;
 
private:
    std::string breed;
};

