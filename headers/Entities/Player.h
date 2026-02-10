#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"
#include <string>

class Player : public Entity
{
    public:
        Player();
        virtual ~Player() = default;

        std::string toString();
    private:

};

#endif