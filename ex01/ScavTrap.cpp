/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:18:53 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/14 11:08:25 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_attackDamage = 20;
	_energyPoint = 50;
	_hitPoint = 100;
	std::cout << "ScavTrap "
				<< _name
				<< " default constructor called"
				<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	_attackDamage = other._attackDamage;
	_energyPoint = other._energyPoint;
	_hitPoint = other._hitPoint;
	_name = other._name;
	std::cout << "ScavTrap "
				<< _name
				<< " copy constructor called"
				<< std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		_attackDamage = other._attackDamage;
		_energyPoint = other._energyPoint;
		_hitPoint = other._hitPoint;
		_name = other._name;
	}
	std::cout << "ScavTrap "
				<< _name
				<< " copy assignment constructor called"
				<< std::endl;
	return *this;
}

ScavTrap::ScavTrap(const std::string &name)
	: ClapTrap(name)
{
	_attackDamage = 20;
	_energyPoint = 50;
	_hitPoint = 100;
	std::cout << "ScavTrap "
				<< _name
				<< " parameterized constructor called"
				<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap "
				<< _name
				<< " destructor called"
				<< std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_hitPoint == 0 || _energyPoint == 0)
	{
		std::cout << "ScavTrap "
					<< _name
					<< " has no energy or hit points"
					<< std::endl;
		return ;
	}
	_energyPoint -= 1;
	std::cout << "ScavTrap " << _name
				<< " attacks " << target
				<< ", causing " << _attackDamage
				<< " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap "
				<< _name
				<< " is now in Gate keeper mode"
				<< std::endl;
}
