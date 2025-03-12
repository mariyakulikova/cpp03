/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:51:19 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/12 16:53:44 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap trap("Trap");
	FragTrap clone(trap);
	std::cout << "FragTrap " << trap.getName() << " has "
				<< trap.getAttackDamage() << " _attackDamage "
				<< trap.getEnergyPoint() << " _energyPoint "
				<< trap.getHitPoint() << " _hitPoint"
				<< std::endl;
	trap.attack("Chuck");
	trap.takeDamage(10);
	trap.beRepaired(10);
	trap.highFivesGuys();
	return 0;
}
