#include <stdio.h>
int main()
{
    int marks;
    printf("please enter your marks dear \n");
    scanf("%d", &marks);

   switch (marks)
   {
   case 90:
       printf("good keep it up");
       break;
   case 70:
       printf("work hard keep it up");
       break;
   case 60:
       printf("need more efforts");
       break;
   case 50:
       printf("keep trying");
       break;
   case 40:
       printf("need to work more");
       break;
   
   default:
       printf("wrong input \n");
       break;
   }
   return 0;
}