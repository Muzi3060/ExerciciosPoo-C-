//
// Created by fabio on 28/09/2026.
//

#ifndef EXERCICIOSPOO_BEBIDAQUENTE_H
#define EXERCICIOSPOO_BEBIDAQUENTE_H

class BebidaQuente
{
public:
    virtual ~BebidaQuente() = default;
    void preparar();
    void ferverAgua();
    virtual void misturar() = 0;
    virtual void servir() = 0;
    void finalizarPreparo();
};

class Cafe : public BebidaQuente
{
public:
    void misturar() override;
    void servir() override;
};

class Cha : public BebidaQuente
{
public:
    void misturar() override;
    void servir() override;
};

class Leite : public BebidaQuente
{
public:
    void misturar() override;
    void servir() override;
};

#endif //EXERCICIOSPOO_BEBIDAQUENTE_H
