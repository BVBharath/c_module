#include "main.h"

void search_by_ID()
{
	fp=fopen("records.txt","r");
	if (fp==NULL)
	{
		printf("Error in file access\n");
		exit(0);
	}
	char ids[20];
	printf("Enter the ID to be searched:\n");
    scanf("\n%s",ids);
	int count=0;
	while(fread(&p,sizeof(p), 1, fp)==1)
	{
		printf("%s\n", p.id);
		if (strcmp(ids,p.id)==0)
		{
			count++;
			printf("ID: %s\n",p.id);
			printf("Name: %s\n",p.name);
			printf("Surname: %s\n",p.surname);
			printf("Telephone number: %s\n",p.tel);
			printf("E-mail address: %s\n",p.mail);
		}
	}
	fclose(fp);
	if (count==0)
	{
		printf("No record found\n");
	}
}
