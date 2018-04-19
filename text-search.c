#include<stdio.h>
#include<string.h>
int main()
{
    char text[5][80];
    int i;

    for(i=0;i<5;i++)
        {
            printf("\nType text number %d:",i+1);
            gets(text[i]);
        }


    do{
    printf("\nEnetr number of string (1-10):");
    scanf("%d",&i);
    i--;
    if(i>=0 && i<10)
        printf("\n%s\n",text[i]);

    }while(i>=0);

    return 0;


}
