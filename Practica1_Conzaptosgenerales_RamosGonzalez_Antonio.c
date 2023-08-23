#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float ecua(float a, float b, char oper){
    float result;
    
switch (oper)
{
case'+':

    result=a+b;

break;

case'-':

    result=a-b;

break;

case'*':

    result=a*b;

break;

case'/':

    result=a/b;

break;

default:

    printf("syntax error");
    
break;
}

return result;


}




int main(){
int a,y=0;
printf("elige una opcion\n");
printf("1=juego\n2=calculadora\n3=areas\n");
scanf("%d",&a);

switch(a){

case 1:
    do {
    
        srand(time(NULL));
        int x,n=rand()%101;
        printf("se ha generado un numero del 1 al 100. intenta adivinarlo\n");
        
        while (x!=n){
            scanf("\n%d",&x);

            if (x<n){
                printf("mas arriba\n");
            }
            else if (x>n){
                printf("mas abajo\n");
            }

        }

        printf("ganaste\nquieres jugar de nuevo?\n1=si\n2=no\n");
        scanf("%d",&y);

    }while (y !=2);
break;

case 2:
    
    do {
       
        float a,b, result;
        char oper;
        printf("dame un numero\n");
        scanf("%f",&a);
        printf("dame otro numero\n");
        scanf("%f",&b);
        printf("Elige un operador(+,-,*,/)\n");
        scanf(" %c",&oper);
        result=ecua(a,b,oper);

        printf("el resultado de la operacion es %f\n",result);

        printf("\ndesea realizar otra operacion ?\n1=si\n2=no\n");
        scanf("%d",&y);
    }while (y !=2);
break;

case 3:
    
    do{
        char fig;
        float b_r,h,area;
        const float pi=3.14159;
        
       
        printf("de que figura desea sacar el area\n");
        printf("a=triangulo\nb=circulo\nc=rectangulo\nd=cubo\ne=cilindro\n");
        scanf(" %c",&fig);
        switch (fig)
        {
            case'a': 
                printf ("dame la base\n");
                scanf("%f",&b_r);
                printf ("dame la altura\n");
                scanf("%f",&h);
                area=(b_r*h)/2;
                printf("\nel area del triangulo es:%f",area);
            break;
            
            case 'b':
            printf ("dame el radio\n");
                scanf("%f",&b_r);
                area=pi*(pow (b_r,2));
                printf("\nel area del circulo es:%f",area);
            break;
                
            case 'c':
                printf ("dame la base\n");
                scanf("%f",&b_r);
                printf ("dame la altura\n");
                scanf("%f",&h);
                area=(b_r*h);
                printf("\nel area del rectangulo es:%f",area);
            break;

            case 'd':
                printf ("dame uno de los lados\n");
                scanf("%f",&b_r);
                area=6*(pow(b_r,2));
                printf("\nel area del cuadrado es:%f",area);
            break;

            case 'e':
                printf ("dame el radio\n");
                scanf("%f",&b_r);
                 printf ("dame la altura\n");
                scanf("%f",&h);
                area=((2*pi)*(b_r*h))+((2*pi)*(pow(b_r,2)));
                printf("\nel area del cilindro es:%f",area);
            break;

            default:
                printf("error");
            break;
        }
        printf("\ndesea calcular otra area ?\n1=si\n2=no\n");
        scanf("%d",&y);
    }while (y!=2);

break;

default:
    printf("error"); 
break;
   
}

}