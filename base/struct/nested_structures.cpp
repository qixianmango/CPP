/*
 * author: qixianmango
 * data: 2023-08-22
 */

#include <iostream>
#include "string"
#include <iomanip>
using namespace std;

struct student {
    string name;
    int age;
    int score;
};

struct teacher {
    string name;
    int id;
    struct student stu;
};

int main()
{
    teacher t;
    t.name = "teacher";
    t.id = 0001;
    t.stu.name = "student";
    t.stu.age = 13;
    t.stu.score = 94;

    cout<<"teacher.name:\t"<<t.name<<endl<<"teacher.id:\t"<<setfill('0') << setw(4)<<t.id<<endl<<"stu.name:\t"<<t.stu.name<<endl<<"stu.age:\t"<<t.stu.age<<endl<<"stu.score:\t"<<t.stu.score<<endl;

    return 0;

}

