#include "ASpell.hpp"

ASpell::~ASpell(){
}

ASpell::ASpell(const std::string &name, const std::string &effects){
	this->_name = name;
	this->_effects = effects;
}

const std::string &ASpell::getName() const{
	return(this->_name);
}
const std::string &ASpell::getEffects() const{
	return(this->_effects);
}
void ASpell::launchSpell(const ATarget &target) const{
	target.getHitBySpell(*this);
}
