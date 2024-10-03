/*
 * author: qixianmango
 * data: 2023-07-20
 */
// define 在文件上方定义

// const 在变量定义前加关键字const

#include "iostream"

using namespace std;

#define day 7


int main()
{
    const int month = 12;

    cout << "一周有" << day <<"天"<<endl;

    cout << "一年有" << month <<"月"<<endl;
    return 0;
}

