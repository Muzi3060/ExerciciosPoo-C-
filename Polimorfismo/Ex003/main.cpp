//
// Created by fabio on 02/10/2026.
//

#include "Pagamento.h"

int main()
{
    Boleto boleto;
    Pix pix;
    Credito credito;

    finalizarCompra(boleto, 8500);
    finalizarCompra(pix, 8500);
    finalizarCompra(credito, 8500);
}
