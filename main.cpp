#include "MinComparer.h"
#include <cstdio>

int main() {
    MinComparer<int, int> intMinComparer;
    printf("Min(5,10)<int>: %d\n", intMinComparer.Min(5, 10));

    MinComparer<float, float> floatMinComparer;
    printf("Min(5.5,10.5)<float>: %f\n", floatMinComparer.Min(15.5f, 10.5f));

    MinComparer<double, double> doubleMinComparer;
    printf("Min(5.5,10.5)<double>: %lf\n", doubleMinComparer.Min(5.5, 10.5));

    MinComparer<int, float> intFloatMinComparer;
    printf("Min(5,10.5)<int,float>: %d\n", intFloatMinComparer.Min(5,10.5f));

    MinComparer<int, double> intDoubleMinComparer;
    printf("Min(5,10.5)<int,double>: %d\n", intDoubleMinComparer.Min(5, 10.5));

    MinComparer<float, double> floatDoubleMinComparer;
    printf("Min(5.5,10.5)<float,double>: %f\n", floatDoubleMinComparer.Min(5.5f, 10.5));

    return 0;
}