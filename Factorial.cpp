#include "factorial.h"
int factorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    }
    else {
        return number * factorial(number - 1);
    }
}
