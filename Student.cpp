#include "Student.hpp"
#include <iostream>
using namespace std;

Student::Student() {
    cout << "Student created" << endl;
}

Student::~Student() {
    cout <<"Student deeeestroyed!"<< endl;
}

void Student::setName(const string& n) {
    name = n;
}

void Student::setAge(int a) {
    age = a;
}

string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}