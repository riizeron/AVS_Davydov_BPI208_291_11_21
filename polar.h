#ifndef __polar__
#define __polar__

//------------------------------------------------------------------------------
// polar.h - содержит описание полярных координат
//------------------------------------------------------------------------------

#include "stdio.h"
#include "rnd.h"

//------------------------------------------------------------------------------
// полярная координата
struct polar {
    int a, b; // полярный радиус и угол
};

// Ввод параметров полярной координаты из файла
void In(polar &t, FILE &ifst);

// Случайный ввод параметров полярной координаты
void InRnd(polar &е);

// Вывод параметров полярной координаты в форматируемый поток
void Out(polar &t, FILE &ofst);

// Приведение полярной координаты к действительному числу
double Real(polar &t);

#endif //__polar__