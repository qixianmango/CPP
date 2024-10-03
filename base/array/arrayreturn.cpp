/*
 * author: qixianmango
 * data: 2023-07-27
 */

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "原始数组: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 逆序数组
    int start = 0;
    int end = length - 1; // 注意这里，length 是数组的大小，但索引是从0开始的
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    cout << "逆序数组: ";
    for (int i = 0; i < length; i++) { // 使用 length 而不是 end
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}