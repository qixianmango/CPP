/*
 * author: qixianmango
 * data: 2023-08-09
 */

#include <iostream>
using namespace  std;
int main() {
    int a = 10;
    cout<<"a为"<<a<<endl;
    int *p;
    p = &a;
    cout<<"a的地址为"<<&a<<endl;
    cout<<"指针p为"<<p<<endl;
    *p = 100;
    cout<<"a为"<<a<<endl;
    cout<<"*p为"<<*p<<endl;


    cout<<"p的内存为"<<sizeof (p)<<endl;
    cout<<"*p的内存为"<<sizeof (*p)<<endl;
    cout<<"a的内存为"<<sizeof (a)<<endl;
    cout<<"&a的内存为"<<sizeof (&a)<<endl;
    cout<<"int *的内存为"<<sizeof (int *)<<endl;
    return 0;
}