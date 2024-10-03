/*
 * author: qixianmango
 * data: 2023-08-02
 */

#include "iostream"
using namespace std;

int add(int num1,int num2){
    int sum;
    sum = num1 + num2;
    return sum;
}
int main()
{
    int m, n;
    cin>>m>>n;
    cout<<add(m,n)<<endl;
    return 0;
}