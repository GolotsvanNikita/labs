#include <stdio.h>

int main()
{
    // Цей код написав студент Голоцван Нiкiта Дмитрович AI - 251
    // 4.1
 //   float avg;
 //   int years;
 //   float coef;
 //   float rating;

 //   printf("enter your GPA (from 3 to 5): ");
 //   scanf_s("%f", &avg);

 //   if (avg < 3.0 || avg > 5.0)
 //   {
 //       printf("incorrect GPA.\n");
 //       return 1;
	//}

 //   printf("enter your work experience (in years): ");
 //   scanf_s("%d", &years);

 //   switch (years)
 //   {
 //       case 0:
 //           coef = 1;
 //           break;
 //       case 1:
 //           coef = 13;
 //           break;
 //       case 2:
 //       case 3:
 //       case 4:
 //       case 5:
 //           coef = 16;
 //           break;
 //       default:
 //           coef = 16;
 //           break;
 //   }

 //   rating = avg * coef;

 //   printf("rating: %.2f\n", rating);

 //   if (rating >= 45)
 //   {
 //       printf("you have been accepted to the master's program!!\n");
 //   }
 //   else
 //   {
 //       printf("you haven`t been accepted to the master's program :(\n");
 //   }

 //   return 0;

    // 4.2
    int unit;
    double V;
    double liters;

    printf("enter the unit of volume (1 - liter, 2 - milliliter, 3 - cubic meter): ");
    scanf_s("%d", &unit);

    printf("enter body volume V: ");
    scanf_s("%lf", &V);

    switch (unit)
    {
        case 1:
            liters = V;
            break;
        case 2:
            liters = V / 1000.0;
            break;
        case 3:
            liters = V * 1000.0;
            break;
        default:
            printf("incorrect unit number.\n");
            return 0;
    }

    printf("volume in liters: %.3f\n", liters);
    return 0;
}