#include "main.h"

int find_number_of_records()
{
	fp=fopen("records.txt","r");
	int n=0;
	while(fread(&p,sizeof(p),1,fp))
	{
		n++;
	}
	return n;
}
