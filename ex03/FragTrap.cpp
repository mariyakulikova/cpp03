/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:45:04 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/17 17:01:15 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_attackDamage = 30;
	_energyPoint = 100;
	_hitPoint = 100;
	std::cout << "FragTrap "
				<< _name
				<< " default constructor called"
				<< std::endl;
}

FragTrap::FragTrap(const std::string &str) : ClapTrap(str)
{
	_attackDamage = 30;
	_energyPoint = 100;
	_hitPoint = 100;
	std::cout << "FragTrap "
				<<_name
				<< " parameterized constructor called"
				<< std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	_attackDamage = other._attackDamage;
	_energyPoint = other._energyPoint;
	_hitPoint = other._hitPoint;
	_name = other._name;
	std::cout << "FragTrap "
				<< _name
				<< " copy constructor called"
				<< std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		_attackDamage = other._attackDamage;
		_energyPoint = other._energyPoint;
		_hitPoint = other._hitPoint;
		_name = other._name;
	}
	std::cout << "FragTrap "
				<< _name
				<< " copy assignment constructor called"
				<< std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap "
				<< _name
				<< " destructor called"
				<< std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap "
				<< _name
				<< " posotive high-five request"
				<< std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (_hitPoint == 0 || _energyPoint == 0)
	{
		std::cout << "FragTrap "
					<< _name
					<< " has no energy or hit points"
					<< std::endl;
		return ;
	}
	_energyPoint -= 1;
	std::cout << "FragTrap " << _name
				<< " attacks " << target
				<< ", causing " << _attackDamage
				<< " points of damage!" << std::endl;
}

int FragTrap::getHitPoints() const
{
	return _hitPoint;
}

int FragTrap::getEnergyPoints() const
{
	return _energyPoint;
}

int FragTrap::getAttackDamage() const
{
	return _attackDamage;
}
