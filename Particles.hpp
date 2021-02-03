//
//  Particles.hpp
//  SDL Basic
//
//  Created by Lee Zheng Jun on 23/01/2021.
//  Copyright © 2021 Lee Zheng Shieng. All rights reserved.
//

#ifndef Particles_hpp
#define Particles_hpp

namespace wind{
struct Particle{
    
    double m_x;
    double m_y;
    
private:
    double m_speed;
    double m_direction;
    
private:
    void init();
    
public:
    Particle();
    void update(int interval);
};
    
}

#endif /* Particles_hpp */
