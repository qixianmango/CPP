/*
 * author: qixianmango
 * data: 2023-08-22
 */

#include <iostream>
#include <string>
#include "cmath"
using namespace std;

struct Student {
    string student_name;
    int student_score;
};

struct Teacher {
    string teacher_name;
    string teacher_id;
    struct Student student[5];
};

void Assignment(struct Teacher teacher[], int len) {
    string nameseed = "ABCDE";
    for (int i = 0; i < len; i++) {
        teacher[i].teacher_name = "teacher_";
        teacher[i].teacher_name += nameseed[i];

        for (int j = 0; j < 5; j++) {
            teacher[i].student[j].student_name = "student_";
            teacher[i].student[j].student_name += nameseed[j];
            int random = rand() %  61 + 40;
            teacher[i].student[j].student_score = random;  // 赋予每个学生不同的分数
        }
    }
}

void printinfo(struct Teacher teacher[], int len) {
    for (int i = 0; i < len; i++) {
        cout << "老师姓名: " << teacher[i].teacher_name << endl;

        for (int j = 0; j < 5; j++) {
            cout << "\t学生姓名: " << teacher[i].student[j].student_name
                 << " 考试分数: " << teacher[i].student[j].student_score << endl;
        }
    }
}

int main() {
    srand((unsigned int )time(NULL));
    struct Teacher teacher[3];
    int len = sizeof(teacher) / sizeof(teacher[0]);
    Assignment(teacher, len);
    printinfo(teacher, len);

    return 0;
}