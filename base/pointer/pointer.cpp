/*
 * author: qixianmango
 * data: 2023-08-09
 */

#include <iostream>
using namespace  std;
int main() {
    int a = 10;
    cout<<"aΪ"<<a<<endl;
    int *p;
    p = &a;
    cout<<"a�ĵ�ַΪ"<<&a<<endl;
    cout<<"ָ��pΪ"<<p<<endl;
    *p = 100;
    cout<<"aΪ"<<a<<endl;
    cout<<"*pΪ"<<*p<<endl;


    cout<<"p���ڴ�Ϊ"<<sizeof (p)<<endl;
    cout<<"*p���ڴ�Ϊ"<<sizeof (*p)<<endl;
    cout<<"a���ڴ�Ϊ"<<sizeof (a)<<endl;
    cout<<"&a���ڴ�Ϊ"<<sizeof (&a)<<endl;
    cout<<"int *���ڴ�Ϊ"<<sizeof (int *)<<endl;
    return 0;
}