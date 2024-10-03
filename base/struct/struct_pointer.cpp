/*
 * author: qixianmango
 * data: 2023-08-22
 */

#include <iostream>
#include "string"
using namespace std;

struct student {
    string name;
    int age;
    int score;
};

int main()
{
    struct student s1 = {"student1",14,95};


    student *p = &s1;

    cout<<"name:\t"<< p->name <<endl<<"age:\t"<< p->age <<endl<<"score:\t"<< p->score <<endl;
    return 0;
}