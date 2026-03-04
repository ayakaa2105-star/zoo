#pragma once
#include "animal.h"
 //comment 
class Cat : public Animal {
public:
    Cat(std::string name, int age, bool isIndoor);
 
    void speak() const override;
    void purr() const;
 
    bool isIndoorCat() const;
 
private:
    bool isIndoor;
};

