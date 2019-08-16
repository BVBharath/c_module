#include "main.h"

void swap(char *a,char *b)
{
	char *temp = a;
	a=b;
	b= temp;
}
void sort()
{
	fp=fopen("records.txt","r");
	//Determine the number of records in file
	int n;
	n=find_number_of_records();
	struct person people[n];
	fp=fopen("records.txt","r");
	int i,j;
	for ( i=0;i<n;i++)
	{
		fread(&p,sizeof p,1,fp);
		people[i]=p;
	}
	fclose(fp);
	int count=0;
	struct person temp;
	char ch;
	getchar();
	printf("1.Sort by ID\n2.Sort by name\n");
	scanf("%c",&ch);
	if(ch == '1')
	{
		for (i=0;i<n-1;i++)
		{
			for(j = 0; j < n-i-1; j++)
			{
				if(atoi(people[j].id) > atoi(people[j+1].id))
				{
					temp = people[j];
					people[j] = people[j+1];
					people[j+1] = temp;
				}

			}
		}
	}
	else if(ch == '2')
	{
		for (i=0;i<n-1;i++)
		{
			for(j = 0; j < n-i-1; j++)
			{
				if(strcmp(people[j].name,people[j+1].name) > 0)
				{
					temp = people[j];
					people[j] = people[j+1];
					people[j+1] = temp;
				}

			}
		}
	}

	for(i=0;i<n;i++)
	{
		printf("Num:%d\n",i+1);
			printf("ID: %s\n",people[i].id);
			printf("Name: %s\n",people[i].name);
			printf("Surname: %s\n",people[i].surname);
			printf("Telephone number: %s\n",people[i].tel);
			printf("E-mail address: %s\n",people[i].mail);
			putchar('\n');
	}
}
