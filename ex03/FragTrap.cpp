/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:45:04 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/12 17:31:40 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	setAttackDamage(30);
	setEnergypoint(100);
	setHitpoint(100);
	std::cout << "FragTrap "
				<< getName()
				<< " default constructor called"
				<< std::endl;
}

FragTrap::FragTrap(const std::string &str) : ClapTrap(str)
{
	setAttackDamage(30);
	setEnergypoint(100);
	setHitpoint(100);
	std::cout << "FragTrap "
				<< getName()
				<< " default constructor called"
				<< std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	setAttackDamage(other.getAttackDamage());
	setEnergypoint(other.getEnergyPoint());
	setHitpoint(other.getHitPoint());
	std::string copyName = other.getName();
	setName(copyName);
	std::cout << "FragTrap "
				<< getName()
				<< " copy constructor called"
				<< std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		std::string copyName = other.getName();
		setName(copyName);
		setHitpoint(other.getHitPoint());
		setAttackDamage(other.getAttackDamage());
		setEnergypoint(other.getEnergyPoint());
	}
	std::cout << "FragTrap "
				<< getName()
				<< " copy assignment constructor called"
				<< std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap "
				<< getName()
				<< " destructor called"
				<< std::endl;
}

void FragTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap "
				<< getName()
				<< " is now in Gate keeper mode"
				<< std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap "
				<< getName()
				<< " posotive high-five request"
				<< std::endl;
}
