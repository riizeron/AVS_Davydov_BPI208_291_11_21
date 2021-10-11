//------------------------------------------------------------------------------
// complex_In.cpp - содержит процедуру ввода параметров 
// для уже созданного комплексного числа
//------------------------------------------------------------------------------

#include "complex.h"
#include "math.h"

//------------------------------------------------------------------------------
// Ввод параметров комплексного числа из файла
void In(complex &r, FILE &ifst) {
    // ifst >> r.x >> r.y;
    fscanf(&ifst,"%lf%lf", &r.x, &r.y);
    
}

// Случайный ввод параметров комплексного числа
void InRnd(complex &r) {
    r.x = Random();
    r.y = Random();
}

//------------------------------------------------------------------------------
// Вывод параметров комплексного числа в форматируемый поток
void Out(complex &r, FILE &ofst) {
    /*ofst << "It is Complex: x = " << r.x << ", y = " << r.y 
         << ". Real = " << Real(r) << "\n";*/
    fprintf(&ofst, "%s%g%s%g%s%g%s", "It is Complex: x = "
        , r.x, ", y = ", r.y
        , ". Real = ", Real(r), "\n");
}

//------------------------------------------------------------------------------
// Приведение комплексного числа к действительному
double Real(complex &r) {
    return sqrt(r.x*r.x + r.y*r.y);
}
