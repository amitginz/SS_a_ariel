#include <stdio.h>
#include "NumClass.h"
void main()
{
int a,b;
printf("please enter 2 numbers");
scanf("%d%d", &a, &b);
int min=0;
int max=0;
if(a>b){
 max=a;
 min=b;
}
else{
 max=b;
 min=a;
}
for (int i =min; i < max; i++)
{
   if(isArmstrong(i)==1)
   printf("The Armstrong numbers are:%d+" "",i);
}

for (int i =min; i < max; i++){
   if(isPalindrome(i)==1)
   printf("\nThe Palindromes are:%d+" "",i);
}
for (int i =min; i < max; i++)
{
   if(isPrime(i)==1)
   printf("\nThe Prime numbers are:%d+" "",i);
}
for (int i =min; i < max; i++)
{
   if (isStrong(i)==1)
   printf("\nThe Strong numbers are:%d+" "",i);
}
}