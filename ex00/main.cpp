#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << "The type of j is : " << j->getType() << " " << std::endl;
	// std::cout << "The type of i is : " << i->getType() << " " << std::endl;
	// i->makeSound();
	// j->makeSound();
	// meta->makeSound();

	// delete j;
	// delete i;
	// delete meta;

//	wrong animal

	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	std::cout << "The type of i is : " << i->getType() << " " << std::endl;
	i->makeSound();
	meta->makeSound();

	delete i;
	delete meta;

	return 0;
}
