#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include "ASpell.hpp"
#include <string>

class Fwoosh : public ASpell
{
private:
    /* data */
public:
    Fwoosh(/* args */);
    ~Fwoosh();
    Fwoosh* clone() const;
};

#endif
