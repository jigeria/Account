#include "basic.h"

void menu(int);

void menu(int state)
{
	printf("\n\n----------Select----------\n\n");

	switch (state)
	{
		case MAKE_ACCOUNT:
			puts("1) Make account");
			puts("2) Delete account");
			puts("3) Show account");
			puts("4) exit");
			
			break;

		case SHOW_ACCOUNT:
			puts("1) Print all account");
			puts("2) Search account");

			break;

		default:
			puts("Error!!");

			break;
	}
	
	printf("choice >> ");
}