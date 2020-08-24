#include <stdio.h>
#include "../src/mid_unit.h"

int subst(int val1, int val2, int* result);

static char* target_test_subst_001()
{
    int val1 = 0;
    int val2 = 0;
    int result = 0;
    int res = 0;

    res = subst(val1, val2, &result);

    mu_assert("result", result, 0);
    mu_assert("res", res, 1);

    return 0;
}

static char* target_test_subst_002()
{
    int val1 = -1;
    int val2 = 0;
    int result = 0;
    int res = 0;

    res = subst(val1, val2, &result);

    mu_assert("result", result, (-1));
    mu_assert("res", res, (-1));

    return 0;
}

static char* target_test_subst_003()
{
    int val1 = 1;
    int val2 = 1;
    int result = 0;
    int res = 0;

    res = subst(val1, val2, (int*)&result);

    mu_assert("result", result, 0);
    mu_assert("res", res, 1);

    return 0;
}

static char* target_test_subst_004()
{
    int val1 = -1;
    int val2 = 0;
    int result = 0;
    int res = 0;

    res = subst(val1, val2, (int*)0);

    mu_assert("res", res, 0);

    return 0;
}

char* run_target_test_subst()
{
    mu_run_test("target_test_subst_001", target_test_subst_001);
    mu_run_test("target_test_subst_002", target_test_subst_002);
    mu_run_test("target_test_subst_003", target_test_subst_003);
    mu_run_test("target_test_subst_004", target_test_subst_004);

    return 0;
}
