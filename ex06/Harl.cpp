#include "Harl.hpp"

Harl::Harl()
{
	levels[0] = "debug";
	levels[1] = "info";
	levels[2] = "warning";
	levels[3] = "error";
	
	this->messages[0] = &Harl::debug;
	this->messages[1] = &Harl::info;
	this->messages[2] = &Harl::warning;
	this->messages[3] = &Harl::error;
}

void	Harl::debug ( void )
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	int	i;
	for (i = 0; i < 4; i++)
	{
		if (level == levels[i])
			break;
	}
	switch(i)
	{
		case 0: (this->*messages[i])(); i++;
		case 1: (this->*messages[i])(); i++;
		case 2: (this->*messages[i])(); i++;
		case 3: (this->*messages[i])(); break ;
		default: 
			std::cout << "[?]" << std::endl;
			std::cout << "I don't know what to say ..." << std::endl;
	}
}

