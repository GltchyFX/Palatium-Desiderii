#ifndef ENTITY_H
#define ENTITY_H

#include <string>

class Entity
{
    public:
        Entity(unsigned int hp = 9999);
        virtual ~Entity() = default;

        //mutators
        void setHealth(unsigned int);

        //accessors
        unsigned int getHealth() const;

        std::string toString();
    protected:
        unsigned int health;

        void gainHealth(unsigned int);
        void loseHealth(unsigned int);
};

#endif