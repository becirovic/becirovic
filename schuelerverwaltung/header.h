#ifndef HEADER_H_
#define HEADER_H_

#include <stdlib.h>

#define LEN1 24
#define LEN2 32

typedef struct geburtsdatum{
    int geburtsjahr;
    int geburtsmonat;
    int geburtstag;
} geburtsdatum_t;

typedef struct schueler {
    char Nachname[LEN2];
    char Vorname[LEN1];
    char geschlecht;
    geburtsdatum_t geburtsdatum;
    struct schueler *next;
}schueler_t;

int eingabe(int anzahl, schueler_t *schueler);
void abspeichern(schueler_t *schueler, int anzahl, char dateinamen);
int einlesen(schueler_t *schueler, int anzahl, char dateinamen);
void auflisten(schueler_t *schueler, int anzahl);

#endif /* HEADER_H_ */