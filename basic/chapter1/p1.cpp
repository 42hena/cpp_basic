#include <iostream>

void	swap(int *value1, int *value2)
{
	int	tmp;

	tmp = *value1;
	*value1 = *value2;
	*value2 = tmp;
}

void	swap(char *value1, char *value2)
{
	char	tmp;

	tmp = *value1;
	*value1 = *value2;
	*value2 = tmp;
}

void	swap(double *value1, double *value2)
{
	double	tmp;

	tmp = *value1;
	*value1 = *value2;
	*value2 = tmp;
}

int	main(void)
{
	int	num1 = 20;
	int	num2 = 30;

	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;
	
	char ch1 = 'A';
	char ch2 = 'Z';

	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111;
	double dbl2 = 5.555;

	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;
}
