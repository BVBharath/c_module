#include "main.h"
void del()
{
	char idd[20];
	printf("ID to be deleted:\n");
	scanf("\n%s",idd);
	fp=fopen("records.txt","r");
	int n;
	n=find_number_of_records();
	struct person people[n];
	fp=fopen("records.txt","r");
	int i;
	for ( i=0;i<n;i++)
	{
		fread(&p,sizeof p,1,fp);
		people[i]=p;
	}
	int j;
	fclose(fp);
	int count=0;
	for (i=0;i<n;i++)
	{
		if (strcmp(idd,people[i].id)==0)
		{
			for (j=i;j<n-1;j++)
			{
				people[j]=people[j+1];
			}
			n--;
			count ++;
		}
	}
	if (count==0)
		printf("Record not found\n");
	else
	{
		fp=fopen("records.txt","w");
		for (i=0;i<n;i++)
		{
			p=people[i];
			fwrite(&p,sizeof p,1,fp);
		}
		fclose(fp);
	}
}
