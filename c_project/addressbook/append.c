#include "main.h"


void append()
{
	fp=fopen("records.txt","a");
	if (fp==NULL)
	{
		printf("Error in file access\n");
		exit(0);
	}
	printf("Enter ID:\n");
	scanf("%s",p.id);
	printf("Enter name:\n");
	scanf("%s",p.name);
	printf("Enter surname:\n");
	scanf("%s",p.surname);
	printf("Enter telephone number:\n");
	scanf("%s",p.tel);
	printf("Enter e-mail address:\n");
	scanf("%s",p.mail);
	fwrite(&p,sizeof p, 1,fp);
	fclose(fp);
}
