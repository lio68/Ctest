#include <stdio.h>

    int main () {

 setvbuf(stdout, NULL, _IONBF, 0);// для нормальной работы scanf и printf


		int n;

		printf("Input dec number n\n");

		scanf("%d",&n);

    printf("%s%X","Number hex =  ",n);



		return 0;

	}
