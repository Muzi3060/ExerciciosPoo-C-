//
// Created by fabio on 28/09/2026.
//

#ifndef EXERCICIOSPOO_CONTROLEREMOTO_H
#define EXERCICIOSPOO_CONTROLEREMOTO_H


class ControleRemoto
{
private:
    int canal = 1;
    int volume = 2;
    bool ligado = false;
public:
    ControleRemoto();
    void menu();
};


#endif //EXERCICIOSPOO_CONTROLEREMOTO_H
