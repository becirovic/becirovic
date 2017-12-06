/*
 * main.c
 *
 *  Created on: 19.11.2017
 *      Author: Becirovic Lejs
 */

#include <stdio.h>
#include "header.h"

#define LEN 30

int main() {
    data_t *first = NULL;
    data_t *last = NULL;
    data_t *elem = NULL;

    char name[LEN];
    char vorname[LEN];

    int eingabe;

    do {

        printf("Menü: \n"
                       "1. Element am Anfang hinzufügen \n"
                       "2. Element am Ende anhängen \n"
                       "3. Elemente an einer bestimmten Stelle löschen \n"
                       "4. Alle Elemente ausgeben \n"
                       "5. Alle Elemente löschen \n"
                       "6. Programm beenden \n");
        fflush(stdout);
        scanf("%d", &eingabe);

        if (eingabe == 1) {
            first = addElementBegin(name, vorname, first);
        } else if (eingabe == 2) {
            last = addElementEnd(name, vorname, last);
            if (first == NULL) {
                first = last;
            }
        } else if (eingabe == 3) {
            first = deleteElement(name, first);
        } else if (eingabe == 4) {
            elem = first;

            PrintAll(elem);
        } else if (eingabe == 5) {
            elem = first;
            FreeAll(elem);
        }
    } while (eingabe != 6);

    return 0;
}
