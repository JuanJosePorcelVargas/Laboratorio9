#pragma once
#include "Player.h"
#include "../GameTextures.h"
class PersonalizadoPlayer :
    public Player
{
public:
    PersonalizadoPlayer(std::shared_ptr<SDL_Texture> _texture, SDL_Renderer* _renderer);

};

