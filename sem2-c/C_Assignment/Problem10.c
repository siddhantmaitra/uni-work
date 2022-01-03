#include<stdio.h>
void copy_string(char *target, char *source)
{
    while(*source!='\0')
    {
        *target = *source;
        source++;
        target++;
    }
    *target = '\0';
}
main()
{
    char source[100], target[100];
    printf("Enter source string\n");
    gets(source);
    copy_string(target, source);
    printf("Target string is \"%s\"\n", target);
    return 0;
}
