#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *
 *
 *
 */

int main(void)
{
	char d[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[100];
	int x;
	int y;
	int sum;

	srand(time(NULL));
	sum = 0;
	x = 0;

	while (sum < (2772 - 122))
	{
		y = rand() % 62;
		password[x] = d[y];
		sum = sum + password[x];
		x++;
	}
	y = 2772 - sum;
	password[x] = y;
	x++;
	password[x] = '\0';
	printf("%s", password);

	return (0);
}
