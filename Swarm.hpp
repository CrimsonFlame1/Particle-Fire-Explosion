//
//  Swarm.hpp
//  SDL Basic
//
//  Created by Lee Zheng Jun on 23/01/2021.
//  Copyright © 2021 Lee Zheng Shieng. All rights reserved.
//

#ifndef Swarm_hpp
#define Swarm_hpp

#include "Particles.hpp"
#include <stdio.h>

namespace wind{

class Swarm {
public:
    const static int NPARTICLES = 5000;
    
private:
    Particle *m_pParticles;
    int lastTime;
    
public:
    Swarm();
    ~Swarm();
    
    const Particle * const getParticles() { return m_pParticles;};
    
    void update(int elapsed);
    
};
    
}
#endif /* Swarm_hpp */
