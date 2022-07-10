#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<stdbool.h>

int count();

struct Library
{
	int AcceNo;
	char Booktitle[50];
	char Bookauthor[30];
	bool flag;
} b[50] = {
	1, "Cricket World Cup: The Indian Challenge", "Ashis Ray", true,
	2, "The Testaments", "Margaret Atwood", true,
	3, "Celestial Bodies", "Jokha Alharthi", true,
	4, "The New Delhi Conspiracy", "Meenakshi Lekhi	", false,
	5, "Fault Lines", "Raghuram Rajan", true,
	6, "Darkness to light", "Lamar Odom", true,
	7, "The Third Pillar", "Raghuram Rajan", false,
	8, "C Programming", "Yashavant Kanethkar", true,
	9, "C Programming", "Robart C.Martin", true,
	10, "Code Complete", "Steve Connell",true};

int All = 10;


void DisplayBookInfo(int i)
{
	i--;
	for (int j = 0; j<All;j++)
	{
		if(j!=i)
		{
			printf("Invalid Book Accession Number...\n\n");
		}
		else
		{
           	printf("\n\n\n");
	        printf("\nAccession Number : %d", b[i].AcceNo);
	        printf("\nTitle : %s", b[i].Booktitle);
	        printf("\nAuthor : %s", b[i].Bookauthor);
	
	        if (b[i].flag==false)
          {
	  	    printf("\nStatus : Issued");
	      }
	       else
	     {
		    printf("\nStatus : Available");
	     }

		}
	}
	
}


void AddBook()
{
	All++;
	int next = count();
	b[next].AcceNo = next + 1;

	while (getchar() != '\n');
	printf("\nEnter the Title of the New book : ");
	gets(b[next].Booktitle);
	printf("\nEnter the Author name of the New book : ");
	gets(b[next].Bookauthor);
	b[next].flag = true;
	system("cls");
}


void AuthorBooks(char *author)
{
	int i = 0;
	printf("\nBooks of \"%s\" are following : \n\n", author);
	while (b[i].AcceNo)
	{
		if (!(strcmp(author, b[i].Bookauthor)))
			DisplayBookInfo(b[i].AcceNo);
		i++;
	}
}


void TitleBook(int BNo)
{
	int i = BNo;
	int m = 0;
	for (int j =1; j<=All;j++)
	{
		if(j!=i)
		{
			printf("That relavent title book is not found...\n\n");
		}
		else
		{
			m++;
		}
     }
	 printf("Total Number of books of relavent title : %d\n\n", m);
}


int count()
{
	int i = 0;
	while (b[i].AcceNo)
		i++;
	return i;
}


void AllBooks()
{
	int i = 0;
	while (b[i].AcceNo)
	{
		DisplayBookInfo(i + 1);
		i++;
	}
}

void IssueBook(int nummm)
{
   int i = nummm;
	for (int j =1; j<=All;j++)
	{
		if(j!=i)
		{
			printf("That relavent book is not found...\n\n");
		}
		else
		{
			b[i].flag = false;
			break;
		}
     }
}


int main()
{
	int AcNo,option,No,Num;
	char auth[30];
	do
	{
		system("cls");
		printf("\n********Main Menu********\n\n");
		printf("\n1. Display Book Information :");
		printf("\n2. Add Book Information: ");
		printf("\n3. List all books of given author :");
		printf("\n4. List the title of specified book :");
		printf("\n5. List the counts of the books in library: ");
		printf("\n6. List the books in order of accession number : ");
		printf("\n7. Issue a Book : ");
		printf("\n8. Exit: ");

		printf("\n\nEnter you choice : ");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("\nEnter the Book Accession Number: ");
			scanf("%d", &AcNo);
			DisplayBookInfo(AcNo);
			getch();
			break;

		case 2:
			AddBook();
			getch();
			break;

		case 3:
			while (getchar() != '\n');
			printf("Enter the name of the Author: ");
			gets(auth);
			AuthorBooks(auth);
			getch();
			break;

		case 4:
			printf("\nEnter the Accession number of book : ");
			scanf("%d", &No);
			TitleBook(No);
			getch();
			break;

		case 5:
			printf("\nTotal Number of books in the Library : %d", count());
			getch();
			break;

		case 6:
			AllBooks();
			getch();
			break;

		case 7:
		    printf("\nEnter the Accession number of book : ");
			scanf("%d", &Num);
			IssueBook(Num);
			break;
			
		case 8:
			exit;
			break;	

		default:
			printf("\nInvalid choice, Try Again!!");
			getch();

		}
	} while (option != 8);
	getch();
	
}








