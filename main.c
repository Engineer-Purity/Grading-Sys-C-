/*-----------------------------------
Project :Grading system
Author  :Purity Wanjiru
Date    :June 2021
License :MIT
Compiler:C99
-------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main()
{
      //Variable declaration
      int mark;
      char grade;

      //read input
      printf('\tZETECH UNIVERSITY GRADING SYSTEM\:
      /*
      ITERATION STATEMENTS (LOOPS)
             predefined number of times:
                  -for
               Open ended:
                   -while
                   -do while
                 do while:

              do  (
                    //statements

                    )while(condition);


      */
      do {
        printf("Enter a mark (0-100) :");
        scanf ("%d" ,&mark);

        if (mark < 0|| mark > 100)  {
            printf ("Invalid Mark.Try again\n") ;
      }
      }while (mark < 0|| mark > 100);

      //computation or processing
      //Grading system :
      //70-100 -A
      //60-69  -B
      //50-59  -C
      //40-49  -D
      //0 -39  -F

      //Grading
      if (mark >= 70){
          grade = 'A' ;


      }
      else if (mark >= 60) {
            grade = 'B';
      }
      else if (mark >= 50)  {
            grade = 'C' ;
      }
      else if (mark >= 40)   {
            grade ='D' ;
      }
      else {
           grade = 'F' ;
       }
       // Output Grade and Comment on Grade
       switch(grade) {
            case 'A' :
                printf ("Grade: %c\n",grade);
                printf ("Comment: Excellent\n");
                break;
            case 'B' :
                printf ("Grade: %c\n,grade");
                printf ("Comment:Very good\n");
                break;
            case 'C' :
                printf ("Grade: %c\n,grade");
                printf ("Comment:Average\n");
                break;
            case 'D' :
                printf ("Grade: %c\n,grade");
                printf ("Comment:You can do better\n");
                break;
            case 'F' :
                printf ("Grade: %c\n,grade");
                printf ("Comment:Failed\n");
                break;
            default:
                printf("Comment: Invalid mark\n");



       }

       return 0;





            string :
                3










    printf("Hello world!\n");
    return 0;
}
