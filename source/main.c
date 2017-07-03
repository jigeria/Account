/*
Park sang-min
start - 2017.07.1

Account version1.0

--------function---------
receipt of money
to withdraw money

--------information--------
name
account money
phone number

*/

#define _CRT_SECURE_NO_WARNINIGS

#include "basic.h"
#include "function.h"

int main()
{
	ACCOUNT * head = (ACCOUNT *)calloc(1, sizeof(ACCOUNT));
	ACCOUNT * prevNode = (ACCOUNT *)calloc(1, sizeof(ACCOUNT));
	head->link = NULL;
	prevNode = head;
	int selectCount = 0;

	while (1)
	{
		menu();

		if (selectCount != 0)
			getchar();

		scanf("%d", &selectCount);
		

		switch (selectCount)
		{
		case 1:
			makeAccount(prevNode);
			break;

		case 2:
			
			break;

		case 3:

			break;

		case 4:
			
			puts("The End...");
			Sleep(5000);

			break;

		default:
			puts("Error!! Try again!!");

			break;
		}
	}


	return 0;

}

