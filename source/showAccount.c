#include "makeAccount.h"

void showAccount(ACCOUNT * head)
{
	ACCOUNT *node;
	node = head->link;
	int i;
	char nameTemp[10];
	
	printf("\nEnter your name : ");
	getchar();
	fgets(nameTemp, 10, stdin);
	nameTemp[strlen(nameTemp) - 1] = '\0';

	while(node != NULL)
	{
		if (strcmp(node->name, nameTemp) == 0)
		{
			printf("\nName : %s\n", node->name);
			printf("Phone number : %s\n", node->phoneNumber);
			
			printf("Account number : ");
			for (i = 0; i < ACCOUNT_COUNT; i++)
			{
				if (node->accountNumber[i] == 45)
					printf("-");
				else
					printf("%d", node->accountNumber[i]);
			}

			//free(node);

			return;
		}
		
		node = node->link;
	}

	printf("\nCan not find '%s'\n", nameTemp);

	//free(node);
	
	return;
}
