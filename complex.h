#ifndef __complex__
#define __complex__

//------------------------------------------------------------------------------
// complex.h - содержит комплексного числа и его интерфейса
//------------------------------------------------------------------------------


#include "stdio.h"
#include "rnd.h"

// комплексное число
struct complex {
   double x, y; // действительная и мнимая часть
};

// Ввод параметров комплексного числа из файла
void In(complex &r, FILE &ifst);

// Случайный ввод параметров комплексного числа
void InRnd(complex &r);

// Вывод параметров комплексного числа в форматируемый поток
void Out(complex &r, FILE &ofst);

// Приведение комплексного числа к действительному
double Real(complex &r);

#endif //__complex__
