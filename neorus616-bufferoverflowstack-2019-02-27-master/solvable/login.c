#include <string.h>
#include <stdio.h>
#include "loginVerification.h"

void login(){
	access();
}

void checkPassword(){
	char buffer[20];
	printf("Enter your password: \n");
	scanf("%s", buffer);
	printf("Checking password..\n");
	printf("You entered: %s\n", buffer);
	if(isValid(buffer))
		login();
	else
		printf("Wrong password \n");
}

int main () {
	checkPassword();
	return 0;
}
