//
// Created by fabio on 02/10/2026.
//

#ifndef EXERCICIOSPOO_PAGAMENTO_H
#define EXERCICIOSPOO_PAGAMENTO_H
#include <string>
#include <iostream>
#include <format>



class Pagamento
{
private:
    double valor = 0.0;
protected:
    std::string getValor() const { return std::format("{:.2f}", valor); }
public:
    void setValor(double novoValor) { valor = novoValor; }

    virtual ~Pagamento() = default;
    void virtual pagar() = 0;
    Pagamento() = default;
};


inline void finalizarCompra(Pagamento& objeto, double valorRecebido){
    objeto.setValor(valorRecebido);
    objeto.pagar();
};

class Boleto : public Pagamento {
private:
    void pagar() override;
public:
    Boleto() = default;
};

class Pix : public Pagamento{
private:
    void pagar() override;
public:
    Pix() = default;
};

class Credito : public Pagamento{
private:
    void pagar() override;
public:
    Credito() = default;
};


#endif //EXERCICIOSPOO_PAGAMENTO_H
