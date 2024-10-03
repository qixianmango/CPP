/*
 * author: qixianmango
 * data: 2023-08-02
 */

#include "iostream"
using namespace std;
int main()
{
    int arr[10] = {10,8,6,4,2,1,3,5,7,9};
    int i,j;
    int temp;
    cout<<"原始数列：";
    for(i=0;i<10;i++) {
        cout << arr[i] << " ";
    }
    for(i=0;i<10-1;i++) {
        for(j=0;j<10-i-1;j++){
            if(arr[j]<arr[j+1]) {
               temp = arr[j+1];
               arr[j+1] = arr[j];
               arr[j] = temp;
            }
        }
    }
    cout<<endl;
    cout<<"从大到小排序数列：";
    for(i=0;i<10;i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}