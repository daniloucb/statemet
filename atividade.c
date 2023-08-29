#include <stdio.h>
#include <string.h>

void clearBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
};

void checkAge()
{
    printf("Digite sua idade: \n");
    int idade;
    scanf("%d", &idade);
    clearBuffer();

    if(idade < 18) {
        printf("menor de idade");
    } else {
        printf("maior de idade");
    }

};

void checkSalary()
{
    printf("Digite seu salário: \n");
    int salary;
    int minimalSalary = 1320;
    scanf("%d", &salary);
    clearBuffer();

    if(salary < minimalSalary) {
        printf("ganha menos que um salário mínimo.");
    } else {
        printf("ganha mais que um salário mínimo.");
    }

};

void checkHeight()
{
    printf("Digite sua altura em centimetros: \n");
    int height;

    scanf("%d", &height);
    clearBuffer();

    if(height < 180) {
        printf("sua altura é menor que 1.80m");
    } else {
        printf("sua altura é maior que 1.80m");
    }
};

void checkWeight()
{
    printf("Digite seu peso: \n");
    float weight;

    scanf("%f", &weight);
    clearBuffer();

    if(weight < 60) {
        printf("seu peso é menor que 60kg");
    } else {
        printf("seu peso é maior que 60kg");
    }
};

void relation()
{
    if(10 % 5 * 2 != 5 * 2 + 1) {
        printf("verdadeiro");
    } else {
        printf("falso");
    }
};

int main()
{
    printf("Escolha uma opção:\n");
    printf("1. Leia a idade e imprima se a pessoa é maior\n");
    printf("2. Leia o salário e imprima se ganha mais que o salário mínimo\n");
    printf("3. Leia a altura e imprima se é maior que 1.8m\n");
    printf("4. Leia o peso e imprima se é menor que 60kg\n");
    printf("5. Avalie a relação\n");

    int option;
    scanf("%2d", &option);
    clearBuffer();

    switch(option)
    {
        case 1: 
        {
            checkAge();
            break;
        }
        case 2:
        {
            checkSalary();
            break;
        }
        case 3:
        {
            checkHeight();
            break;
        }
        case 4:
        {
            checkWeight();
            break;
        }
        case 5:
        {
            relation();
            break;
        }
    }

    return 0;
};