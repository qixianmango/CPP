/*
 * author: qixianmango
 * data: 2023-08-22
 */

#include <iostream>
#include "string"
using namespace std;

struct student {
    int score;
    int age;
    string name;
};

int main() {
    struct student s1;
    s1.score = 94;
    s1.age = 13;
    s1.name = "Student1";
    cout<<"name:\t"<<s1.name<<endl<<"age:\t"<<s1.age<<endl<<"score:\t"<<s1.score<<endl;

    struct student s2 = {97,14,"student2"};
    cout<<"name:\t"<<s2.name<<endl<<"age:\t"<<s2.age<<endl<<"score:\t"<<s2.score<<endl;


    return 0;
}