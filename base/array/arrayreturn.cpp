/*
 * author: qixianmango
 * data: 2023-07-27
 */

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "ԭʼ����: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ��������
    int start = 0;
    int end = length - 1; // ע�����length ������Ĵ�С���������Ǵ�0��ʼ��
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    cout << "��������: ";
    for (int i = 0; i < length; i++) { // ʹ�� length ������ end
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}