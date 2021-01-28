#include <stdlib.h>
#include <stdio.h>

int esp = 0;
int nbMots = 0;
int lgMots = 0;
char phrase[1024];
float moy = 0;

int main() {

	printf_s("Entrez une phrase de 1024 caractères maximum : \n");
	gets_s(phrase, _countof(phrase));
	for (int i = 0; i < 1024; i++) {
		if (phrase[i] != '\0') {
			if (phrase[i] == ' ') {
				if (espace == 0) {
					nbMots++;
					moy = moy + lgMots;
					lgMots = 0;
					esp = 1;
				}
			}
			else {
				lgMots++;
				esp = 0;
			}
		}
		else {
			i = 1024;
			nbMots++;
			moy = moy + lgMots;
		}
	}
	moy = moy/ nbMots;

	printf("Votre phrase compte %d mots \n", nbMots);

	printf("La moyenne de lettres par mots est de %.2f \n", moy);

	return(EXIT_SUCCESS);
}