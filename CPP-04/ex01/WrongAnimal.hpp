#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include "Animal.hpp"

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(/* args */);
        virtual ~WrongAnimal();

		WrongAnimal(const WrongAnimal &obj);
		WrongAnimal &operator=(const WrongAnimal &obj);

        void makeSound() const;
        std::string getType() const;
    };

#endif