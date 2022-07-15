// C++-Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int number = 22;
    int* ptr = &number;

    cout << "Value of Number = " << number << endl;
    cout << "Value of ptr = " << ptr << endl;
    cout << "Value in ptr = " << *ptr << endl;

    *ptr = 30;

    cout << "Value of ptr after change = " << ptr << endl;
    cout << "Value in ptr after change = " << *ptr << endl;
    cout << "Value of Number after change = " << number << endl;

    //Array
    int numbers[4] = { 1,2,3,4 };
    int arr_size = *(&numbers + 1) - &numbers[0]; //&numbers is end address, numbers OR &numbers[0] is starting address
    for (int i = 0; i < arr_size; i++) {
        int* pointer = &numbers[i];
        cout << "Value at " << i + 1 << " index is " << numbers[i] << " at address " << pointer << endl;
    }

    //Multi-Dimenstional Array
    int multi_arr[2][4] = { {4,3,2,1}, {9,8,7,6} };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            int* pointer = &multi_arr[i][j];
            cout << "Value at [" <<i<< "][" <<j<<"]th index is " << multi_arr[i][j] << " at address " << pointer << endl;
        }
    }

    //TODO Smart Pointers


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
