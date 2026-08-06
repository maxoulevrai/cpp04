#include "../includes/Character.hpp"

Character::Character(): _name("default")
{
    for (int i = 0; i < 4; ++i)
        _inventory[i] = NULL;
}

Character::Character(std::string const & name): _name(name)
{
    for (int i = 0; i < 4; ++i)
        _inventory[i] = NULL;
}

Character::Character(Character const &other)
{
    *this = other;
}

Character &Character::operator=(Character const &other)
{
    if (this != &other)
    {
        _name = other._name;
        for (int i = 0; i < 4; ++i)
        {
            if (_inventory[i]) { delete _inventory[i]; _inventory[i] = NULL; }
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; ++i)
        if (_inventory[i]) { delete _inventory[i]; _inventory[i] = NULL; }
}

std::string const & Character::getName() const { return _name; }

void Character::equip(AMateria* m)
{
    if (!m) return;
    for (int i = 0; i < 4; ++i)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4) return;
    _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4) return;
    if (_inventory[idx])
        _inventory[idx]->use(target);
}
