
//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
#include<math.h>

int main () {
    float a,b,c,discriminant,root1,root2,realpart,imaginarypart;
    printf("enter the coefficients a,b,c of the quadratic equation (ax^2 + bx + c = 0)");
    scanf("%f %f %f",&a,&b,&c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);
        printf("root1 = %.2f and root2 = %.2f\n",root1,root2);
        printf("the roots are real and diffrent\n");
    } else if (discriminant == 0) {
        root1 = root2 = -b/(2*a);
        printf("root1 = root2 = %.2f\n",root1);
        printf("the root are real and same\n");

    }
    else{ 
        realpart = -b/(2*a);
        imaginarypart = sqrt(-discriminant)/(2*a);
        printf("root1 = %.2f + %.2f i and root2 = %.2f - %.2f i\n",realpart,imaginarypart,realpart,imaginarypart);
        printf("the roots are complex and imaginary\n");
    }
    return 0;
}
 