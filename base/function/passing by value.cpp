/*
 * author: qixianmango
 * data: 2023-08-02
 */

#include <iostream>
using namespace std;

void swap(int num1, int num2) {
    int change;
    cout << "交换前：" << "num1 = " << num1 << "，num2 = " << num2 << endl;
    change = num1;
    num1 = num2;
    num2 = change;
    cout << "交换后：" << "num1 = " << num1 << "，num2 = " << num2 << endl;
    return ;
}

int main() {
    int m, n;
    m=1;
    n=2;
    cout << "交换前：" << "m = " << m << "，n = " << n << endl;
    swap(m, n); // 调用swap函数
    cout << "交换后：" << "m = " << m << "，n = " << n << endl;
    return 0;
}