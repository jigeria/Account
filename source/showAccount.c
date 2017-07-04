#include "makeAccount.h"

void showAccount(ACCOUNT * head)
{
	ACCOUNT *node = (ACCOUNT *)calloc(1, sizeof(ACCOUNT));
	node = head->link;

	char nameTemp[10];
	
	printf("Enter your name : ");
	fgets(nameTemp, 10, stdin);
	nameTemp[strlen(nameTemp) - 1] = '\0';

	while (node->link == NULL)
	{
		if (strcmp(node->name, nameTemp) == 1)
		{
			printf("\nName : %s\n", node->name);
			printf("Phone number : %s\n", node->phoneNumber);
			printf("Account number : %s\n", node->accountNumber);
		}

		node = node->link;
	}

	free(node);	
}
