/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:04:57 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/14 11:08:50 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _hitPoint(10)
	, _energyPoint(10)
	, _attackDamage(0)
	, _name("noname")
{
	std::cout << "ClapTrap "
				<< _name
				<< " default constructor called"
				<< std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
	: _hitPoint(10)
	, _energyPoint(10)
	, _attackDamage(0)
	, _name(name)
{
	std::cout << "ClapTrap "
				<< _name
				<< " parameterized constructor called"
				<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
		: _hitPoint(other._hitPoint)
		, _energyPoint(other._energyPoint)
		, _attackDamage(other._attackDamage)
		, _name(other._name)
{
	std::cout << "ClapTrap "
				<< _name
				<< " copy constructor called"
				<< std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_hitPoint = other._hitPoint;
		_energyPoint = other._energyPoint;
		_attackDamage = other._attackDamage;
		_name = other._name;
	}
	std::cout << "ClapTrap "
				<< _name
				<< " assignment operator called"
				<< std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap "
				<< _name
				<< " destructor called"
				<< std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_energyPoint == 0 || _hitPoint == 0)
	{
		std::cout << "ClapTrap " << _name
					<< " has no energy or hit points"
					<< std::endl;
		return ;
	}
	_energyPoint -= 1;
	std::cout << "ClapTrap " << _name
	<< " attacks " << target
	<< ", causing " << _attackDamage
	<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoint == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return ;
	}
	_hitPoint = amount >= _hitPoint ? 0 : _hitPoint - amount;
	std::cout << "ClapTrap " << _name
				 << " takes " << amount
				 << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoint == 0 || _hitPoint == 0)
	{
		std::cout << "ClapTrap " << _name
					<< " has no energy or hit points"
					<< std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name
	<< " repairs itself, it gains  " << amount
	<< " hit points" << std::endl;
	_hitPoint += amount;
	_energyPoint -= 1;
}
