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

void Warlock::introduce() const {
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}



