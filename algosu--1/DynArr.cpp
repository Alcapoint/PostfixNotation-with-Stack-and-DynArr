#include<iostream>

using namespace std;



int* Array(int*& arr, int num)
{
    arr = new int[num];
    return arr;
}

void delArray(int* arr)
{
    delete[]arr;
}
 

void Init(int*& arr, int num)
{
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
}

void Print(int* arr, int num)
{
    for (int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }
}

int* add(int*& arr, int num, int data)
{
    int* temp = NULL;
    int numTemp = num + 1;
    temp = Array(temp, numTemp);
    for (int i = 0; i < num; i++) temp[i] = arr[i]; 
    temp[numTemp - 1] = data;
    delArray(arr);
    return temp;
}

int* del(int*& arr, int num)
{
    int* temp = NULL;
    int numTemp = num - 1;
    temp = Array(temp, numTemp);
    for (int i = 0; i < numTemp; i++) temp[i] = arr[i];
    delArray(arr);
    return temp;
}


