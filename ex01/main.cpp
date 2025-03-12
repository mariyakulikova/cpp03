/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:05:07 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/12 15:39:44 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap serena("Serena");
	std::cout << "ScavTrap " << serena.getName() << " has "
				<< serena.getAttackDamage() << " _attackDamage "
				<< serena.getEnergyPoint() << " _energyPoint "
				<< serena.getHitPoint() << " _hitPoint"
				<< std::endl;
	serena.attack("Chuck");
	serena.takeDamage(10);
	serena.beRepaired(10);
	serena.guardGate();
	return 0;
}
