/*
 * author: qixianmango
 * data: 2023-07-27
 */

#include "iostream"
using namespace std;
int main()
{
    int arr[3];
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    cout<<arr[1]<<endl;

    int arr_2[3]={4,5,6};
    cout<<arr_2[2]<<endl;
    int i = 0;
    for(i = 0; i < 3; i++)
    {
        cout<<arr_2[i]<<endl;
    }

    int arr_3[]={7,8,9};
    cout<<arr_3[2]<<endl;
    int j = 0;
    for(j = 0; j < 3; j++)
    {
        cout<<arr_3[j]<<endl;
    }
    cout<<sizeof(arr_3)<<endl;

    return 0;
}