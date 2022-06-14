#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    //task 1
    //подсчитать количество целых чисел от 100 до 999 у которых 2 одинаковые цифры
    cout << "TASK 1\n";
    int count = 0;

    for (int i = 100; i < 1000; i++) {
        int first = 0, second = 0, third = 0;
        first = i / 100;
        second = (i / 10) % 10;
        third = i % 10;
        if (first == second && first == third) {
        }
        else if (first == second || first == third) {
            count++;
        }
        else if (second == third) {
            count++;
        }
    }
    cout << count << endl;


    //task 2
    // подсчитать количество целых чисел от 100 до 999 у которых все цифры разные
    cout << "TASK 2\n";
    int count_task2 = 0;

    for (int i = 100; i < 1000; i++) {
        int first = 0, second = 0, third = 0;
        first = i / 100;
        second = (i / 10) % 10;
        third = i % 10;
        if ((first != second && first != third) && (second != third)) {
            count_task2++;
        }
    }
    cout << count_task2 << endl;


    //task 3
    // из любого целого числа удаляются все 3 и 6
    cout << "TASK 3\n";
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

    for (int i = counter - 1; i >= 0; i--) {
        cout << arr[i];
    }

    delete[] arr;
    cout << endl;


    //task 4
    // любое целое число А. Необходимо вывести все целые числа В, для которых А делится без остатка 
    // на В*В и не делится без остатка на В*В*В
    cout << "TASK 4\n";
    int user_int_number;
    cout << "Enter number->";
    cin >> user_int_number;

    for (int i = user_int_number - 1; i > 0; i--) {
        if ((user_int_number % (i * i) == 0) && (user_int_number % (i * i * i) != 0)) {
            cout << i << " ";
        }
    }
    cout << endl;

    //task 5
    //пользователь вводит целое число А. Программа определяет является ли куб суммы цифр этого числа равен
    // А*А
    cout << "TASK 5\n";
    cout << "Enter A ->";
    int a;
    cin >> a;
    int temp_task5 = a;
    int summ = 0;
    while (temp_task5 != 0) {
        summ += temp_task5 % 10;
        temp_task5 /= 10;
    }

    if (pow(summ, 3) != pow(a, 2)) {
        cout << "куб суммы цифр числа не равен квадрату числа" << endl;
    }
    else {
        cout << "куб суммы цифр числа равен квадрату числа" << endl;
    }

    cout << endl;

    //task 6 
    // пользователь вводит целое число. Выводитятся все целые числа на которое заданное число делится без остатка

    cout << "TASK 6\n";
    cout << "Enter number -> ";
    int n;
    cin >> n;
    for (int i = n - 1; i >= 1; i--) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    // task 7
    // два целых числа вводится. выводятся все целые числа, на которые оба введенных числа делятся без остатка

    cout << "TASK 7\n";
    cout << "Enter 1 number -> ";
    int n1;
    cin >> n1;
    cout << "Enter 2 number -> ";
    int n2;
    cin >> n2;
    int temp_task7;
    (n1 > n2) ? temp_task7 = n1 : temp_task7 = n2;
    for (int i = temp_task7 - 1; i >= 1; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            cout << i << " ";
        }
    }
        cout << endl;

        //task 8
        // вывод десяти фигур
        cout << "TASK 8\n";
        cout << "Выберете фигуру от 1 до 10 ->";
        int user_ch;
        cin >> user_ch;

        while (user_ch != -1) {
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
            case 6:
                for (int i = 0, stars = 1, spaces = 8; i < 10; i++)
                {
                    if (i < 4) {
                        cout << string(stars, '*') << string(spaces, ' ') << string(stars, '*') << endl;
                        stars++;
                        spaces -= 2;
                    }
                    else if (i == 4) {
                        stars = 5;
                        cout << string(stars, '*') << string(stars, '*') << endl;
                        spaces = 0;
                    }
                    else {
                        stars--;
                        spaces += 2;
                        cout << string(stars, '*') << string(spaces, ' ') << string(stars, '*') << endl;
                    }

                }
                break;
            case 7:
                for (int i = 0, stars = 1; i <= 10; i++)
                {
                    if (i <= 4) {
                        cout << string(stars, '*') << endl;
                        stars++;
                    }
                    else if (i == 5) {
                        cout << string(6, '*') << endl;
                    }
                    else {
                        stars--;
                        cout << string(stars, '*') << endl;
                    }
                }
                break;
            case 8:
                for (int i = 0, stars = 1, spaces = 9; i < 10; i++)
                {
                    if (i <= 3) {
                        cout << string(spaces, ' ') << string(stars, '*') << endl;
                        spaces--;
                        stars++;
                    }
                    else if (i == 4) {
                        spaces--;
                        cout << string(spaces, ' ') << string(6, '*') << endl;
                        spaces++;
                    }
                    else {
                        cout << string(spaces, ' ') << string(stars, '*') << endl;
                        spaces++;
                        stars--;
                    }
                }
                break;
            case 9:
                for (int i = 10; i > 0; i--)
                {
                    cout << string(i, '*') << endl;
                }
                break;
            case 10:
                for (int i = 1, spaces = 9; i <= 10; i++, spaces--) {
                    cout << string(spaces, ' ') << string(i, '*') << endl;
                }
            default:
                cout << "Выбрано неверное значение меню." << endl;
            }
            cout << "Выберете фигуру от 1 до 10 (-1 для выхода) -> ";
            cin >> user_ch;
            system("CLS");
        }
        cout << endl;

        //task 9
        // число. Определить количество цифр в числе, посчитать их сумму, ср. арифметическое, количество 0

        cout << "TASK 9\n";
        int user_number_for_check;
        cout << "Введите число->";
        cin >> user_number_for_check;
        double count_task9 = 0, summ_task9 = 0, sr_ar = 0, zeros = 0;
        while (user_number_for_check != 0) {
            int temp = 0;
            temp = user_number_for_check % 10;
            summ_task9 += temp;
            count_task9++;
            if (temp == 0) zeros++;
            user_number_for_check /= 10;
        }
        sr_ar = summ_task9 / count_task9;

        int user_choise = 0;

        while (user_choise != -1) {
            cout << "Что вы хотите узнать?\n";
            cout << "1 - Количество цифр в числе\n";
            cout << "2 - Сумма цифр в числе\n";
            cout << "3 - Среднее арифметическое цифр числа\n";
            cout << "4 - Количество нулей в числе\n";

            cin >> user_choise;
            system("CLS");
            switch (user_choise)
            {
            case 1:

                cout << "Количество цифр в числе " << count_task9 << endl;
                break;
            case 2:

                cout << "Сумма цифр в числе " << summ_task9 << endl;
                break;
            case 3:

                cout << "Среднее арифметическое цифр в числе " << sr_ar << endl;
                break;
            case 4:

                cout << "Количество нулей в числе " << zeros << endl;
                break;
            default:
                cout << "Выбран не верный пункт меню." << endl;
            }

            cout << "Выберете следующий пункт меню(для выхода -1) -> ";
        }

        cout << endl;
        //task 10
        // шахматная доска с заданным размером клетки
        cout << "TASK 10\n";
        int count_of_simbols = 0;
        cout << "Введите размер клетки -> ";
        cin >> count_of_simbols;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << string(count_of_simbols, '*') << string(count_of_simbols, '_');
            }
            cout << endl;
        }


        //task 11
        //меню заказа кафетерия
        static double total_summ = 0;
        int total_clients = 0;

        int choose_drink = 0;
        int choose_candy = 0;

        double drinks_price[3] = { 3.90,5.90, 2.70 };
        double candy_price[3] = { 7.40, 3.40, 1.70 };

        cout << "Введите количество человек, которые будут делать заказ: ";
        cin >> total_clients;

        for (int i = 0; i < total_clients; i++) {
            cout << "Выбирает пользователь: " << i + 1 << endl;
            cout << "Меню кафетерия:\n\n";

            cout << "Меню напитков.\n";
            cout << "1. Кофе - $3.90\n";
            cout << "2. Лимонад - $5.90\n";
            cout << "3. Чай - $2.70\n";
            cout << "Выберете 1, 2 или 3 -> ";
            cin >> choose_drink;
            while (choose_drink != 0) {
                switch (choose_drink) {
                case 1:
                    total_summ += drinks_price[0];
                    break;
                case 2:
                    total_summ += drinks_price[1];
                    break;
                case 3:
                    total_summ += drinks_price[2];
                    break;
                default:
                    cout << "Выбран не верный пункт меню: напиток не выбран!\n";
                }
                cout << "Добавить еще один напиток?(для выхода из меню напитков - 0) -> ";
                cin >> choose_drink;
            }
            system("CLS");

            cout << "Выбирает пользователь: " << i + 1 << endl;
            cout << "Кондитерское меню.\n";
            cout << "1. Торт - $7.40\n";
            cout << "2. Шоколадка - $3.40\n";
            cout << "3. Печенье - $1.70\n";
            cout << "Выберете 1, 2 или 3 -> ";
            cin >> choose_candy;
            while (choose_candy != 0) {
                switch (choose_candy) {
                case 1:
                    total_summ += candy_price[0];
                    break;
                case 2:
                    total_summ += candy_price[1];
                    break;
                case 3:
                    total_summ += candy_price[2];
                    break;
                default:
                    cout << "Выбран не верный пункт меню: кондитерское изделие не выбрано!\n";
                }
                cout << "Добавить еще одино кондитерское изделие?(для выхода из меню напитков - 0) -> ";
                cin >> choose_candy;
            }
            system("CLS");
        }
        cout << "Ваша итоговая сумма заказа: $" << total_summ << endl;

        //task 12
        // морской бой, вывод номеров полей
        cout << "TASK 12\n";
        char arr1[10]{ 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
        int arr2[10]{ 0,1,2,3,4,5,6,7,8,9 };


        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cout << arr1[j] << arr2[i];
            }
            cout << endl;
        }
}
