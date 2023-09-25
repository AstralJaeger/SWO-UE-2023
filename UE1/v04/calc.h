#ifndef CALC_H
#define CALC_H

#include <stdbool.h>

extern int num_calls;

double compute(int a, int b, char op, _Bool* ok);

#endif