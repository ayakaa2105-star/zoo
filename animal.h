#pragma once
#include <string>
using namespace std;
class Animal{
	public:
		Animal(string name, int age);
		virtual ~Animal();
		virtual void speak() const = 0;
		virtual void eat() const;
		string getname() const;
		int getage() const;
		static int getcount();
		protected:
			string name;
			int age;
			private:
				static int count;
};
