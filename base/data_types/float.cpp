/*
 * author: qixianmango
 * data: 2023-07-20
 */

#include "iostream"
using namespace std;
int main()
{
    float f = 3.14f;
    double d = 3.14;
    float e_1 = 3e2;
    float e_2 = 3e-2;

    //Ĭ�������ʵ��λС��
    cout<<"f="<<f<<"��f���ڴ��СΪ"<<sizeof(f)<<endl;
    cout<<"d="<<d<<"��d���ڴ��СΪ"<<sizeof(d)<<endl;

    cout<<"e_1="<<e_1<<endl;
    cout<<"e_2="<<e_2<<endl;
    return 0;
}
