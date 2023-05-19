#include "Harl.hpp"

Harl::Harl(void)
{
	//void	(*messages[4](void)) = {debug, info, warning, error};
	// this->messages[0] = &Harl::debug;
	// this->messages[1] = &Harl::info;
	// this->messages[2] = &Harl::warning;
	// this->messages[3] = &Harl::error;
}

void	Harl::debug ( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	//int	i = std::atoi(level) - 1;
	//std::string function_names[] = {"debug", "info", "warning", "error"};
	//void	(Harl::*functions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	switch (i)
	{
		case 1: (*messages[0])();
		// case 2:
		// case 3:
		default:(*messages[3])();
	}
}
