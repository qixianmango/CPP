/*
 * author: qixianmango
 * data: 2023-07-27
 */

#include <iostream>
using namespace std;
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int *p = arr;
    cout<<"ʹ��ָ����ʵ�һ��Ԫ��"<<*p<<endl;
    p++;
    cout<<"ʹ��ָ����ʵڶ���Ԫ��"<<*p<<endl;

    int i;
    int *q = arr;
    for(i=0;i<=9;i++) {
        cout<<"ʹ��ָ����ʵ�"<<i<<"��Ԫ��"<<*q<<endl;
        q++;
    }

    return 0;
}