#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Harl
{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	public:
		Harl();
		//void	*messages[4]();
		//void	(*messages[4]());
		void	complain( std::string level );
};

# endif