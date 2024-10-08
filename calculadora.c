#include <stdio.h>
int main(){
    int num, num2, resultado;
    char op;
    printf("escriba un numero: ");
    scanf("%d",&num);
    while ((getchar()) != '\n');
    printf("\nescriba una operacion: ");
    scanf("%c",&op);
    
    printf("\nescriba un numero: ");
    scanf("%d",&num2);

    switch (op)
    {
    case '+':
        resultado = num + num2; 
        printf("\nel resultado es: %d",resultado);
        break;
    case '-':
        resultado = num - num2;
        printf("\nel resultado es: %d",resultado);
        break;
    case '*':
        resultado = num * num2; 
        printf("\nel resultado es: %d",resultado);
        break;
    case '/':
        resultado = num / num2;
        printf("\nel resultado es: %d",resultado);
        break;
    
    default:
    printf("\nLa operacion que ha escrito no se puede resolver");
        break;
    }
    return 0;
}