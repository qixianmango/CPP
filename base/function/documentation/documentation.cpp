/*
 * author: qixianmango
 * data: 2023-08-02
 */

#include "documentation.h"  // 包含头文件以获取函数声明

int swap(int num1, int num2) {
    int change;
    cout<<num1<<' '<<num2<<endl;
    change = num1;
    num1 = num2;
    num2 = change;
    cout<<num1<<' '<<num2<<endl;
    return 0;
}