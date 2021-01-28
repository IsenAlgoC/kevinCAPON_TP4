#include <stdlib.h>
#include <stdio.h>

int taille;
int a = 1;
char mot[20];
char mot2[20];

int main(){

	printf_s("Entrez un mot de 20 lettres maximum : \n");
	scanf_s("%s", mot, _countof(mot));

	taille = strlen(mot);

	for (int i = 0; i < taille; i++) {
		if (mot[i] < 'a' || mot[i]>'z' && mot[i] < 'A' || mot[i]>'Z') {
			for (int j = i; j < taille; j++) {
				mot[j] = mot[j + 1];
			}
			i--;
			taille--;
		}
	}
	strcpy(mot2, mot);
	
	for (int i = 0; i < taille; i++) {            
		if (mot[i] >= 'A' && mot[i] <= 'Z') {
			mot[i] = mot[i] + 32;
		}
	}

	for (int i = 0; i < (taille / 2); i++) {
		if (mot[i] != mot[taille - 1 - i]) {
			 a = 0;
		}
	}

	if (a == 0) {
		printf("\nLe mot %s n'est pas un palindrome", mot2);
	}
	else {
		printf("\nLe mot %s est un palindrome", mot2);
	}

	return(EXIT_SUCCESS)
}