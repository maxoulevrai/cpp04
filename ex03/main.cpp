#include "includes/IMateriaSource.hpp"
#include "includes/MateriaSource.hpp"
#include "includes/AMateria.hpp"
#include "includes/ICharacter.hpp"
#include "includes/Character.hpp"
#include "includes/Ice.hpp"
#include "includes/Cure.hpp"
#include <iostream>

int main()
{
    MateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());

    Character* me = new Character("me");
    Character* bob = new Character("bob");

    me->equip(NULL);
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("cure"));
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("cure"));

    me->use(-1, *bob);
    me->use(4, *bob);
    me->use(0, *bob);
    me->use(1, *bob);

    me->unequip(1);
    me->use(1, *bob);

    Character* copy = new Character(*me);
    copy->use(0, *bob);

    delete copy;
    delete bob;
    delete me;
    delete src;

    return 0;
}
