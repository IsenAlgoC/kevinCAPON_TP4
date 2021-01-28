#include <stdio.h>
#include <stdlib.h>

#define SEPARATEUR '/'
#define TAILLETAB1 20

int MyTab1[TAILLETAB1];

int main() {

	for (int i = 0; i < TAILLETAB1; i++) {
		MyTab1[i] = i;
		printf("%c%d", SEPARATEUR, MyTab1[i]);
	}

	return(EXIT_SUCCESS);
}