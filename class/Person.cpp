#include "Person.h"
// ˵���ľ���ʵ��
Person::Speak() {
    cout << "hello My Name is " << name << endl;
}

// ��ȡ����
int Person::getAge(){
    cout << "I'm " << age << " years old" << endl;
}

// ��ȡ����
string Person::getName(){
    return name;
}