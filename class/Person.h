#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std; // ���������

class Person {
  public:
    string name;
    int age;
    Speak();
    string getName();
    int getAge();
};

#endif