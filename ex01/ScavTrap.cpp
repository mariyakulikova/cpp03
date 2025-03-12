/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:18:53 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/12 15:33:55 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	setAttackDamage(20);
	setEnergypoint(50);
	setHitpoint(100);
	std::cout << "ScavTrap "
				<< getName()
				<< " default constructor called"
				<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	setAttackDamage(other.getAttackDamage());
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		std::string copyName = other.getName();
		setName(copyName);
		setHitpoint(other.getHitPoint());
		setAttackDamage(other.getAttackDamage());
		setEnergypoint(other.getEnergyPoint());
	}
	return *this;
}

ScavTrap::ScavTrap(const std::string &name)
	: ClapTrap(name)
{
	setAttackDamage(20);
	setEnergypoint(50);
	setHitpoint(100);
	std::cout << "ScavTrap "
				<< getName()
				<< " param constructor called"
				<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap "
				<< getName()
				<< " destructor called"
				<< std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (getHitPoint() == 0 || getEnergyPoint() == 0)
	{
		std::cout << "ScavTrap "
					<< getName()
					<< " has no energy or hit points"
					<< std::endl;
		return ;
	}
	unsigned int EP = getEnergyPoint() - 1;
	setEnergypoint(EP);
	std::cout << "ScavTrap " << getName()
				<< " attacks " << target
				<< ", causing " << getAttackDamage()
				<< " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap "
				<< getName()
				<< " is now in Gate keeper mode"
				<< std::endl;
}
