#include<studio.h>
int main()
{
 int n;
 printf("Enter the marks:\n",n);
 Scanf("%d",&n);
  if(n>=55)
   {
    printf("%s",n>=85?"Grade A":(n>=70?"Grade B":"Grade C"));
   }
  elseif(n>=40)
   {
    printf("Grade D",n);
   }
 else
   { 
    printf("Grade F",n);
   }
