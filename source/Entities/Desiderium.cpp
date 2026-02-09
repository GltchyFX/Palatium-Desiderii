#include "Desiderium.h"
#include <string>
#include <sstream>

Desiderium::Desiderium()
:
    Entity()
{
}

std::string Desiderium::toString()
{
    std::ostringstream out;

    out << Entity::toString();

    return out.str();
}