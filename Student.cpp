#include <iostream>
#include <string>
#include "Student.hpp"
using namespace std;

// default constructor
Student::Student() {
    cout << "Student constructor called" << endl;
}

// overloaded constructor
Student::Student(string n, int a) : name(n), age(a) {
    cout << "Overloaded constructor called" << endl;
}

// destructor
Student::~Student() {
    cout << "Student object destroyed!" << endl;
}

// setter for name
void Student::setName(string n) {
    name = n;
}

// setter for age
void Student::setAge(int a) {
    age = a;
}

// getter for name
string Student::getName() const {
    return name;
}

// getter for age
int Student::getAge() const {
    return age;
}