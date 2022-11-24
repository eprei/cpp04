#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# define NUMBER_OF_IDEAS 100

class Brain{

	public:

		Brain( void );
		Brain( Brain const & src );
		~Brain( void );

		Brain &	operator=( Brain const & rhs );

		std::string		getIdeas( int i ) const;
		void			setIdeas( int i, std::string str );

	protected:

		std::string	_ideas[NUMBER_OF_IDEAS];
};

#endif
