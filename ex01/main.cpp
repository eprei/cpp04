#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <unistd.h>

int main()
{
	Dog		basic;

	for (int i = 0; i < 5 ; i++)
	{
		basic.getBrain()->setIdeas(i, "Basic idea");
		std::cout << "Idea " << i << " of Dog basic : " << basic.getBrain()->getIdeas(i) << "\t address of the idea : " << &basic.getBrain()->getIdeas(i) << std::endl;
	}

	std::cout << std::endl;
	{
		Dog tmp = basic;
		for (int i = 0; i < 5 ; i++)
		{
			tmp.getBrain()->setIdeas(i, "Tmp idea");
			std::cout << "Idea " << i << " of Tmp basic : " << tmp.getBrain()->getIdeas(i) << std::endl;
		}
	}

	std::cout << std::endl;

	return 0;
}
