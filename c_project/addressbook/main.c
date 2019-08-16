#include "main.h"

int main()
{
	char c;
	do
	{
		printf("***ADDRESS BOOK DIRECTORY***\n");
		printf("1.Append\n2.Search\n3.Delete\n4.Modify\n5.Sort\n");
		char z;
		scanf("\n%c",&z);
		switch(z)
		{
			case '1': append(); 
					  break;
			case '2':
					  {
						  char choice;
						  printf("1.Search by ID\n2.Search byname\n3.Search by surname\n4.Search by name and surname\n");
						  scanf("\n%c",&choice);
						  switch(choice)
						  {
							  case '1': search_by_ID();
										break;
							  case '2':search_by_name(); 
									   break;
							  case '3':search_by_surname();
									   break;
							  case'4':search_by_name_and_surname();
									  break;
						  }
					  } 
					  break;
			case '3': del(); 
					  break;
			case '4': modify();
					  break;
			case '5': sort();
					  break;
		}
		getchar();
		printf("Do you want to continue? (Y/N)\n");
		c=getchar();
	}
	while(c=='y'||c=='Y');
}
