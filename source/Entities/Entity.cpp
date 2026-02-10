#include "Entity.h"
#include <string>
#include <sstream>

Entity::Entity(unsigned int hp)
:
    health{hp}
{
}

void Entity::setHealth(unsigned int hp) { health = hp; }

unsigned int Entity::getHealth() const { return health; }

std::string Entity::toString()
{
    std::ostringstream out;

    out << "Health: " << health;

    return out.str();
}

void Entity::gainHealth(unsigned int hp) { health += hp; }
void Entity::loseHealth(unsigned int dmg) { health -= dmg; }