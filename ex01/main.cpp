/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:05:27 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/17 11:01:44 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (int argc, char **argv)
{   
    if (argc != 3)
        return 0;
        
    Zombie* zombie = zombieHorde(std::atoi(argv[1]), argv[2]); 
    if (zombie)
        delete [] zombie;
    return 0;
}