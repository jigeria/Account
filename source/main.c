/*
Park sang-min
start - 2017.07.1

Account version1.0

--------function---------
receipt of money
to withdraw money
show account

--------information--------
name
account number
phone number

*/

#define _CRT_SECURE_NO_WARNINIGS

#include "basic.h"
#include "makeAccount.h"

int main()
{
	ACCOUNT * head = (ACCOUNT *)calloc(1, sizeof(ACCOUNT));
	head->link = NULL;

	int selectCount = 0;

	while (1)
	{
		menu(MAKE_ACCOUNT);

		scanf("%d", &selectCount);

		switch (selectCount)
		{
		case 1:
			makeAccount(head);
			break;

		case 2:
			
			break;

		case 3:
			showAccount(head);

			break;

		case 4:
			
			puts("The End...");
			Sleep(5000);

			return 0;

		default:
			puts("");
			puts("Error!! Try again!!");

			break;
		}
	}


	return 0;

}

