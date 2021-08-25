#include<stdio.h>

      int main() {

         //int n = 0;

           setvbuf(stdout, NULL, _IONBF, 0);
         
            printf("%s","Что бы вы сегодня посмртрели?\n");
			printf("%s","1.Батареи просят огня.\n");
            printf("%s","2.В мае 45года.\n");
            printf("%s","3.Огненная дуга.\n");
            printf("%s","4.Берегись автомобиля.\n");
            printf("%s","5.Чужие.\n");

			int n;

            scanf("%d", &n);

            switch(n) {
                 case 1:
                    printf("Вы выбрали:Батареи просят огня .\n");
                    break;			
                 case 2:
                    printf("Вы выбрали:В мае 45года .\n");
                    break;			
                 case 3:
                    printf("Вы выбрали:Огненная дуга.\n");
                    break;
                 case 4:
                    printf("Вы выбрали:Берегись автомобиля\n");
                    break;
                 case 5:
                    printf("Вы выбрали:Чужие\n");
                    break;
                 default:
                    printf("Вы ничего не выбрали.\n");
                 
              }
			return 0;
          }

      
