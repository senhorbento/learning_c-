#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    double A, B, C, D, E, F;
    int op, i, a, w = 1;
    char z;
    printf("-----Bento.Calc-----\n");
    printf("\n");
    while (w == 1) {
        formulas:
        printf("Materias conhecidas:\n");
        printf("\n");
        printf("1 - Eletrica\n");
        printf("2 - Equacao do 2 grau\n");
        printf("3 - Estatistica\n");
        printf("4 - Mecanica\n");
        printf("5 - Conversoes termometricas\n");
        printf("6 - Conversoes de velocidade\n");
        printf("7 - ...\n");
        printf("\n");
        printf("0 - Sair\n");
        printf("\n");
        printf("Qual Materia? ");
        scanf("%d", &op);
        system("clear || cls");
        if (op == 0) {
            break;
        }
        else if (op == 1) {
            printf("Formulas conhecidas:\n");
            printf("\n");
            printf("1 - Voltagem\n");
            printf("2 - Resistencia\n");
            printf("3 - Corrente\n");
            printf("4 - Potencia\n");
            printf("\n");
            printf("0 - Voltar\n");
            printf("\n");
            printf("Qual operacao? ");
            scanf("%d", &op);
            system("clear || cls");
            if (op == 0) {
                goto formulas;
            }
            else if(op == 1) {
                printf("Calculo de Voltagem:\n");
                printf("\n");
                printf("Valor da Resistencia = ");
                scanf("%lf", &B);
                printf("Valor da Corrente = ");
                scanf("%lf", &C);
                printf("\n");
                A = B * C;
                printf("Voltagem = %.3lf\n", A);
            }
            else if (op == 2) {
                printf("Calculo de Resistencia:\n");
                printf("\n");
                printf("Valor da Voltagem = ");
                scanf("%lf", &A);
                printf("Valor da Corrente = ");
                scanf("%lf", &C);
                printf("\n");
                B = A / C;
                printf("Resistencia = %.3lf\n", B);
            }
            else if (op == 3) {
                printf("Calculo de Corrente:\n");
                printf("\n");
                printf("Valor da Voltagem = ");
                scanf("%lf", &A);
                printf("Valor da Resistencia = ");
                scanf("%lf", &B);
                printf("\n");
                C = A / B;
                printf("Corrente = %.3lf\n", C);
            }
            else if (op == 4) {
                printf("Calculo de Potencia:\n");
                printf("\n");
                printf("1 - Sabendo a Resistencia\n");
                printf("2 - Sabendo a Voltagem\n");
                printf("\n");
                printf("Qual o caso? ");
                scanf("%d", &op);
                printf("\n");
                if (op == 1) {
                    printf("Valor da Resistencia = ");
                    scanf("%lf", &A);
                    printf("Valor da Corrente = ");
                    scanf("%lf", &B);
                    printf("\n");
                    C = A * pow(B, 2);
                    printf("Potencia = %lf\n", C);
                }
                else if (op == 2) {
                    printf("Valor da Voltagem = ");
                    scanf("%lf", &A);
                    printf("Valor da Corrente = ");
                    scanf("%lf", &B);
                    printf("\n");
                    C = A * B;
                    printf("Potencia = %lf\n", C);
                }
            }
        }
        else if (op == 2) {
            printf("Calculo de Equacao do 2 grau:\n");
            printf("\n");
            printf("Valor de a = ");
            scanf("%lf", &A);
            printf("Valor de b = ");
            scanf("%lf", &B);
            printf("Valor de c = ");
            scanf("%lf", &C);
            printf("\n");
            D = pow(B, 2) - 4 * (A * C);
            if (0 == A || 0 >= D) {
                printf("Delta = %.5lf\n", D);
                printf("Impossivel calcular\n");
            }
            else {
                E = (B * -1 + sqrt(D)) / (2 * A);
                F = (B * -1 - sqrt(D)) / (2 * A);
                printf("X1 = %.5lf\n", E);
                printf("X2 = %.5lf\n", F);
                printf("Delta = %.5lf\n", D);
            }
        }
        else if (op == 3) {
            printf("Formulas conhecidas:\n");
            printf("\n");
            printf("1 - Media Aritmetica\n");
            printf("2 - Variancia\n");
            printf("3 - Desvio Padrao\n");
            printf("\n");
            printf("0 - Voltar\n");
            printf("\n");
            printf("Qual operacao? ");
            scanf("%d", &op);
            system("clear || cls");
            if (op == 0) {
                goto formulas;
            }
            else if(op == 1) {
                printf("Calculo de Media Aritmetica:\n");
                printf("\n");
                printf("Os termos se repetem?[S/N] ");
                z = _getche(); 
                if (z == 'N' || z == 'n') {
                    printf("\n");
                    printf("Total de termos = ");
                    scanf("%lf", &A);
                    printf("\n");
                    C = 0;
                    for (i = 1; i <= A; i++) {
                        printf("Termo %d = ", i);
                        scanf("%lf", &B);
                        printf("\n");
                        C = C + B;
                    }
                    D = C / A;
                    printf("Media Aritmetica = %.5lf\n", D);
                }
                else {
                    printf("\n");
                    printf("Total de termos = ");
                    scanf("%lf", &A);
                    printf("\n");
                    C = 0;
                    for (i = 1; i <= A; i++) {
                        printf("Termo %d = ", i);
                        scanf("%lf", &B);
                        printf("Quantas vezes se repete? ");
                        scanf("%d", &a);
                        printf("\n");
                        if (a >= 2) {
                            B = B * a;
                            i = i + a - 1;
                        }
                        C = C + B;
                    }
                    D = C / A;
                    printf("Media Aritmetica = %.5lf\n", D);
                }
                
            }
            else if (op == 2) {
                printf("Calculo de Variancia:\n");
                printf("\n");
                printf("Quantidade de desvios = ");
                scanf("%lf", &A);
                printf("\n");
                C = 0;
                for (i = 1; i <= A; i++) {
                    printf("Desvio %d = ", i);
                    scanf("%lf", &B);
                    printf("Quantas vezes se repete? ");
                    scanf("%d", &a);
                    printf("\n");
                    if (a >= 2) {
                        B = pow(B, 2) * a;
                        i = i + a - 1;
                        C = C + B;
                    }
                    else {
                        C = C + pow(B, 2);
                    }
                    
                }
                D = C / A;
                printf("Variancia = %.5lf\n", D);
            }
            else if (op == 3) {
                printf("Calculo de Desvio Padrao:\n");
                printf("\n");
                printf("Variancia = ");
                scanf("%lf", &A);
                printf("\n");
                A = sqrt(A);
                printf("Desvio padrao = %.5lf\n", A);
            }
        }
        else if (op == 4) {
            printf("Formulas conhecidas:\n");
            printf("\n");
            printf("1 - Velocidade Media\n");
            printf("2 - Variacao de Espaco\n");
            printf("3 - Variacao de Tempo\n");
            printf("\n");
            printf("0 - Voltar\n");
            printf("\n");
            printf("Qual operacao? ");
            scanf("%d", &op);
            system("clear || cls");
            if (op == 0) {
                goto formulas;
            }
            else if (op == 1) {
                printf("Calculo de Velocidade Media:\n");
                printf("\n");
                printf("Variacao de Espaco = ");
                scanf("%lf", &A);
                printf("Variacao de Tempo = ");
                scanf("%lf", &B);
                printf("\n");
                C = A / B;
                printf("Velocidade Media = %lf\n", C);
            }
            else if (op == 2) {
                printf("Calculo de Variacao de Espaco:\n");
                printf("\n");
                printf("Velocidade Media = ");
                scanf("%lf", &A);
                printf("Variacao de Tempo = ");
                scanf("%lf", &B);
                printf("\n");
                C = A * B;
                printf("Variacao de Espaco = %lf\n", C);
            }
            else if (op == 3) {
                printf("Calculo de Variacao de Tempo:\n");
                printf("\n");
                printf("Velocidade Media = ");
                scanf("%lf", &A);
                printf("Variacao de Espaco = ");
                scanf("%lf", &B);
                printf("\n");
                C = B / A;
                printf("Variacao de Tempo = %lf\n", C);
            }
        }
        else if (op == 5) {
            printf("Formulas conhecidas:\n");
            printf("\n");
            printf("1 - Celsius para Fahrenheit\n");
            printf("2 - Celsius para Kelvin\n");
            printf("3 - Fahrenheit para Kelvin\n");
            printf("4 - Fahrenheit para Celsius\n");
            printf("5 - Kelvin para Celsius\n");
            printf("6 - Kelvin para Fahrenheit\n");
            printf("\n");
            printf("0 - Voltar\n");
            printf("\n");
            printf("Qual operacao? ");
            scanf("%d", &op);
            system("clear || cls");
            if (op == 0) {
                goto formulas;
            }
            else if (op == 1) {
                printf("Celsius para Fahrenheit:\n");
                printf("\n");
                printf("Quantos graus Celsius? ");
                scanf("%lf", &A);
                printf("\n");
                B = (A * 9 / 5) + 32;
                printf("%.3lf graus Fahrenheit\n", B);
            }
            else if (op == 2) {
                printf("Celsius para Kelvin:\n");
                printf("\n");
                printf("Quantos graus Celsius? ");
                scanf("%lf", &A);
                printf("\n");
                B = A + 273.15;
                printf("%.3lf graus Kelvin\n", B);
            }
            else if (op == 3) {
                printf("Fahrenheit para Kelvin:\n");
                printf("\n");
                printf("Quantos graus Fahrenheit? ");
                scanf("%lf", &A);
                printf("\n");
                B = (A - 32) * 5 / 9 + 273.15;
                printf("%.3lf graus Kelvin\n", B);
            }
            else if (op == 4) {
                printf("Fahrenheit para Celsius:\n");
                printf("\n");
                printf("Quantos graus Fahrenheit? ");
                scanf("%lf", &A);
                printf("\n");
                B = (A - 32) * 5 / 9;
                printf("%.3lf graus Celsius\n", B);
            }
            else if (op == 5) {
                printf("Kelvin para Celsius:\n");
                printf("\n");
                printf("Quantos graus Kelvin? ");
                scanf("%lf", &A);
                printf("\n");
                B = A - 273.15;
                printf("%.3lf graus Celsius\n", B);
            }
            else if (op == 6) {
                printf("Kelvin para Fahrenheit:\n");
                printf("\n");
                printf("Quantos graus Kelvin? ");
                scanf("%lf", &A);
                printf("\n");
                B = (A - 273.15) * 9 / 5 + 32;
                printf("%.3lf graus Fahrenheit\n", B);
            }
        }
        else if (op == 6){
            printf("Formulas conhecidas:\n");
            printf("\n");
            printf("1 - Km/h para Mph\n");
            printf("2 - Km/h para M/s\n");
            printf("3 - Mph para Km/h\n");
            printf("4 - Mph para M/s\n");
            printf("5 - M/s para Km/h\n");
            printf("6 - M/s para Mph\n");
            printf("\n");
            printf("0 - Voltar\n");
            printf("\n");
            printf("Qual operacao? ");
            scanf("%d", &op);
            system("clear || cls");
            if (op == 0) {
                goto formulas;
            }
            else if (op == 1){
                printf("Km/h para Mph:\n");
                printf("\n");
                printf("Quantos Km/h? ");
                scanf("%lf", &A);
                printf("\n");
                B = A / 1.60934;
                printf("Aproximadamente %.5lf Mph\n", B);
            }
            else if (op == 2){
                printf("Km/h para M/s:\n");
                printf("\n");
                printf("Quantos Km/h? ");
                scanf("%lf", &A);
                printf("\n");
                B = A / 3.6;
                printf("Aproximadamente %.5lf M/s\n", B);
            }
            else if (op == 3){
                printf("Mph para Km/h:\n");
                printf("\n");
                printf("Quantos Mph? ");
                scanf("%lf", &A);
                printf("\n");
                B = A * 1.60934;
                printf("Aproximadamente %.5lf Km/h\n", B);
            }
            else if (op == 4){
                printf("Mph para M/S:\n");
                printf("\n");
                printf("Quantos Mph? ");
                scanf("%lf", &A);
                printf("\n");
                B = A * 0.44704;
                printf("Aproximadamente %.5lf M/s\n", B);
            }
            else if (op == 5){
                printf("M/s para Km/h:\n");
                printf("\n");
                printf("Quantos M/s? ");
                scanf("%lf", &A);
                printf("\n");
                B = A * 3.6;
                printf("Aproximadamente %.5lf Km/h\n", B);
            }
            else if (op == 6){
                printf("M/s para Mph:\n");
                printf("\n");
                printf("Quantos M/s? ");
                scanf("%lf", &A);
                printf("\n");
                B = A / 0.44704;
                printf("Aproximadamente %.5lf Mph\n", B);
            }

        }
        else if (op == 7) {
            printf(":::::: Men at Work ::::::");
        }
        printf("\n");
        printf("Continuar?[S/N] ");
        z = _getche();
        system("clear || cls");
        if (z == 'N' || z == 'n') {
            break;
        }   
    }
}