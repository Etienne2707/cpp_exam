#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {

}


ASpell::ASpell(ASpell const  &rhs) {

    *this = rhs;
}

 ASpell::~ASpell() {

}

ASpell & ASpell::operator=(ASpell const & rhs ) {
    if (this != &rhs) {
        this->_name = rhs.getName();
        this->_effects = rhs.getEffects();
    }
    return *this;
}

std::string const &  ASpell::getName( void ) const {
    return this->_name;
}

std::string const &  ASpell::getEffects( void ) const {
    return this->_effects;
}

void    ASpell::launch(ATarget const & rhs) const {
    rhs.getHitBySpell(*this);
}