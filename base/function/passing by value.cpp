/*
 * author: qixianmango
 * data: 2023-08-02
 */

#include <iostream>
using namespace std;

void swap(int num1, int num2) {
    int change;
    cout << "����ǰ��" << "num1 = " << num1 << "��num2 = " << num2 << endl;
    change = num1;
    num1 = num2;
    num2 = change;
    cout << "������" << "num1 = " << num1 << "��num2 = " << num2 << endl;
    return ;
}

int main() {
    int m, n;
    m=1;
    n=2;
    cout << "����ǰ��" << "m = " << m << "��n = " << n << endl;
    swap(m, n); // ����swap����
    cout << "������" << "m = " << m << "��n = " << n << endl;
    return 0;
}