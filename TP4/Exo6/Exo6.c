#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int cible;
int a = 0;
int n = 0;
int tab[100];
int tab2[100];*
int* Ptr = &tab[0];

int main(){

	srand(time(NULL));

	for (int i = 0; i < 100; i++) {
		tab[i]=rand()%21;
	}

	for (int i = 0; i < 100; i++) {		  
		tab2[i] = -1;					  
	}												   
	printf("Entrez le nombre recherché : ");		   
	scanf_s("%d", &cible);									   
													   
	for (int i = 0; i < 100; i++) {					   
		if (*Ptr == cible) {						   
			tab2[n] = i;							   
			a++;							   
			n++;									   
		}   
		Ptr++;
	}
	
	if (a != 0) {
		int i = 1;
		printf("\nla valeur %d a ete trouvée en %d,", cible, indice[0]);
		while (indice[i] != -1) {
			printf("et également en %d", indice[i]);
			i++;
		}
	}
	else {
		printf("\nla valeur %d n'a pas ete trouvee", cible);
	}
	
	return(EXIT_SUCCESS);
}