#include "../includes/Ice.hpp"
#include "../includes/ICharacter.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::Ice(Ice const &other): AMateria(other) { *this = other; }

Ice &Ice::operator=(Ice const &other)
{
    if (this != &other)
        this->_type = other._type;
    return *this;
}

Ice::~Ice() {}

AMateria* Ice::clone() const { return new Ice(*this); }

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
