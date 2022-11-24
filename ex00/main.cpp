#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << "The type of j is : " << j->getType() << std::endl;
	std::cout << "The type of i is : " << i->getType() << std::endl;
	std::cout << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "makeSound() of the base class 'Animal' called through the derived class 'Dog'" << std::endl;
	j->Animal::makeSound();
	std::cout << std::endl;

	delete i;
	delete j;
	delete meta;

//	wrong animal example

	// const WrongAnimal* meta = new WrongAnimal();
	// const WrongAnimal* i = new WrongCat();

	// std::cout << std::endl;
	// std::cout << "The type of i is : " << i->getType() << " " << std::endl;

	// std::cout << std::endl;
	// i->makeSound();
	// i->WrongAnimal::makeSound();
	// meta->makeSound();
	// std::cout << std::endl;

	// delete i;
	// delete meta;

	return 0;
}
