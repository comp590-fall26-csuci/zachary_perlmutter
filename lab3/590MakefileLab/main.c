#include "utest.h"
#include "fibonacci.h"

struct Fib {
	int exp_fib;
	int act_fib;
};

int const FIB[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

UTEST_I_SETUP(Fib) {
	utest_fixture->exp_fib = FIB[utest_index];
	utest_fixture->act_fib = fibonacci(1+utest_index);
}

UTEST_I_TEARDOWN(Fib) {
}

UTEST_I(Fib, Value, 10) {
	ASSERT_EQ(utest_fixture->exp_fib, utest_fixture->act_fib);
}
UTEST(GoldenRatio, Value) {
	ASSERT_NEAR(1.618, golden_ratio_approx(0), 0.001);
}

UTEST(GoldenRatio, Parameter) {
	ASSERT_EQ(golden_ratio_approx(0), golden_ratio_approx(1));
}


UTEST_MAIN()
