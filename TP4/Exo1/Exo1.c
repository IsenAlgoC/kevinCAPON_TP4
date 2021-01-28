#include <stdio.h>
#include <stdlib.h>
#include "Exo1.h"

HEURE HeureDebut;
HEURE Duree;
HEURE HeureFin;

int main() {

	HeureDebut.heure = 12;
	HeureDebut.minute = 30;

	Duree.heure = 00;
	Duree.minute = 45;

	HeureFin.heure = HeureDebut.heure + Duree.heure;
	HeureFin.minute = HeureDebut.minute + Duree.minute;

	if (HeureFin.minute > 60) {
		HeureFin.heure = HeureFin.heure + 1;
		HeureFin.minute = HeureFin.minute - 60;
	}

	printf("Heure de debut : %d:%d\n", HeureDebut.heure, HeureDebut.minute);
	printf("Duree : %d:%d\n", Duree.heure, Duree.minute);
	printf("Heure de fin : %d:%d\n", HeureFin.heure, HeureFin.minute);

	return(EXIT_SUCCESS);
}