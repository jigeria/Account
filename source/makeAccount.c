#include "makeAccount.h"

void makeAccount(ACCOUNT *prev)
{
	srand(time(NULL));

	int i = 0, temp = 0, count = 0;
	int accountTempArr[ACCOUNT_COUNT - 3];
	
	ACCOUNT *node = (ACCOUNT *)calloc(1, sizeof(ACCOUNT));

	printf("------------Make Account------------\n\n");

	printf("Name : ");
	getchar();
	fgets(node->name, sizeof(node->name), stdin);
	
	node->name[strlen(node->name) - 1] = '\0';

	printf("Phone number : ");
	fgets(node->phoneNumber, sizeof(node->phoneNumber), stdin);

	printf("Make Account \n");


	printf("\n------------Check your account information------------\n");
	printf("Name : %s", node->name);

	printf("\nPhone Number : %s", node->phoneNumber);

	//printf("\nAccount number : ");
	for (i = 0; i < ACCOUNT_COUNT; i++)
	{
		if (!((i + 1) % 5) && (i+1) != 20)
		{
			node->accountNumber[i] = '-';
		}
		else
		{
			node->accountNumber[i] = rand() % 10;
		}
	}

	//printf("\n AccountNumber : %s", node->accountNumber);
	puts("");

	for (i = 0; i < ACCOUNT_COUNT; i++)
	{
		if (node->accountNumber[i] == 45)
			printf("-");
		else
			printf("%d", node->accountNumber[i]);
	}

	while (1)
	{
		if (prev->link == NULL)
		{
			prev->link = node;
			node->link = NULL;

			break;
		}

		prev = prev->link;
	}

}