#include "SetLab4_Chernetsov.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <clocale>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // Мощность множеств от 6 до 9
    int n = 6 + std::rand() % 4;
    const int MIN_VAL = 10;
    const int MAX_VAL = 99;

    std::cout << "Лабораторная работа №4\n";
    std::cout << "Вариант 25: А - чётные числа, В - кратные 6\n";
    std::cout << "Мощность множеств: " << n << "\n\n";

    // Создание множеств A и B (используем конструктор F5)
    Set A(n, MIN_VAL, MAX_VAL, 'A');
    Set B(n, MIN_VAL, MAX_VAL, 'B');

    std::cout << "Создано множество А: " << A.F7(' ') << "\n";
    std::cout << "Мощность А: " << A.F6() << "\n";
    std::cout << "Создано множество В: " << B.F7(' ') << "\n";
    std::cout << "Мощность В: " << B.F6() << "\n\n";

    // F9: подмножество
    std::cout << "F9: A является подмножеством B? " << (A.F9(B) ? "Да" : "Нет") << "\n";
    std::cout << "F9: A является подмножеством A? " << (A.F9(A) ? "Да" : "Нет") << "\n\n";

    // F10: равенство
    std::cout << "F10: A равно B? " << (A.F10(B) ? "Да" : "Нет") << "\n";
    std::cout << "F10: A равно A? " << (A.F10(A) ? "Да" : "Нет") << "\n\n";

    // F11: объединение
    Set unionAB = A.F11(B);
    std::cout << "F11: Объединение А и В: " << unionAB.F7(' ') << "\n";
    std::cout << "Мощность объединения: " << unionAB.F6() << "\n\n";

    // F12: пересечение
    Set intersectAB = A.F12(B);
    std::cout << "F12: Пересечение А и В: " << intersectAB.F7(' ') << "\n";
    std::cout << "Мощность пересечения: " << intersectAB.F6() << "\n\n";

    // F13: разность A - B и B - A
    Set diffAB = A.F13(B);
    std::cout << "F13: Разность A - B: " << diffAB.F7(' ') << "\n";
    std::cout << "Мощность A - B: " << diffAB.F6() << "\n";

    Set diffBA = B.F13(A);
    std::cout << "F13: Разность B - A: " << diffBA.F7(' ') << "\n";
    std::cout << "Мощность B - A: " << diffBA.F6() << "\n\n";

    // F14: симметрическая разность
    Set symDiff = A.F14(B);
    std::cout << "F14: Симметрическая разность A ∆ B: " << symDiff.F7(' ') << "\n";
    std::cout << "Мощность симметрической разности: " << symDiff.F6() << "\n\n";

    // Вызов F8 для всех созданных множеств
    A.F8();
    B.F8();
    unionAB.F8();
    intersectAB.F8();
    diffAB.F8();
    diffBA.F8();
    symDiff.F8();

    std::cout << "Все множества очищены (F8).\n";
    return 0;
}