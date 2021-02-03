//
//  Swarm.cpp
//  SDL Basic
//
//  Created by Lee Zheng Jun on 23/01/2021.
//  Copyright © 2021 Lee Zheng Shieng. All rights reserved.
//

#include "Swarm.hpp"

namespace wind{
    
Swarm::Swarm(): lastTime(0)  {
    m_pParticles = new Particle[NPARTICLES];
    
}
    
Swarm::~Swarm() {
    delete [] m_pParticles;
}
    
void Swarm::update(int elapsed) {
    
    int interval = lastTime - elapsed;
    
    for (int i = 0; i < Swarm::NPARTICLES; i++) {
        m_pParticles[i].update(interval);
    }
    
    lastTime = elapsed; 
}

}
