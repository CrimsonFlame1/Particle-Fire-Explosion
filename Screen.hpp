//
//  Screen.hpp
//  SDL Basic
//
//  Created by Lee Zheng Jun on 30/12/2020.
//  Copyright © 2020 Lee Zheng Shieng. All rights reserved.
//

#ifndef Screen_hpp
#define Screen_hpp

#include <SDL.h>

namespace wind{
    
class Screen{
public:
    const static int SCREEN_WIDTH = 800;
    const static int SCREEN_HEIGHT = 600;
private:
    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    SDL_Texture *m_texture;
    Uint32 *m_buffer1;
    Uint32 *m_buffer2;
    
public:
    Screen();
    bool init();
    void update();
    void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
    bool processEvents();
    void close();
    void boxBlur();
};
    
}

#endif /* Screen_hpp */
