/*
 * author: qixianmango
 * data: 2023-08-02
 */

#include <iostream>
using namespace std;

int max(int num1, int num2);

int main() {
    int m, n;
    cout<<"m = ";
    cin>>m;
    cout<<"n = ";
    cin>>n;
    cout<<endl;
    cout<<max(m,n)<<endl;
    return 0;
}

int max(int num1, int num2) {
    if(num1>num2)
        return num1;
    else
        return num2;
}