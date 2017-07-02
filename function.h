#include "basic.h"

typedef struct {
	char name[10];
	int phoneNumber[11];
	int accountNumber[16];

	struct ACCOUNT *link;

}ACCOUNT;

void makeAccount(ACCOUNT *prevNode);