#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int i;
    char ch;
    printf("All vowels: ");
    for(i=0; i<strlen(s); i++)
    {
        ch=s[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            printf("%c ", ch);
    }
    printf("\n");
    int index= -1;
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]=='L' || s[i]=='l')
            index= i;
    }
    if(index!= -1)
        printf("Last occurrence of L at position %d\n", index);
    return 0;
}
