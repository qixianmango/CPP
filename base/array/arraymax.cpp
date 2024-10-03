/*
 * author: qixianmango
 * data: 2023-07-27
 */

#include "iostream"
using namespace std;
int main()
{
    int arr[5]={1,3,2,5,4};
    int i = 0;
    int max = 0;
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    cout << max << endl;

    return 0;
}

