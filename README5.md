#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *from_fptr;
    FILE *to_fptr;
    char ch;
    
    if((from_fptr = fopen("a.c","r+")) == NULL)
    {
        printf("from file open error!\n");
	exit(0);
    }
    if((to_fptr = fopen("b.c","w+")) == NULL)
    {
        printf("to file open error!\n");
	exit(0);
    }

    while((ch = fgetc(from_fptr)) != EOF)
    {
        fputc(ch,to_fptr);
    }

    fclose(from_fptr);
    fclose(to_fptr);

    return 0;
}
