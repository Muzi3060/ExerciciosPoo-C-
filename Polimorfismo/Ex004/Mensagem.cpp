//
// Created by fabio on 03/10/2026.
//

#include "Mensagem.h"


Mensagem::Mensagem(std::string mensagem) : mensagem(mensagem), tipo("MENSAGEM"), icone("💬")
{
}

void Mensagem::mostrar()
{
    std::cout << icone << " [" << tipo << "] " << mensagem << std::endl;
}

Erro::Erro(std::string mensagem) : Mensagem("\x1b[41m" + mensagem + "\x1b[0m")
{
    tipo = "ERRO";
    icone = "🛑";
}

Aviso::Aviso (std::string mensagem) : Mensagem("\x1b[43m" + mensagem + "\x1b[0m")
{

    tipo = "AVISO";
    icone = "⚠️";
}