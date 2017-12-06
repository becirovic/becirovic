/*
 * header.h
 *
 *  Created on: 19.11.2017
 *      Author: Becirovic Lejs
 */

#ifndef HEADER_H_
#define HEADER_H_

#define MAX_LEN 30

typedef struct data{
    char name[MAX_LEN];
    char vorname[MAX_LEN];
    struct data *next;
}data_t;

data_t *addElementEnd(char *name, char *vorname, data_t *last);

data_t *addElementBegin(char *name, char *vorname, data_t *first);

data_t *deleteElement(char *name, data_t *first);

void PrintAll (data_t *elem);

void FreeAll (data_t *elem);


#endif /* HEADER_H_ */
