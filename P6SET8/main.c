#include <stdio.h>
#include <stdlib.h>
struct student
{
    char nume[50];
    int nota1;
    int nota2;
    int nota3;

};
int main()
{
   //Creare vector
   struct student studenti[100];
   int nr_studenti,i;

   //Populare vector
   printf("Introduceti nr de studenti: ");
   scanf("%d", &nr_studenti);
   for(i=0; i<nr_studenti; i++)
   {
       printf("\nIntroduceti date pentru studentul %d\n\n", i+1);
       printf("Nume: ");
       scanf("%s", studenti[i].nume);
       printf("Nota 1: ");
       scanf("%d", &studenti[i].nota1);
       printf("Nota 2: ");
       scanf("%d", &studenti[i].nota2);
       printf("Nota 3: ");
       scanf("%d", &studenti[i].nota3);
   }

   //Afisare vector
   /*printf("\nDatele introduse sunt: \n\n");
   for(i=0; i<nr_studenti; i++)
   {

       printf("\nNume: ");
       printf("%s", studenti[i].nume);
       printf("\nNota 1: ");
       printf("%d", studenti[i].nota1);
       printf("\nNota 2: ");
       printf("%d", studenti[i].nota2);
       printf("\nNota 3: ");
       printf("%d", studenti[i].nota3);
   }*/

   char student_cautat[20];
   printf("\nIntroduceti studentul pe care doriti sa-l cautati: ");
   scanf("%s", student_cautat);
   for(i=0; i<nr_studenti; i++)
   {
       if(strstr(studenti[i].nume, student_cautat)!=0)
       {
           printf("\nStudentul a fost gasit!");
           printf("\nInformatiile studentului sunt: ");
           printf("\nNume: ");
           printf("%s", studenti[i].nume);
           printf("\nNota 1: ");
           printf("%d", studenti[i].nota1);
           printf("\nNota 2: ");
           printf("%d", studenti[i].nota2);
           printf("\nNota 3: ");
           printf("%d", studenti[i].nota3);
           exit(0);
       }
       else
       {
        printf("Studentul nu a fost gasit!");
        exit(0);
       }


   }







    return 0;
}
