/*
 * author: qixianmango
 * data: 2023-07-20
 */

#include "iostream"
using namespace std;
int main()
{
    short i_1 = 10;
    int i_2 = 10;
    long i_3 = 10;
    long long i_4 = 10;

    cout<<"i_1="<<i_1<<endl;
    cout<<"i_2="<<i_2<<endl;
    cout<<"i_3="<<i_3<<endl;
    cout<<"i_4="<<i_4<<endl;

    cout<<"i_1类型所占内存空间为"<<sizeof(i_1)<<endl;

    cout<<"short类型所占内存空间为"<<sizeof(short)<<endl;
    cout<<"int类型所占内存空间为"<<sizeof(int)<<endl;
    cout<<"long类型所占内存空间为"<<sizeof(long)<<endl;
    cout<<"long long类型所占内存空间为"<<sizeof(long long)<<endl;

    return 0;
}