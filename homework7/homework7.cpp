﻿#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    //task 1

    /*
    int count = 0;

    for (int i = 100; i < 1000; i++) {
        int first = 0, second = 0, third = 0;
        first = i / 100;
        second = (i / 10) % 10;
        third = i % 10;
        if(first == second && first == third){
        }
        else if (first == second || first == third) {
            count++;
        }
        else if (second == third) {
            count++;
        }
    }
    cout << count;
    */

    //task 2

    /*
    int count = 0;

    for (int i = 100; i < 1000; i++) {
        int first = 0, second = 0, third = 0;
        first = i / 100;
        second = (i / 10) % 10;
        third = i % 10;
        if ((first != second && first != third) && (second != third)) {
            count++;
        }
    }
    cout << count;
    */

    //task 3

    /*
    int user_number, temp;
    cout << "Enter number, all 3 and 6 will be removed->";
    cin >> user_number;
    temp = user_number;
    int counter = 0;

    while (temp != 0) {
        if (temp % 10 != 3 && temp % 10 != 6) {
            counter++;
        }
        temp = temp / 10;
    }
    int* arr = new int[counter];

    for (int i = 0; i != counter; ) {
        if (user_number % 10 != 3 && user_number % 10 != 6) {
            arr[i] = (user_number % 10);
            i++;
        }
        user_number = user_number / 10;
    }

    for (int i = counter-1; i >=0; i--) {
        cout << arr[i];
    }

    delete[] arr;
    */

    //task 4

    /*
    int user_int_number;
    cout << "Enter number->";
    cin >> user_int_number;

    for (int i = user_int_number-1; i > 0; i--) {
        if ((user_int_number % (i * i) == 0) && (user_int_number % (i * i * i) != 0)) {
            cout << i << " ";
        }
    }
    */

    //task 5

    /*
    cout << "Enter A ->";
    int a;
    cin >> a;
    int temp = a;
    int summ = 0;
    while (temp != 0) {
        summ += temp % 10;
        temp /= 10;
    }

    if (pow(summ, 3) != pow(a, 2)) {
        cout << "куб суммы цифр числа не равен квадрату числа" << endl;
    }
    else {
        cout << "куб суммы цифр числа равен квадрату числа" << endl;
    }
    */

    //task 6 

    /*
    cout << "Enter number -> ";
    int n;
    cin >> n;
    for (int i = n-1; i >= 1; i--) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }

    */

    // task 7

    /*
    cout << "Enter 1 number -> ";
    int n1;
    cin >> n1;
    cout << "Enter 2 number -> ";
    int n2;
    cin >> n2;
    int temp;
    (n1 > n2) ? temp = n1 : temp = n2;
    for (int i = temp - 1; i >= 1; i--) {
        if (n1 % i == 0 && n2 %i==0) {
            cout << i << " ";
        }
        */

        //task 8

    cout << "Выберете фигуру от 1 до 10 ->";
    int user_ch;
    cin >> user_ch;
    switch (user_ch) {
    case 1:
        for (int j = 7, spaces = 0; j >= 0; j--, spaces++) {
            cout << string(spaces, ' ') << string(j, '*') << endl;
        }
        break;
    case 2:
        for (int j = 1, spaces = 6; j <= 7; j++, spaces--) {
            cout << string(j, '*') << string(spaces, ' ') << endl;
        }
        break;
    case 3:
        for (int i = 10, spaces = 0, stars = 11; i >= 0; spaces++, i--, stars = stars - 2) {
            if (i >= 5) {
                cout << string(spaces, ' ') << string(stars, '*') << string(spaces, ' ') << endl;
            }
            else {
                cout << endl;
            }
        }
        break;
    case 4:
        for (int i = 10, spaces = 5, stars = 1; i >= 0; i--) {
            if (i <= 5) {
                cout << string(spaces, ' ') << string(stars, '*') << endl;
                spaces--;
                stars += 2;
            }
            else {
                cout << endl;
            }
        }
        break;
    case 5:
        cout << endl;
        for (int i = 10, spaces = 0, stars = 9; i > 0; i--) {

            if (i > 5) {
                cout << string(spaces, ' ') << string(stars, '*') << string(spaces, ' ') << endl;
                spaces++;
                stars -= 2;
            }
            else if (i == 5) {
                stars = 1;
                spaces = 4;
                cout << string(spaces, ' ') << string(stars, '*') << string(spaces, ' ') << endl;
                stars += 2;
                spaces--;
            }
            else if (i <= 4) {
                cout << string(spaces, ' ') << string(stars, '*') << string(spaces, ' ') << endl;
                spaces--;
                stars += 2;
            }
        }
        cout << endl;
        break;
    }
}

