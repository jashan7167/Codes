#include<iostream>
using namespace std;
class Mammal {
public:
virtual bool lays_eggs() { return false; } //
// Mammal is polymorphic
// ...
};
class Cat: public Mammal {
public:
// ...
};
class Platypus: public Mammal {
public:
bool lays_eggs() { return true; }
// ...
};
class Dog: public Mammal {
public:
// ...
};

// A factory for objects derived from Mammal.
Mammal *factory() {
switch(rand() % 3 ) {
case 0: return new Dog;
case 1: return new Cat;
case 2: return new Platypus;
}
return 0;
}

int main()
{
Mammal *ptr; // pointer to base class
int i;
int c=0, d=0, p=0;

// generate and count objects
for(i=0; i<10; i++) {
ptr = factory(); // generate an object
cout << "Object is " << typeid(*ptr).name();
cout << endl;
// count it
if(typeid(*ptr) == typeid(Dog)) d++;
if(typeid(*ptr) == typeid(Cat)) c++;
if(typeid(*ptr) == typeid(Platypus)) p++;
}
cout << endl;
cout << "Animals generated:\n";
cout << " Dogs: " << d << endl;
cout << " Cats: " << c << endl;
cout << " Platypuses: " << p << endl;
return 0;
}