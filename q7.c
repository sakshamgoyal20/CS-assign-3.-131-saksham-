// Write a C program to print all Strong numbers between 1 to n.

#include <stdio.h>

int main()
{
   int n, num, a, digit, j , i, factSum;
   printf("To find all strong numbers between 1 to N Enter value of N =");
   scanf("%d",&n);
   printf("List of strong numbers between 1 to %d\n", n);
    for(num = 1; num <= n; num++)
    {
        a = num;
        factSum = 0;
        while(a)
        {
           digit = a%10;
           for(i=1, j=1; i<=digit; i++)
           {
               j = j * i ;
           }
           factSum += j ;
           a = a/10;
        }
        if(factSum == num)
           printf("%d ", num);
    }
    return 0;
}
