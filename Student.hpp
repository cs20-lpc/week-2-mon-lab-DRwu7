#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student();                    // default constructor
    ~Student();                   // destructor

    void setName(const string& n);
    void setAge(int a);
    string getName() const;
    int getAge() const;
};

#endif