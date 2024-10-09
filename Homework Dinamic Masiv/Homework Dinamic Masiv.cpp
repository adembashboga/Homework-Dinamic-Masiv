﻿using  namespace std;
#include <iostream>

int main()
{
    srand(time(0));
    int size;
    cout << "Enter size: ";
    cin >> size;
    int* ptr = new int[size];
    for (int i = 0; i < size; i++) {
        ptr[i] = rand() % 41 - 20;
        cout << ptr[i] << "\t";
    }
    cout << endl;
    int size2 = 0, size3 = 0, size4 = 0;
    for (int i = 0; i < size; i++) {
        if (ptr[i] > 0)
        {
            size2++;
        }
        else if (ptr[i] < 0)
        {
            size3++;
        }
        else {
            size4++;
        }
    }
    int* ptr2 = nullptr;
    int* ptr3 = nullptr;
    int* ptr4 = nullptr;
    if (size2 > 0)
    {
        ptr2 = new int[size2];
    }
    if (size3 > 0)
    {
        ptr3 = new int[size3];
    }
    if (size4 > 0)
    {
        ptr4 = new int[size4];
    }
    for (int i = 0, j = 0; i < size; i++)
    {
        if (ptr[i] > 0)
        {
            ptr2[j] = ptr[i];
            j++;
        }
    }
    for (int i = 0, j = 0; i < size; i++)
    {
        if (ptr[i] < 0)
        {
            ptr3[j] = ptr[i];
            j++;
        }
    }
    for (int i = 0, j = 0; i < size; i++)
    {
        if (ptr[i] == 0)
        {
            ptr4[j] = ptr[i];
            j++;
        }
    }
    cout << endl;
    for (int i = 0; i < size2; i++)
    {
        cout << ptr2[i] << "\t";
    }
    cout << endl << endl;
    for (int i = 0; i < size3; i++)
    {
        cout << ptr3[i] << "\t";
    }
    cout << endl << endl;
    for (int i = 0; i < size4; i++)
    {
        cout << ptr4[i] << "\t";
    }
    cout << endl;
    delete[] ptr2;
    delete[] ptr3;
    delete[] ptr4;
}