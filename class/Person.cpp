#include "Person.h"
// 说话的具体实现
Person::Speak() {
    cout << "hello My Name is " << name << endl;
}

// 获取年龄
int Person::getAge(){
    cout << "I'm " << age << " years old" << endl;
}

// 获取名称
string Person::getName(){
    return name;
}