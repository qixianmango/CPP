/*
 * author: qixianmango
 * data: 2023-07-27
 */

#include <iostream>
using namespace std;
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int *p = arr;
    cout<<"使用指针访问第一个元素"<<*p<<endl;
    p++;
    cout<<"使用指针访问第二个元素"<<*p<<endl;

    int i;
    int *q = arr;
    for(i=0;i<=9;i++) {
        cout<<"使用指针访问第"<<i<<"个元素"<<*q<<endl;
        q++;
    }

    return 0;
}