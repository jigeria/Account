#include "function.h"

void makeAccount(ACCOUNT *prevNode)
{
	//srand(time(NULL));

	int i = 0, temp = 0, count = 0;
	int phoneTempArr[PHONE_COUNT + 3];

	ACCOUNT *node = (ACCOUNT *)calloc(1, sizeof(ACCOUNT));

	node->link = NULL;
	prevNode->link = node;

	printf("------------Make Account------------\n\n");

	printf("Name : ");
	getchar();
	fgets(node->name, sizeof(node->name), stdin);
	
	node->name[strlen(node->name) - 1] = '\0';

	printf("Phone number : ");
	fgets(node->phoneNumber, sizeof(node->phoneNumber), stdin);

	printf("Make Account \n");
	for (i = 0; i < ACCOUNT_COUNT; i++)
	{
		node->accountNumber[i] = rand() % 10;
	}

	printf("\n------------Check your account information------------\n");
	printf("Name : %s", node->name);

	printf("\nPhone Number : %s", node->phoneNumber);

	printf("\nAccount number : ");
	for (i = 0; i < ACCOUNT_COUNT; i++)
	{
		if (!((i + 1) % 4) && (i+1) != 16)
		{
			printf("%d", node->accountNumber[i]);
			printf("-");
		}
		else
		{
			printf("%d", node->accountNumber[i]);
		}
	}

	puts("");
}