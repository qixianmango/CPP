/*
 * author: qixianmango
 * data: 2023-08-24
 */

#include <iostream>
#include <string>
using namespace std;

struct Information {
    string name;
    int age;
    string sex;
};

void bubblesort(struct Information arr[],int len) {
    for(int i = 0;i<len-1;i++) {
        for(int j = 0;j<len-i-1;j++) {
            if(arr[j].age>arr[j+1].age) {
                struct Information temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printinfo(struct Information arr[],int len) {
    cout<<"ÅÅÐòºó£º"<<endl;
    for(int i = 0;i < len; i++) {
        cout<<"name:"<<arr[i].name<<"\t"<<"age:"<<arr[i].age<<"\t"<<"sex:"<<arr[i].sex<<endl;
    }
}

int main()
{
    struct Information arr[5] = {
            {"people1",65,"girl"},
            {"people2",13,"girl"},
            {"people3",43,"boy"},
            {"people4",32,"girl"},
            {"people5",54,"boy"}
    };

    int len = sizeof(arr) / sizeof(arr[0]);
    cout<<"ÅÅÐòÇ°£º"<<endl;
    for(int i = 0;i < len; i++) {
        cout<<"name:"<<arr[i].name<<"\t"<<"age:"<<arr[i].age<<"\t"<<"sex:"<<arr[i].sex<<endl;
    }

    bubblesort(arr,len);

    printinfo(arr,len);
    return 0;
}