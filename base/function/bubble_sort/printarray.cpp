/*
 * author: qixianmango
 * data: 2023-08-02
 */

#include "printarray.h"

void printarray(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}