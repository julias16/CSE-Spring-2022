#include<stdio.h>
#include<string.h>
int main()
{
    char curse[100];
    scanf("%s", curse);
    int i;
    for(i=0; curse[i]!='\0'; i++)
    {
        if(curse[i]>=33 && curse[i]<=96)
        {
            printf("Curse Backfired!");
            return 0;
        }
    }
    if(strlen(curse)>10)
    {
        printf("Curse Backfired!");
        return 0;
    }
    if(strcmp(curse, "Shut up"))
    {
        printf("Curse Got Actived!");
        return 0;
    }
}
