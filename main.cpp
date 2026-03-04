#include "dog.h"
#include "cat.h"
#include <iostream>
#include <vector>
#include <memory>
 
int main() {
    // Полиморфизм через указатели на базовый класс
    std::vector<std::unique_ptr<Animal>> animals;
 
    animals.push_back(std::make_unique<Dog>("Рекс", 3, "Немецкая овчарка"));
    animals.push_back(std::make_unique<Dog>("Бобик", 1, "Лабрадор"));
    animals.push_back(std::make_unique<Cat>("Мурка", 5, true));
    animals.push_back(std::make_unique<Cat>("Васька", 2, false));
 
    std::cout << "Всего животных: " << Animal::getcount() << "\n\n";
 
    // Полиморфный вызов - каждый говорит по-своему
    for (const auto& animal : animals) {
        animal->speak();
        animal->eat();
    }
 
    return 0;
    // При выходе из main деструкторы вызовутся автоматически
}

