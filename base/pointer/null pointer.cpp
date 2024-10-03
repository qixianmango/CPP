/*
 * author: qixianmango
 * data: 2023-08-09
 */

#include <iostream>
using namespace std;
int main() {
    // 用于初始化指针且不可以访问
    int *p = NULL;

    int *q = (int *)0x1100;
    cout<<*q<<endl;
    return 0;
}