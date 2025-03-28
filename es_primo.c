#include <stdio.h>

int es_primo(int n);

int main()
{
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++)
    {
        if (es_primo(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

int es_primo(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++)
    { // Corregido: Empezar en 2 y optimizar con sqrt(n)
        if (n % i == 0)
            return 0;
    }

    return 1;
}
