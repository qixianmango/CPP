/*
 * author: qixianmango
 * data: 2023-08-02
 */


// 封装一个函数，利用冒泡排序，实现对整型数组的升序排序

#include "iostream"
#include "bubble_sort.h"
#include "printarray.h"

using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,10};
    int len;
    len = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr,len);
    printarray(arr,len);
    system("pause");
    return 0;
}