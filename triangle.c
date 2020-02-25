#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void triangle (int str)
{
	int count; 
	int first;
	int second;
	int res;

	first = 1;
	second = 3;
	count = 1;
	if (str = 1)
	{
		res = first + second;
	}
	else
	{
		count = 2;
		while (count <= str)
		{
			first += 2;
			second += 2;
			count++;
		}
		res = first + second;
		write(1, "2", 1);
		printf("%d", res);
	}
}
int		main (int argc, char **argv)
{
	if (argc == 2)
	{
		triangle(atoi(argv[1]));
		write(1, "\n", 1);
	}
	else
		write(1,"\n", 1);
	return (0);
}