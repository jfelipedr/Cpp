#include <stdio.h>

int main()
{
    int num;
	char *month[12] = {"January", "February", "March", "April", "May", "June", "July",
						"August", "September", "October", "November", "December"};

    printf("Write a month number: "); scanf("%i", &num);

	(num<1 || num>12) ? printf("Error, check the number") : printf("Your select month is: %s", month[num-1]);// This line is the same as the next
		/*if (num<1 || num>12)
		puts("Error, check the number");
	else
		printf("Your select month is: %s", month[num-1]);*/

	/*Use of ?:
	_condition_ ? _if condition is met_ : _if condition is not met_ */

	return 0;
}