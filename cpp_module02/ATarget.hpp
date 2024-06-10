#ifndef ATARGET_HPP
# define ATARGET_HPP
#include "ASpell.hpp"
#include <iostream>

class ASpell;

class ATarget
{
protected:
    std::string _type;

public:
    ATarget(std::string type);
    ATarget(ATarget const & rhs);
    ATarget & operator=(ATarget const & rhs);
    virtual ~ATarget();
    std::string const & getType( void ) const;
    virtual ATarget* clone() const = 0;
    void getHitBySpell(ASpell const & rhs) const ;
};

#endif
