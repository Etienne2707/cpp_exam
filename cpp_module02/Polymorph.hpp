#ifndef Polymorph_HPP
# define Polymorph_HPP

#include "ASpell.hpp"
#include <string>

class Polymorph : public ASpell
{
private:
    /* data */
public:
    Polymorph(/* args */);
    ~Polymorph();
    Polymorph* clone() const;
};

#endif
