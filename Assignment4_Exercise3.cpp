#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float p,s=0,P=0;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("Enter the third number: ");
	scanf("%d",&c);
	
	 if((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<b*b+a*a)) {

                   printf("\nThese are the three sides of a triangle");

                   p = (a+b+c)/2;

                   s = sqrt(p*(p-a)*(p-b)*(p-c));

                   printf("\nThe area of the triangle is %f", s);
		  
                   P = a+b+c;
                   
		   printf("\nThe perimeter of the triangle is %f", P);

          } else

                   printf("\nThese are not the three sides of a triangle");

}
