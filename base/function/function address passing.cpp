/*
 * author: qixianmango
 * data: 2023-08-02
 */

#include <iostream>
using namespace std;

void swap(int *p1,int *p2);

void swap(int *p1,int *p2) {
    int p;
    p = *p1;
    *p1 = *p2;
    *p2 = p;
}


int main() {
    int m,n;
    m = 1;
    n = 2;
    cout<<m<<" "<<n<<endl;
    swap(&m,&n);
    cout<<m<<" "<<n<<endl;
}
