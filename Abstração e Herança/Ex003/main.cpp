//
// Created by fabio on 28/09/2026.
//

#include "Transporte.h"
#include <iostream>

int main()
{
    Moto moto(20);
    Caminhao caminhao(60 );
    Drone drone(9);
    std::cout << "Frete da moto: " << (moto.getFrete()) << " em " << moto.getDistancia() << "Km" << std::endl;
    std::cout << "Frete do caminhão: " << caminhao.getFrete() << " em " << caminhao.getDistancia() << "Km" << std::endl;
    std::cout << "Frete do drone: " << drone.getFrete() << " em " << drone.getDistancia() << "Km" << std::endl;
    return 0;
}