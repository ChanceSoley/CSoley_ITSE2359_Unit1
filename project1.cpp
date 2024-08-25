#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream inFile("student_data.txt");
    int size = 53;
    int age[size];
    float gpa[size];
    string stuNames[size];

    if (!inFile){
        cerr << "File Could Not Open!" << endl;
    }
    
    for (int i = 0; i < size ; i++){
        inFile >> stuNames[i] >> age[i] >> gpa[i];
    }

    inFile.close();

    //average gpa
    float sumGpa = 0.0;
    for (int i = 0; i < size; i++){
        sumGpa += gpa[i];
    }
    float averageGpa = sumGpa / size;
    cout << "Average GPA : " << averageGpa << endl;
    cout << endl;

    //highest grade
    float highGpa = gpa[0];
    for (int i = 1; i < size; i++){
        if (gpa[i] > highGpa){
            highGpa = gpa[i];
        }
    }

    cout << "Highest GPA : " << highGpa << endl;
    for (int i = 0; i < size; i++){
        if(gpa[i] == highGpa){
            cout << stuNames[i] << ", ";
        }
    }

    cout << endl;
    cout << endl;

    //oldest student
    int oldest = age[0], youngest = age[0];
    for (int i = 0; i < size; i++){
        if (age[i] > oldest){
            oldest = age[i];
        }
        if (age[i] < youngest){
            youngest = age[i];
        }
    }

    cout << "Oldest Student(s) : ";
    for (int i = 0; i < size; i++){
        if(age[i] == oldest){
            cout << stuNames[i] << ", ";
        }

    }
    cout << endl;
    cout << endl;

    cout << "Youngest Student(s) : ";
    for (int i = 0; i < size; i++){
        if(age[i] == youngest){
            cout << stuNames[i] << ", ";
        }

    }
    cout << endl;

    return 0;
}