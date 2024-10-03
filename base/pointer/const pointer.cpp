/*
 * author: qixianmango
 * data: 2023-08-09
 */

#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int *p;
    p = &a;
    cout<<*p<<endl;

    int b = 20;
    int c = 30;
    int d = 50;
    int e = 60;

    cout<<endl;
    // 常量指针 const修饰指针 可以更改指针指向(q=&c),但是指向的值不能修改(*q=2)
    const int *q =&b;
    cout<<*q<<endl;
    q = &c;
    cout<<*q<<endl;

    // 指针常量 不能更改指针指向(q=&c),但是指向的值可以修改(*q=2)
    cout<<endl;
    int * const r = &c;
    cout<<*p<<endl;
    *p = 40;
    cout<<*p<<endl;

    // 既不可以修改指针指向(s = &e)，又不可以修改指针指向的值(*s = 70)
    cout<<endl;
    const int * const s = &d;
    cout<<*s<<endl;


    return 0;
}