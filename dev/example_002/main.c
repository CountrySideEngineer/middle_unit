#include <stdio.h>
#include "../src/mid_unit.h"

int tests_run = 0;

char* run_target_test_add();
char* run_target_test_subst();

int main()
{
    mu_run_all_test("run_target_test_add", run_target_test_add);
    mu_run_all_test("run_target_test_subst", run_target_test_subst);

    return 0;
}