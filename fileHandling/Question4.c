#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i,n;
    char word[50];
    int aCount=0, eCount=0, iCount=0, oCount=0, uCount=0,othCount=0;
    FILE *fpointer;
    
    fpointer = fopen("myword.txt", "w");

    if(fpointer==NULL) {
                printf("\nError!");
                exit(1);
    }
    else
    {
      printf("Enter no of words : ");
      scanf("%d", &n);
      for (int j = 0; j < n;j++)
      {
          printf("Enter word : ");
          scanf("%s", word);

          int len = strlen(word);

          for (i = 0; i < len;i++)
          {
              if(word[i]==97 || word[i]==65)
              {
                  aCount++;
              }
               else if(word[i]==101 || word[i]==69)
              {
                  eCount++;
              }
               else if(word[i]==105 || word[i]==73)
              {
                  iCount++;
              }
               else if(word[i]==111 || word[i]==79)
              {
                  oCount++;
              }
               else if(word[i]==117 || word[i]==85)
              {
                  uCount++;
              }
              else
              {
                  othCount++;
              }
          }

           fprintf(fpointer, "Word \t    a\t e \t i \t o \t u \t other \t total \n");
          fprintf(fpointer, "-%10s \t%d \t %d \t %d \t %d \t %d \t %d \t\t %d \n\n", word, aCount, eCount,
                  iCount, oCount, uCount, othCount, len);
          
      }

    }

    fclose(fpointer);
}