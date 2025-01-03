#include "get_next_line.h"

int main ()
{
	int fd;
	char *new;
	int nb;

	nb = 1;
	fd = open("test1", O_RDONLY);
	new = get_next_line(fd);
	while (new)
	{
		printf("%d,%s\n", nb, new);
		free(new);
		nb++;
		new = get_next_line(fd);
	}
}