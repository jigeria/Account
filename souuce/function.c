#include "function.h"

void makeAccount(ACCOUNT *prevNode)
{
	srand(time(NULL));

	int i, count = 0;
	char temp;

	ACCOUNT *node = (ACCOUNT *)calloc(1, sizeof(ACCOUNT));

	node->link = NULL;
	prevNode->link = node;

	printf("------------Make Account------------\n\n");

	printf("Name : ");
	fgets(node->name, sizeof(node->name), stdin);

	printf("Phone number : ");
	
	for (i = 0; i < PHONE_COUNT; i++)
	{
		temp = getchar();

		if (temp >= 0 && temp <= 9)
		{
			node->phoneNumber[i] = (int)temp;
		}
		else
		{
			i--;
		}
	}
	getchar();

	printf("Make Account \n");

	for (i = 0; i < ACCOUNT_COUNT; i++)
	{
		node->accountNumber[i] = rand();
	}

	printf("\n------------Check your account information------------\n\n");
	printf("Name : %s\n", node->name);
	
	printf("\nPhone Number : ");
	for(i=0; i<PHONE_COUNT; i++)
	{
		
		if (!(count) && 2 == i)
		{
			count = 1;
			printf("%d", node->phoneNumber[i]);
			printf("-");
		}
		else if (count && !((i + 1) % 4))
		{
			printf("%d", node->phoneNumber[i]);
			printf("-");
		}
		else
		{
			printf("%d", node->phoneNumber[i]);
		}
	}

	printf("\nAccount number : ");
	for (i = 0; i < ACCOUNT_COUNT; i++)
	{
		if (!((i + 1) % 4))
		{
			printf("%d", node->accountNumber[i]);
			printf("-");
		}
		else
		{
			printf("%d", node->accountNumber[i]);
		}
	}
}