#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    protected:
        std::string _type;
    public:
        Cure();
        Cure(std::string const & type);
        Cure    &operator=(Cure const &other);
        Cure(Cure const &other);
        ~Cure();

        std::string const & getType() const;
        virtual Cure* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif