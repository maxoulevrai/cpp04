#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    protected:
        std::string _type;
    public:
        Ice();
        Ice(std::string const & type);
        Ice    &operator=(Ice const &other);
        Ice(Ice const &other);
        ~Ice();

        std::string const & getType() const; //Returns the materia type     
        virtual Ice* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif