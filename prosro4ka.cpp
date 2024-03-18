#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    /*   Дан массив вещественных чисел.
           а) Из всех положительных элементов вычесть элемент с номером k1, из остальных — элемент с номером k2.*/
           
    const int SIZE = 10;
    double a[SIZE] = { 10.5,4.4,3.3,2.2,1.1,-5.1,-4.2,-3.3,-2.4,-1.5 };
    for (int i = 0; i < SIZE; i++) {
        if (a[i] > 0)
            a[i] -= a[1];
        else
            a[i] -= a[2];
    }

    cout <<"Задание 1\n" << "Массив после модификации:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    /*б) Все элементы с нечетными номерами увеличить на 1, с четными — уменьшить на 1.*/

    double b[SIZE];
    for (int i = 0; i < SIZE; i++) {
        b[i] = a[i];
    }
    cout << "Массив b после копирования из массива a:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << b[i] << " ";
    }
    for (int i = 0; i < SIZE; i++) {
        if (i % 2 != 0)
            b[i] -= 1;
        else
            b[i] += 1;
    }
    cout << "Массив b после изменения:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << b[i] << " ";
    }



    return 0;

}

