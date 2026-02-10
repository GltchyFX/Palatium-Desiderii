#include "Player.h"
#include <string>
#include <sstream>

Player::Player()
:
    Entity()
{
}

std::string Player::toString()
{
    std::ostringstream out;

    out << Entity::toString();

    return out.str();
}