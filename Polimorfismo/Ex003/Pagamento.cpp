//
// Created by fabio on 02/10/2026.
//

#include "Pagamento.h"


void Boleto::pagar(){
    std::cout << "Pagamento CONFIRMADO de R$ " << getValor() << " via BOLETO" << std::endl;
}

void Pix::pagar(){
    std::cout << "Pagamento CONFIRMADO de R$ " << getValor() << " via PIX" << std::endl;
}

void Credito::pagar(){
    std::cout << "Pagamento CONFIRMADO de R$ " << getValor() << " via CARTÃO DE CRÉDITO" << std::endl;
}
