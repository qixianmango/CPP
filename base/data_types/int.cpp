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

    cout<<"i_1������ռ�ڴ�ռ�Ϊ"<<sizeof(i_1)<<endl;

    cout<<"short������ռ�ڴ�ռ�Ϊ"<<sizeof(short)<<endl;
    cout<<"int������ռ�ڴ�ռ�Ϊ"<<sizeof(int)<<endl;
    cout<<"long������ռ�ڴ�ռ�Ϊ"<<sizeof(long)<<endl;
    cout<<"long long������ռ�ڴ�ռ�Ϊ"<<sizeof(long long)<<endl;

    return 0;
}