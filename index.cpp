#include <iostream>
#include <stdlib.h>
#include "class/Person.cpp"
#include "utils/AgeUtils.cpp"

using namespace std;

int main(){
    Person p;
    AgeUtils ageUtils;
    p.name = "aaa"; 
    p.age = 12;
    p.Speak();
    p.getAge();
    // ¼Ó·¨²Ù×÷
    int newAge = ageUtils.addAge(p.age, 10);
    cout << "I'm " << newAge << " years old" << endl;  
    system("pause");
    return 0;
}