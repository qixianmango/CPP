/*
 * author: qixianmango
 * data: 2023-08-22
 */

#include <iostream>
#include "string"
using namespace std;


struct student
{
    string name;
    int age;
    int score;
};

void printstudent(struct student s)
{
    cout<<"子函数1"<<endl<<"name:\t"<<s.name<<endl<<"age:\t"<<s.age<<endl<<"score:\t"<<s.score<<endl;
}

void printstudentpointer(struct student *p)
{
    cout<<"子函数2"<<endl<<"name:\t"<<p->name<<endl<<"age:\t"<<p->age<<endl<<"score:\t"<<p->score<<endl;
}

int main()
{
    struct student stu;

    stu.score = 94;
    stu.age = 13;
    stu.name = "Student";
    cout<<"主函数"<<"name:\t"<<stu.name<<endl<<"age:\t"<<stu.age<<endl<<"score:\t"<<stu.score<<endl;
    cout<<"------------------------------"<<endl;
    printstudent(stu);
    cout<<"------------------------------"<<endl;
    printstudentpointer(&stu);
    return 0;
}