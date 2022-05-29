#include <unistd.h>

int main()
{
	char a = '%';
	write(1 , &a, 1);
}
