// Write a program to find the roots of a quadratic equation and categorize them

#include<stdio.h>
#include<math.h>
int main () {

float a,b,c;
float discriminant,root1,root2,imagpart ,realpart ;

printf("enter coffiecient a , b ,c :  ");
scanf("%f %f %f", &a ,&b , &c);

if(a==0.0){
printf("This is not a Quadratic equation \n");
return 1 ;
}
discriminant= (b*b) - (4*a*c) ;
printf("discriminant : %f\n" , discriminant);

if(discriminant > 0.0 ){
root1 = (-b + sqrt(discriminant)) / (2*a) ;
root2 = (-b - sqrt(discriminant))/ (2*a) ;
printf("Roots are %f and %f\n ", root1, root2 );
printf("Roots are real and distinct\n  ");
}else if(discriminant == 0.0 ){
root1 = root2 = -b / (2*a) ;
printf("roots are %f and %f\n ", root1,root2);
printf("roots are real and equal\n ");
}else {
realpart = -b / (2*a) ;
imagpart = sqrt(-discriminant)/ (2*a); 
printf("Roots are %f + %fi and %f - %fi \n ",realpart, imagpart ,realpart, imagpart);
printf("Roots are imagninary\n");
}
return 0 ;

}


