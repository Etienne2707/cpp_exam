#ifndef SpellBook_HPP
#define SpellBook_HPP

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"

class SpellBook
{
private:
    SpellBook(SpellBook const & rhs);
    SpellBook & operator=(SpellBook const & rhs);
    std::map<std::string , ASpell *> _SpellBook;
public:
    SpellBook();
    ~SpellBook();
    SpellBook* clone() const;
    void learnSpell(ASpell*);
    void forgetSpell(std::string const &);
    ASpell* createSpell(std::string const &);
};

#endif