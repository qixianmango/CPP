/*
 * author: qixianmango
 * data: 2023-07-20
 */

#include "iostream"
#include "string"
using namespace std;
int main()
{
    bool flag = true;
    cout << flag <<endl;

    flag = false;
    cout << flag <<endl;

    flag = 1;
    cout << flag <<endl;

    flag = 0;
    cout << flag <<endl;

    cout<<"bool类型所占内存空间为"<<sizeof(bool)<<endl;
}