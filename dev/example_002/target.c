#include <stdio.h>

int add(int val1, int val2, int* result)
{
    int res = 0;
    if (NULL == result) {
        return 0;
    } else {
        *result = val1 + val2;
        if (*result < 0) {
            res = (-1);
        } else if (0 <= *result) {
            res = 1;
        }
    }
    return res;
}

int subst(int val1, int val2, int* result)
{
    int res = 0;
    if (NULL == result) {
        return 0;
    } else {
        *result = val1 - val2;
        if (*result < 0) {
            res = (-1);
        } else if (0 <= *result) {
            res = 1;
        }
    }
    return res;
}