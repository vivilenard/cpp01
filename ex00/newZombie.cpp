/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:11:26 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/17 10:11:13 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* new_Zombie( std::string name )
{
    Zombie* Zombie2 = new Zombie(name);

    Zombie2->announce();
    return (Zombie2);
}

