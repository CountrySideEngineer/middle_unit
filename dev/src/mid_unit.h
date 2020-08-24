#ifndef _MID_UNIT_H_
#define _MID_UNIT_H_

#define mu_assert(message, expect, actual)                              \
    do {                                                                \
        if (!(expect == actual)) {                                      \
            printf("        [%s : NG]\r\n", message);                   \
            return message;                                             \
        } else {                                                        \
            printf("        [%s : OK]\r\n", message);                   \
        }                                                               \
    } while (0)

#define mu_run_test(test_name, test)                                    \
    do {                                                                \
        printf("    [%s : START]\r\n", test_name);                      \
        char *message = test();                                         \
        tests_run++;                                                    \
        if (message) {                                                  \
            printf("    [%s : FAILED]\r\n", test_name);                 \
            return message;                                             \
        } else {                                                        \
            printf("    [%s : PASSED]\r\n", test_name);                 \
        }                                                               \
    } while (0)

#define mu_run_all_test(test_name, test)                                \
    do {                                                                \
        printf("[%s : START]\r\n", test_name);                          \
        tests_run = 0;                                                  \
        char *message = test();                                         \
        if (message) {                                                  \
            printf("[%s : FAILED]\r\n", test_name);                     \
        } else {                                                        \
            printf("[%s : ALL PASSED]\r\n", test_name);                 \
        }                                                               \
        printf("[%s : %d tests exeucted.]\n", test_name, tests_run);    \
    } while (0)

extern int tests_run;
#endif  /* _MID_UNIT_H_ */
