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
