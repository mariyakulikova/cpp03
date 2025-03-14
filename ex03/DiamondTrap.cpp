/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 10:48:31 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/14 11:29:58 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap "
	<< _name
	<< " default constructor called"
	<< std::endl;
}

DiamondTrap::DiamondTrap(const std::string &str)
	: ClapTrap(str + "_clap_name")
	, _name(str)
{
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap "
	<< _name
	<< " parameterized constructor called"
	<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	_attackDamage = other._attackDamage;
	_energyPoint = other._energyPoint;
	_hitPoint = other._hitPoint;
	_name = other._name;
	std::cout << "DiamondTrap "
				<< _name
				<< " copy constructor called"
				<< std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		FragTrap::operator=(other);
		ScavTrap::operator=(other);
		_name = other._name;
	}
	std::cout << "DiamondTrap "
				<< _name
				<< " assignment operator called"
				<< std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap "
	<< _name
	<< " destructor called"
	<< std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am "
				<< _name
				<< " and my ClapTrap name is "
				<< ClapTrap::_name
				<< std::endl;
}
