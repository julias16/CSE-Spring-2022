#include<stdio.h>
int main()
{
    int n, marks;
    scanf("%d", &n);
    int A, B, C, D, F, i;
    A=B=C=D=F=0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &marks);
        if(marks>=90 && marks<=100)
            A++;
        else if(marks>=80 && marks<90)
            B++;
        else if(marks>=70 && marks<80)
            C++;
        else if(marks>=60 && marks<70)
            D++;
        else if(marks>=0 && marks<60)
            F++;
    }
    printf("Number of students who got A: %d\n", A);
    printf("Number of students who got B: %d\n", B);
    printf("Number of students who got C: %d\n", C);
    printf("Number of students who got D: %d\n", D);
    printf("Number of students who got F: %d\n", F);
    return 0;
}
