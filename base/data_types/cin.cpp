/*
 * author: qixianmango
 * data: 2023-07-20
 */

#include "iostream"
#include "string"
using namespace std;

int main()
{
    // int
    int a = 0;
    cout << "a=" << a <<endl;
    cout << "请给a赋值："<<endl;
    cin >> a;
    cout << "a=" << a <<endl;

    // float
    float b = 3.14f;
    cout << "b=" << b <<endl;
    cout << "请给b赋值："<<endl;
    cin >> b;
    cout << "b=" << b <<endl;

    // char
    char c = 'a';
    cout << "c=" << c <<endl;
    cout << "请给c赋值："<<endl;
    cin >> c;
    cout << "c=" << c <<endl;

    // string
    string d = "hello";
    cout << "d=" << d <<endl;
    cout << "请给d赋值："<<endl;
    cin >> d;
    cout << "d=" << d <<endl;

    // bool
    bool e = false;
    cout << "e=" << e <<endl;
    cout << "请给e赋值："<<endl;
    cin >> e;
    cout << "e=" << e <<endl;

    return 0;
}