
#include "test.h"

typedef enum e_sort_op
{
	sa,
	sb,
	ss,
	pa,
	pb,
	ra,
	rb,
	rr,
	rra,
	rrb,
	rrr
}				t_sort_op;

const t_test	*find_test(char *test, bool iter_reset)
{
	static size_t	i = 0;
	const static t_test tests[] = {
		{"arr_qsort", test_arr_qsort},
		{0, 0}
	};

	if (iter_reset)
		i = 0;
	while (tests[i].name)
	{
		if (ft_strnstr(tests[i].name, test, ft_strlen(tests[i].name)) != 0)
			return (&tests[i++]);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	size_t	i;

	argc--;
	argv++;
	i = 0;
	while (i < (size_t)argc)
	{
		const t_test *test = find_test(argv[i], true);
		while (test != 0)
		{
			if (test->test())
				ft_printf("%s: OK\n", test->name);
			else
				ft_printf("%s: FAIL\n", test->name);
			test = find_test(argv[i], false);
		}
		i++;
	}
	ft_printf("sort_op_size: %u", (uint32_t)sizeof(t_sort_op));
}
