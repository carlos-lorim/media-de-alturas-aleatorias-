/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 *
 * Author: Carlos Augusto R. lorim    2024.1.08.004
 *
 * Created on 25 de março de 2024, 16:44
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //variaveis 
    float media, soma = 0;
    float altura = 1.5;
    float maior = 0, menor = 2.3; 
    int i = 0, cont = 0;
    
    // gerar numeros aleatorios 
    srand(time(NULL));

    //repeticao para criar alturas aleatorias 
    while(i < 1000) {
        altura = 1.5 +(rand() % 801) / 1000.0 ;
        printf("%.2f\n", altura );
        soma += altura;
        //pegar a maior e menor altura 
        if(altura > maior) {
            maior = altura;
        }
        if(altura < menor) {
            menor = altura;
        }
        if(altura > 2) {
            cont++;
        }
        i++;
    }
    // fazer a media 
    media = soma / 1000;
    
    //mostrar resultados 
    printf("A média das alturas é %.2f\n", media);
    printf("A maior altura é %.2f\n", maior);
    printf("A menor altura é %.2f\n", menor);
    printf("A porcentagem de pessoas com mais de 2 metros é %.2f%%\n", 
    (float)cont/10);

    return 0;
}
