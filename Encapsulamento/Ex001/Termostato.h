//
// Created by fabio on 30/09/2026.
//

#ifndef EXERCICIOSPOO_TERMOSTATO_H
#define EXERCICIOSPOO_TERMOSTATO_H


class Termostato
{
private:
    float temperatura = 24.0f;
public:
    float getTemperatura() const {return temperatura;}
    void setTemperatura(float temp);
};


#endif //EXERCICIOSPOO_TERMOSTATO_H
