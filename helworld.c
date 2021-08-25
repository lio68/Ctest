#include <stdio.h>

  int main() {

     const char* nam="Группа";
	        int n1 = 1;
	        int n2 = 2;
			int n3 = 3;
	 const char* prod1 = "vodka= ";
	 const char* prod2= " beer=";
     const char* prod3= " ivasi=";
     const char* prod4= " kwakwa=";

	        int p1=97;
            int p2=63;
            int p3=59;
            int p4=36;

			char c1=67;
			char c2=36;
			char c3=c2+c1;
    // printf (char*strcat(one,toos));
    //   printf ("%s%s",one,toos);
	//
	//
        printf ("=========================================\n");
	    printf ("\t%s%d\n\n\r",nam,n1);
        printf ("%s%d%s%d%s%d\n","Граната ф1 ",p4,prod2,p3,prod3,p1);
        printf ("%s%x%s%d%s%d\n\n\r","Hex :",4578,prod1,p4,prod4,p3);
		printf ("=========================================\n");

        printf ("\t%s%d\n\n\r",nam,n2);
        printf ("%s%f%s%d%s%d\n\r","float :",56.34,prod2,p2,prod1,p1);
        printf ("c1=%hd;c2=%hd\r\nc3=%hd%d%s%d\n\n\r",c1,c2,c3,p4,prod4,p3);
		printf ("=========================================\n");

	    printf ("\t%s%d\n\n\r",nam,n3);
        printf ("%s%d%s%d%s%d\n\r",prod3,p4,prod2,p2,prod1,p1);
        printf ("%s%d%s%d%s%d\n\r",prod2,p2,prod1,p4,prod4,p3);



  }
