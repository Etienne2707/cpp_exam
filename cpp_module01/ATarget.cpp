#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type) {

}


ATarget::ATarget(ATarget const  &rhs) {

    *this = rhs;
}

 ATarget::~ATarget() {

}

ATarget & ATarget::operator=(ATarget const & rhs ) {
    if (this != &rhs) {
        this->_type = rhs.getType();
    }
    return *this;
}

std::string const &  ATarget::getType( void ) const {
    return this->_type;
}

void	ATarget::getHitBySpell(ASpell const & rhs) const
{
	std::cout << _type << " has been " << rhs.getEffects() << "!" << std::endl;
}
