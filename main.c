#include "minunit.h"
#include "colors.h"
#include <stdio.h>

int tests_run;

static	void	all_tests()
{
	mu_run_test(test_get_tetri);
}

int main(int argc, char **argv) {
	(void)argc;
	(void)argv;
	all_tests();
	printf("Tests run: %d\n", tests_run);

	return (0);
}
