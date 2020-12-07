//	Write a C program to find LCM of two numbers.

#include<stdio.h>

void lcm_two_no(int,int);
int main()
{
    int n1,n2;

   //to take user input n1,n2
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    //call of user define function
    lcm_two_no(n1,n2);
    return 0;
}

//function to calculate l.c.m
void lcm_two_no(int n1,int n2)
{
   int check1,check2;
    //to use of duplicity value
    check1=n1;
    check2=n2;

     //to find lcm of number
     while(check1!=check2)
     {
         //for condition true
         if(check1< check2)
              check1=check1+n1;

         //for condition false
          else
            check2=check2+n2;
      }
    printf("\nL.C.M of %d and %d is: %d",n1,n2,check1);

}
