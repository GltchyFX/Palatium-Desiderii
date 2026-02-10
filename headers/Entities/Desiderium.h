#ifndef DESIDERIUM_H
#define DESIDERIUM_H

#include "Entity.h"
#include <string>

class Desiderium : public Entity
{
    public:
        Desiderium();
        virtual ~Desiderium() = default;

        std::string toString();
    private:
        
}; 

#endif