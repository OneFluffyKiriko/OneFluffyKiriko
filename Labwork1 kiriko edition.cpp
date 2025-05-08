// Labwork1 kiriko edition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//Sparing myself a headache, cause im a smart boy ;3
using namespace std;
//Lab 1
// Var 7
/* Дано довжини ребер прямокутного паралелепіпеда a, b та c. Знайти його об’єм та
площу поверхні.
Вхідні дані : a = 1, b = 2, c = 3.
Вихідні дані : V = 6, S = 22. */

int main()
{
    cout << "Labwork: Kiriko edition!\n";
    // Calling in variables here for clarity.
    int vara = 0, varb = 0, varc = 0;
        cout << "\nEnter value A: ";
    cin >> vara;
        cout << "\nEnter value B: ";
    cin >> varb;
        cout << "\nEnter value C: ";
    cin >> varc;
    int V = vara * varb * varc;
    int S = ((vara * varb)+(varb * varc)+(vara * varc))*2;
    cout << "\nVolume: " << V << "\nSurface area: " << S;
}

