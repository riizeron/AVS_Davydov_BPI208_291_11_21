//------------------------------------------------------------------------------
// number.cpp - содержит процедуры связанные с обработкой обобщенного числа
// и создания произвольного числа
//------------------------------------------------------------------------------

#include "number.h"

//------------------------------------------------------------------------------
// Ввод параметров обобщенного числа из файла
number* In(FILE &ifst) {
    number *sp;
    int k;
    fscanf(&ifst,"%d", &k);
    // ifst >> k;
    switch(k) {
        case 1:
            sp = new number;
            sp->k = number::COMPLEX;
            In(sp->r, ifst);
            return sp;
        case 2:
            sp = new number;
            sp->k = number::FRACTION;
            In(sp->t, ifst);
            return sp;
        case 3:
            sp = new number;
            sp->k = number::POLAR;
            In(sp->p, ifst);
            return sp;
        default:
            return 0;
    }
}

// Случайный ввод обобщенного числа
number *InRnd() {
    number *sp;
    auto k = rand() % 3 + 1;
    switch(k) {
        case 1:
            sp = new number;
            sp->k = number::COMPLEX;
            InRnd(sp->r);
            return sp;
        case 2:
            sp = new number;
            sp->k = number::FRACTION;
            InRnd(sp->t);
            return sp;
        case 3:
            sp = new number;
            sp->k = number::POLAR;
            InRnd(sp->p);
            return sp;
        default:
            return 0;
    }
}

//------------------------------------------------------------------------------
// Вывод параметров текущего числа в поток
void Out(number &s, FILE &ofst) {
    switch(s.k) {
        case number::COMPLEX:
            Out(s.r, ofst);
            break;
        case number::FRACTION:
            Out(s.t, ofst);
            break;
        case number::POLAR:
            Out(s.p, ofst);
            break;
        default:
            fprintf(&ofst, "%s", "Incorrect number!\n");
            // ofst <<s.k<<"Incorrect number!" << endl;
    }
}

//------------------------------------------------------------------------------
// Приведение чисел к действительному числу
double Real(number &s) {
    switch(s.k) {
        case number::COMPLEX:
            return Real(s.r);
            break;
        case number::FRACTION:
            return Real(s.t);
            break;
        case number::POLAR:
            return Real(s.p);
            break;
        default:
            return 0.0;
    }
}
