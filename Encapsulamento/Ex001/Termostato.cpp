//
// Created by fabio on 30/09/2026.
//

#include "Termostato.h"
#include <math.h>
#include <stdio.h>

void Termostato::setTemperatura(float temp)
{
    if (temp <= 16.0f) {
        temperatura = 16.0f;
    } else if (temp >= 30.0f) {
        temperatura = 30.0f;
    } else {
        // Usa 'temp' e arredonda/trata o resto
        double resto = fmod(temp * 2.0, 1.0);

        // Verifica se o resto não é próximo de 0.0 nem de 1.0 (devido à imprecisão do float)
        if (resto > 0.001 && resto < 0.999){
            printf("Temperatura atual é inválida. A temperatura deve ser um número inteiro ou meio inteiro.");
        } else{
            temperatura = temp;
        }
    }
}