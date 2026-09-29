//
// Created by fabio on 28/09/2026.
//

#include "ControleRemoto.h"
#include <iostream>
#include <string>


ControleRemoto::ControleRemoto()
{
}

void ControleRemoto::menu()
{
    std::cout << "=== Controle Remoto ===" << std::endl;

    while (true)
    {
        std::string msg;

        if (!ligado)
        {
            std::cout << "A TV está desligada" << std::endl;
            std::cout << "< CH1 > - VOL2 + ";
        } else
        {
            std::cout << "TV" << std::endl;
            std::cout << "Canal = " << canal << std::endl;
            std::cout << "Volume = " << volume << std::endl;
            std::cout << "< CH1 > - VOL2 + ";
        }

        std::cin >> msg;

        if (msg == "@")
        {
            ligado = !ligado;
        } else if (msg == "<")
        {

            if (canal <= 1)
            {
                canal = 5;
            } else {
                canal -= 1;
            }
        } else if (msg == ">")
        {
            if (canal >= 5)
            {
                canal = 1;
            } else {
                canal += 1;
            }
        } else if (msg == "-")
        {
            if (volume <= 1)
            {
                volume = 1;
            } else {
                volume -= 1;
            }
        } else if (msg == "+")
        {
            if (volume >= 5)
            {
                volume = 5;
            } else {
                volume += 1;
            }
        } else if (msg == "sair")
        {
            break;
        } else
        {
            std::cout << "Comando inválido!" << std::endl;
        }
    }
}
