#include "basic.h"


typedef struct {

	char name[10];
	char phoneNumber[PHONE_COUNT];
	char accountNumber[ACCOUNT_COUNT];

	struct ACCOUNT *link;

}ACCOUNT;

ACCOUNT* makeAccount(ACCOUNT *prevNode);
void showAccount(ACCOUNT *head);