// ekzamen 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Задача 1. В одновимірному масиві, що складається з дійсних елементів, обчислити номер мінімального елемента  
//(функція);  суму  елементів  масиву,  розташованих  між  першим  і  другим  від’ємними 

#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Розмір масиву=";
    cin >> n;
    if (n <= 0) { cout << "Такий масив не можливо зобразити"; }
    else {
        int* a = new int[n];
        for (int i = 0; i < n; i++) {
            cout << "Введіть a[" << i << "]=";
            cin >> a[i];
        }
        int min = a[0], ind;
        for (int i = 0; i < n; i++) {
            if (min > a[i])
            {
                min = a[i];
                ind = i;
            }

        }

        cout << endl << "Найменше число під номером - " << ind << endl;
        
        
        
        
        int vid1 = -1;
        int vid2 = -1;


        for (int i = 0; i < n; i++) {
            if (a[i] < 0) {
                if (vid1 == -1) {
                    vid1 = i;
                }
                else {
                    vid2 = i;

                }
            }
        }


        if (vid1 == -1 or vid2 == -1) {
            cout << endl << "В масиві немеє 2 відємених чисел" << endl;

        }
        else {

            int sum = 0;
            for (int i = vid1 + 1; i < vid2; i++) {
                sum = sum + a[i];
            }
            cout << endl << "Сума між двома відємними числами дорівнює - " << sum;
        }
    
    
    
    
    }
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
