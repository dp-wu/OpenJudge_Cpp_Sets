/* this code is incorrect for now. I'll update it after studying enheritance and polymorphism*/


#include <iostream>
using namespace std;
// 在此处补充你的代码
class Animal;
class Cat;
class Dog;

class Dog {
    static int number;
public:
    Dog() {number++;} // constructor
    ~Dog() {number--;} // destructor
    
    Dog(Dog & d) {number = d.number;} // copy constructor
    
    friend void print(); // declare friend
    friend class Animal;
};

class Cat {
    static int number;
public:
    Cat() {number++;} // constructor
    ~Cat() {number--;} // destructor
    
    Cat(Cat & c) {number = c.number;} // copy constructor
    
    friend void print(); // declare friend
    friend class Animal;
};

class Animal {
    static int number;
public:
//    Cat cn; // enclosed
//    Dog dn;
    
    Animal(){
        cout << "in the constructor" << endl;
        number++;
//        number += cn.number;
//        number += dn.number;
    }
    ~Animal() {
        cout << "in the destructor" << endl;
        number--;
//        number -= cn.number;
//        number -= dn.number;
    }
    
    friend void print();
//    friend class Cat;
//    friend class Dog;
};

int Animal::number = 0;
int Cat::number = 0;
int Dog::number = 0;


void print() {
    cout << Animal::number << " animals in the zoo, " << Dog::number << " of them are dogs, " << Cat::number << " of them are cats" << endl;
}

int main() {
    print();
    Dog d1, d2;
    Cat c1;
    print();
    Dog* d3 = new Dog();
//    Animal* c2 = new Cat;
    Cat* c3 = new Cat;
    print();
    delete c3;
//    delete c2;
    delete d3;
    print();
}
