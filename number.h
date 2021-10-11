#ifndef __number__
#define __number__

//------------------------------------------------------------------------------
// number.h - содержит описание обобщающего числа
//------------------------------------------------------------------------------

#include "complex.h"
#include "fraction.h"
#include "polar.h"

//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся числа
struct number {
    // значения ключей для каждого из чисел
    enum key {COMPLEX, FRACTION, POLAR};
    key k; // ключ
    // используемые альтернативы
    union { // используем простейшую реализацию
        complex r;
        fraction t;
        polar p;
    };
};

// Ввод обобщенного числа
number *In(FILE &ifdt);

// Случайный ввод обобщенного числа
number *InRnd();

// Вывод обобщенного числа
void Out(number &s, FILE &ofst);

// Вычисление периметра обобщенного числа
double Real(number &s);

#endif
