#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *materia[4];
        int count;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &src);
        MateriaSource &operator=(const MateriaSource &src);
        virtual ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif