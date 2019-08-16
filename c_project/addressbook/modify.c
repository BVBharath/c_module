#include "main.h"
void modify()
{
	fp=fopen("records.txt","r");
	//Determine the number of records in file
	int n;
	n=find_number_of_records();
	rewind(fp);
	struct person people[n];
	//fp=fopen("records.txt","r");
	int i;
	for ( i=0;i<n;i++)
	{
		fread(&p,sizeof p,1,fp);
		people[i]=p;
	}
	char idm[20];
	printf("Enter the ID to be modified:\n");
	scanf("\n%s",idm);
	fclose(fp);
	int count=0;
	for (i=0;i<n;i++)
	{
		if (strcmp(idm,people[i].id)==0)
		{
			count++;
			getchar();
			printf("Do you want to modify the ID? (Y/N)\n");
			char c;
			c=getchar();
			if (c=='y'||c=='Y')
			{
				printf("New ID:\n");
				scanf("%s",people[i].id);
			}
			getchar();
			printf("Do you want to modify the name?(Y/N)\n");
			c=getchar();
			if (c=='y'||c=='Y')
			{
				printf("New name:\n");
				scanf("%s",people[i].name);
			}
			getchar();
			printf("Doyou want to modify the surname?(Y/N)\n");
			c=getchar();
			if (c=='y'||c=='Y')
			{
				printf("New surname:\n");
				scanf("%s",people[i].surname);
			}
			getchar();
			printf("Do you want to modify the telephonenumber? (Y/N)\n");
			c=getchar();
			if (c=='y'||c=='Y')
			{
				printf("New telephone number:\n");
				scanf("%s",people[i].tel);
			}
			printf("Do you want to modify the e-mail address?(Y/N)\n");
			c=getchar();
			if (c=='y'||c=='Y')
			{
				printf("New e-mail address:\n");
				scanf("%s",people[i].mail);
			}
			getchar();
		}
	}
	if (count==0)
	{
		printf("Record not found\n");
	}
	else
	{
		fp=fopen("records.txt","w");
		for (i=0;i<n;i++)
		{
			p=people[i];
			fwrite(&p,sizeof p,1,fp);
		}
	}
	fclose(fp);
}
