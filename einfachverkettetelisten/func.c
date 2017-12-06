/*
 * fun.c
 *
 *  Created on: 19.11.2017
 *      Author: Becirovic Lejs
 */

#include "header.h"
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

data_t *addElementEnd(char *name, char *vorname, data_t *last) {
    data_t *akt;

    akt = (data_t *) malloc(sizeof(data_t));

    printf("Bitte geben Sie den Vornamen der Person ein: \n");
    fflush(stdout);
    scanf("%s", akt->vorname);

    printf("Bitte geben Sie den Nachnamen der Person ein: \n");
    fflush(stdout);
    scanf("%s", akt->name);

    akt->next = NULL;

    if (last != NULL) {
        last->next = akt;
    } else {
        last = akt;
    }

    return last;
}

data_t *addElementBegin(char name[], char vorname[], data_t *first) {
    data_t *akt;

    akt = (data_t *) malloc(sizeof(data_t));

    printf("Bitte geben Sie den Vornamen der Person ein: \n");
    fflush(stdout);
    scanf("%s", akt->vorname);

    printf("Bitte geben Sie den Nachnamen der Person ein: \n");
    fflush(stdout);
    scanf("%s", akt->name);

    if (first != NULL) {
        akt->next = first;
    } else {
        akt->next = NULL;
    }

    return akt;
}

data_t *deleteElement(char *name, data_t *first) {
    data_t *elem;

    elem = first;

    printf("Bitte geben Sie den Nachnamen der Person die Sie löschen wollen ein: \n");
    fflush(stdout);
    scanf("%s", name);

    if (strcmp(elem->name, name) == 0) {
        first = elem->next;
        return first;
    } else {
        while (elem->next != NULL) {
            if (strcmp(elem->next->name, name) == 0 && elem->next->next == NULL) {
                free(elem->next);
                elem->next = NULL;
                return first;
            } else {
                elem = elem->next;
            }
        }
    }

    return first;
}

void PrintAll(data_t *elem) {
    while (elem != NULL) {
        printf("Vorname: %s\n", elem->vorname);
        printf("Nachname: %s\n \n", elem->name);
        fflush(stdout);

        elem = elem->next;
    }
}

void FreeAll(data_t *elem) {
    free(elem);
    elem = NULL;
}


