#include "Warlock.hpp"


Warlock::Warlock() {
    //std::cout << "Default constructor !" << std::endl;
}

Warlock::Warlock(const std::string& name, const std::string& title) : _name(name), _title(title)
{
    std::cout << this->_name <<  ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock const & rhs ){
    *this = rhs;
}

Warlock::~Warlock() {
    std::cout << this->_name << ": My job here is done!" << std::endl;
}

Warlock & Warlock::operator=(Warlock const & rhs) {
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_title =  rhs._title;
    }
    return *this;
}

std::string const & Warlock::getName( void ) const {
    return this->_name;
}

std::string const & Warlock::getTitle( void ) const {
    return this->_title;
} 

void    Warlock::setTitle(std::string const & str) {
    this->_title = str;
}

void Warlock::learnSpell(ASpell * spell) {

    if (spell) {
        if(_spells.find(spell->getName()) == _spells.end()) {
            _spells[spell->getName()] = spell->clone();
        }
    }

}

void Warlock::forgetSpell(std::string spell) {

	if (_spells.find(spell) != _spells.end())
		_spells.erase(_spells.find(spell));
}


void Warlock::launchSpell(std::string SpellName, ATarget const & target)
{
	if (_spells.find(SpellName) != _spells.end()) {
        //std::cout << "Error" << std::endl;
		_spells[SpellName]->launch(target);
        return ;
    }
}


void Warlock::introduce() const {
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}



