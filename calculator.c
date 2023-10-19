#include <stdio.h>

int main()
{

     int num_1;
     int num_2;
     int choice;

     while (1)

     {

          printf("\nEnter first number:\n");
          scanf("%d", &num_1);
          printf("Enter second number:\n");
          scanf("%d", &num_2);
          
          printf("\n Choose any number to perform calculation ");
          printf("\n1. Addition of 2 numbers ");
          printf("\n2. Substraction of 2 numbers ");
          printf("\n3. Multiplication of 2 numbers");
          printf("\n4. Division of 2 numbers");
          printf("\n5. Exit");
          printf("\n------------------------------------------------------------\n");
          printf("Enter your choice:\t");
          scanf("%d", &choice);


          switch (choice)

          {

          case 1:
          {
               int data;
               printf("Summation:%d\n", num_1 + num_2);
               break;
          }
          case 2:
          {
               printf("Substraction:%d\n", num_1 - num_2);
               break;
          }
          case 3:
               printf("Multiplication:%d\n", num_1 * num_2);
               break;
          case 4:
               printf("Division:%d\n", num_1 / num_2);
               break;

          default:
               printf("\n Invalid choice. Please try again.\n");
          }
     }

     return 0;
}
