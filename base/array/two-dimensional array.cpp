/*
 * author: qixianmango
 * data: 2023-07-27
 */

#include "iostream"
#include "string"
using namespace std;
int main()
{
    int arr[3][3] = {
            {100,90,70},
            {90,95,88},
            {90,95,70}
    };
    int i,j;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(i=0;i<3;i++) {
        int sum = 0;
        for(j=0;j<3;j++) {
            sum +=arr[i][j];
        }
        cout<<"第"<<i+1<<"个人总分为"<<sum<<endl;
    }
}