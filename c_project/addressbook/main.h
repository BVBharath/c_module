#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
	char id[20];
	char name[20];
	char surname[20];
	char tel[20];
	char mail[50];
}p;

FILE *fp;
void append();

void search_by_ID();

void search_by_name();

void search_by_surname();

void search_by_name_and_surname();
void del();

void modify();

int find_number_of_records();

void sort();
#endif
