#include "animal.h"
#include <iostream>
using namespace std;
int Animal::count = 0;
Animal::Animal(string name, int age) : name(name), age(age){
	count++;
}
Animal::~Animal() {}
void  Animal::eat() const{
	cout<<name<<" est edu"<<endl;
}
string Animal::getname() const{ return name;}
int Animal::getage() const{ return age;}
int Animal::getcount(){ return count;}

