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
    struct student s[3] = {
        {"student1",13,95},
        {"student2",12,91},
        {"student3",13,97}
    };

    s[1].score = 100;

    for(int i = 0;i<3;i++) {
        cout<<"name:"<<s[i].name<<",age:"<<s[i].age<<",score:"<<s[i].score<<"."<<endl;
    }

    return 0;
}