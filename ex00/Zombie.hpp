/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:06:11 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/17 10:17:07 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string _name;
        
    public:
       // std::string     getName(void) { return _name;};
        void            announce (void);
        Zombie(std::string _name);
        ~Zombie();
        
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

# endif