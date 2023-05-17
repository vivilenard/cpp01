/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:05:27 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/17 10:17:04 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ( void )
{    
    Zombie *heapZombie = newZombie("Ollie");
    
    randomChump("Helene");
    
    delete  heapZombie;
    return 0;
}