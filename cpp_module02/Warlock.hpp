#ifndef WARLOCK_HPP
# define WARLOCK_HPP


#include <string>
#include <iostream>
#include <unistd.h>
#include "ASpell.hpp"
#include <map>

const std::string red = "\033[0;31m";
const std::string green = "\033[1;32m";
const std::string yellow = "\033[1;33m";
const std::string cyan = "\033[0;36m";
const std::string magenta = "\033[0;35m";
const std::string reset = "\033[0m";


class Warlock
{
private:
    Warlock();
    Warlock & operator=(Warlock const & rhs);
    Warlock(Warlock const &rhs);
    std::string  _name;
    std::string _title;
    std::map<std::string, ASpell* > _spells;
public:
    Warlock(const std::string& name, const std::string& title);
    ~Warlock();

    // Getter
    std::string const & getName( void ) const;
    std::string const & getTitle( void ) const ;

    // Setter
    void setTitle(std::string const & str);
    void introduce() const;

    // Funcrtion
    void learnSpell(ASpell * rhs);
    void forgetSpell(std::string spell);
    void launchSpell(std::string spell,ATarget const & target);

};


#endif
    