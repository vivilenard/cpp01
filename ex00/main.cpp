/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:05:27 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/17 10:14:26 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void randomChump( std::string name );
Zombie* new_Zombie( std::string name );

int main ( void )
{    
    Zombie *heapZombie = new_Zombie("Ollie");
    randomChump("Helene");
    delete  heapZombie;
    return 0;
}