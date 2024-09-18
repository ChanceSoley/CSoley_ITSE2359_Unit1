#include<iostream>

using namespace std;

struct student{
    string name;
    int age;
    float gpa;
};

int main(){
    student student1 = {"John Doe", 20, 3.5 };

    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "GPA: " << student1.gpa << endl;

    return 0;
};