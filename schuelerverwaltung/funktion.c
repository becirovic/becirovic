#include <stdio.h>
#include "header.h"

int eingabe(int anzahl, schueler_t schueler[]) {

    printf("\n");
    fflush(stdout);
    if (anzahl != 0) {
        schueler = (struct schueler *) realloc(schueler, anzahl + 1);
    }

    printf("Nachname?\n");
    fflush(stdout);
    scanf("%31s", (schueler + anzahl)->Nachname);
    printf("Vorname?\n");
    fflush(stdout);
    scanf("%23s", (schueler + anzahl)->Vorname);
    printf("Geburtsjahr?\n");
    fflush(stdout);
    scanf("%d", &(schueler + anzahl)->geburtsdatum.geburtsjahr);
    printf("Geburtsmonat?\n");
    fflush(stdout);
    scanf("%d", &(schueler + anzahl)->geburtsdatum.geburtsmonat);
    printf("Geburtstag?\n");
    fflush(stdout);
    scanf("%d", &(schueler + anzahl)->geburtsdatum.geburtstag);
    printf("Geschlecht?\n");
    fflush(stdout);
    fflush(stdin);
    scanf("%c", &(schueler + anzahl)->geschlecht);

    anzahl = anzahl + 1;

    return anzahl;
}

void abspeichern(schueler_t *schueler, char dateiname, int anzahl){
    FILE *file;
    FILE *file_anzahl;
    int i = 0;

    file = fopen(dateinamen, "wb");

    for (i = 0; i < anzahl; i++) {
        fscanf(file, "%s\n", (schueler + i)->Nachname);
        fscanf(file, "%s\n", (schueler + i)->Vorname);
        fscanf(file, "%d\n", &(schueler + i)->geburtsdatum.geburtsjahr);
        fscanf(file, "%d\n", &(schueler + i)->geburtsdatum.geburtsmonat);
        fscanf(file, "%d\n", &(schueler + i)->geburtsdatum.geburtstag);
        fscanf(file, "%c\n", &(schueler + i)->geschlecht);
    }

    file_anzahl = fopen("anzahl.bin", "wb");
    fprintf(file_anzahl, "%d", anzahl);

    fclose(file);
    fclose(file_anzahl);
}

int einlesen(schueler_t *schueler,char dateiname, int anzahl){
    FILE *file;
    FILE *file_anzahl;
    int i = 0;

    free(schueler);

    file_anzahl = fopen("anzahl.bin", "rb");
    fscanf(file_anzahl, "%d", &anzahl);

    schueler = (struct schueler*) malloc(anzahl);

    file = fopen(dateinamen, "rb");

    for (i = 0; i < anzahl; i++) {
        fscanf(file, "%s\n", (schueler + i)->Nachname);
        fscanf(file, "%s\n", (schueler + i)->Vorname);
        fscanf(file, "%d\n", &(schueler + i)->geburtsdatum.geburtsjahr);
        fscanf(file, "%d\n", &(schueler + i)->geburtsdatum.geburtsmonat);
        fscanf(file, "%d\n", &(schueler + i)->geburtsdatum.geburtstag);
        fscanf(file, "%c\n", &(schueler + i)->geschlecht);
    }

    fclose(file);
    fclose(file_anzahl);

    return anzahl;
}

void auflisten(schueler_t *schueler, int anzahl) {

    printf("\n");
    fflush(stdout);

    int i;

    for (i = 0; i < anzahl; i++) {
        printf("Nachname: %s\n", (schueler + i)->Nachname);
        fflush(stdout);
        printf("Vorname: %s\n", (schueler + i)->Vorname);
        fflush(stdout);
        printf("Geburtstag: %d.%d.%d\n\n", (schueler + i)->geburtsdatum.geburtstag,
               (schueler + i)->geburtsdatum.geburtsmonat, (schueler + i)->geburtsdatum.geburtsjahr);
        fflush(stdout);
        printf("Geschlecht: %c\n", (schueler + i)->geschlecht);
        fflush(stdout);
    }
}