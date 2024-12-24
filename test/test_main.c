#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include "mylib.h"

static void test_example_2(void **state) {
    (void) state;
    assert_int_equal(3, add(1,2));
}

static void test_example(void **state) {
    (void) state; /* unused */
    assert_int_equal(1, 1);
    assert_int_equal(5, add(3, 2));
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_example),
        cmocka_unit_test(test_example_2),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}
