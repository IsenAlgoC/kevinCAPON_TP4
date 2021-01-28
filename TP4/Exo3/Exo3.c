#include <stdio.h>
#include <stdlib.h>

int main() {

    char prenom[20];
    char nom[20];
    char c;

    printf_s("Quel est votre nom : ");
    scanf_s("%s", nom, _countof(nom));

    printf_s("Quel est votre prenom : ");
    scanf_s("%s", prenom, _countof(prenom));


    printf_s("Madame ou Monsieur (H ou F)");


    if (_getch() == 'H') {
        printf_s(" \n Monsieur ");
    }
    else {
        printf_s(" \n Madame ");
    }
    printf_s("%s ", nom);
    printf_s("%s", prenom);


    return EXIT_SUCCESS;
}