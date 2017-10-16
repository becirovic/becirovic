#include <stdio.h>
#include "header.h"

#define LEN 20

int main(){
    schueler_t *schueler;
    char dateinamen[LEN];
    int i = 0;
    int eingabe = 0;
    int anzahl = 0;

    schueler = (struct schueler *) malloc(1);

    do {
        do {
            printf("1) Schueler erstellen \n");
            printf("2) Speichern \n");
            printf("3) Laden \n");
            printf("4) Schueler ausgeben \n");
            printf("5) Beenden \n");
            fflush(stdout);
            scanf("%d", &eingabe);
        } while (eingabe < 1 && eingabe > 5);

        if (eingabe == 1){
            anzahl = eingabe(anzahl, schueler);
        } else if (eingabe == 2) {
            printf("Bitte geben Sie den Dateinamen ein.");
            fflush(stdout);
            scanf("%s", &dateinamen[LEN]);

            abspeichern(schueler, anzahl, dateinamen);
        } else if (eingabe == 3) {
            printf("Bitte geben Sie den Dateinamen ein.");
            fflush(stdout);
            scanf("%s", &dateinamen[LEN]);

            anzahl = einlesen(schueler, anzahl, dateinamen);
        } else if (eingabe == 4) {
            auflisten(schueler, anzahl);
        }
    } while (eingabe != 5);

    for (i = anzahl - 1; i >= anzahl; i--) {
        free((schueler + i));
    }
    return 0;
}