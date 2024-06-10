#ifndef ASPELL_HPP
# define ASPELL_HPP

#include "ATarget.hpp"
#include <iostream>

class ATarget;

class ASpell
{
protected:
    std::string _name;
    std::string _effects;

public:
    ASpell(std::string name, std::string effects);
    ASpell(ASpell const & rhs);
    ASpell & operator=(ASpell const & rhs);
    virtual ~ASpell();
    std::string const & getName( void ) const;
    std::string const & getEffects( void ) const;
    virtual ASpell* clone() const = 0;
    void    launch(ATarget const & rhs)const; // Call getHitBySpell
};

#endif
