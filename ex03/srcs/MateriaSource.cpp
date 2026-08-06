#include "../includes/MateriaSource.hpp"
#include "../includes/AMateria.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; ++i)
        _known[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
    for (int i = 0; i < 4; ++i)
        _known[i] = other._known[i] ? other._known[i]->clone() : NULL;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; ++i)
        {
            if (_known[i]) { delete _known[i]; _known[i] = NULL; }
            if (other._known[i]) _known[i] = other._known[i]->clone();
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i)
        if (_known[i]) { delete _known[i]; _known[i] = NULL; }
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m) return;
    for (int i = 0; i < 4; ++i)
    {
        if (!_known[i])
        {
            _known[i] = m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (_known[i] && _known[i]->getType() == type)
            return _known[i]->clone();
    }
    return NULL;
}

IMateriaSource* createMateriaSourceInstance()
{
    return new MateriaSource();
}
