#ifndef Fireball_HPP
# define Fireball_HPP

#include "ASpell.hpp"
#include <string>

class Fireball : public ASpell
{
private:
    /* data */
public:
    Fireball(/* args */);
    ~Fireball();
    Fireball* clone() const;
};

#endif
