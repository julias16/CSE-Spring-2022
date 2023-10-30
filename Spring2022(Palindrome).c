#include <stdio.h>
int main()
{
    char s[1000], r[1000];
    int begin, end, count = 0,i;

    printf("Input a string\n");
    gets(s);
    while (s[count] != '\0')
        count++;

    end = count - 1;
    for (begin = 0; begin < count; begin++)
    {
        r[begin] = s[end];
        end--;
    }
    r[begin] = '\0';
    printf("reverse: %s\n", r);

    int flug=0;
    for(i=0; i<count; i++)
    {
        if(s[i]!=r[i])
        {
            flug=1;
            break;
        }

    }
    if (flug==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
