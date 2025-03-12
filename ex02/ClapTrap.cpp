/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:04:57 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/12 16:36:16 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

bool ClapTrap::_isEnoughPoints(void)
{
	if (_energyPoint == 0 || _hitPoint == 0)
	{
		std::cout << "ClapTrap "
					<< _name
					<< " has no energy or hit points"
					<< std::endl;
		return false;
	}
	return true;
}

ClapTrap::ClapTrap()
	: _hitPoint(10)
	, _energyPoint(10)
	, _attackDamage(0)
	, _name("noname")
{
	std::cout << "ClapTrap " << _name << " default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
	: _hitPoint(10)
	, _energyPoint(10)
	, _attackDamage(0)
	, _name(name)
{
	std::cout << "ClapTrap " << name << " default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
		: _hitPoint(other._hitPoint)
		, _energyPoint(other._energyPoint)
		, _attackDamage(other._attackDamage)
		, _name(other._name)
{
	std::cout << "ClapTrap " << _name << " copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->_hitPoint = other._hitPoint;
		this->_energyPoint = other._energyPoint;
		this->_attackDamage = other._attackDamage;
		this->_name = other._name;
	}
	std::cout << "ClapTrap " << _name << " assignment operator called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (!_isEnoughPoints())
		return ;
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
		std::cout << "ClapTrap " << _name << " has no hit point!" << std::endl;
	}
	_hitPoint = amount >= _hitPoint ? 0 : _hitPoint - amount;
	std::cout << "ClapTrap " << _name
				 << " takes " << amount
				 << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!_isEnoughPoints())
		return ;
	std::cout << "ClapTrap " << _name
	<< " repairs itself, it gains  " << amount
	<< " hit points" << std::endl;
	_hitPoint += amount;
	_energyPoint -= 1;
}

unsigned int ClapTrap::getEnergyPoint() const
{
	return _energyPoint;
}

unsigned int ClapTrap::getHitPoint() const
{
	return _hitPoint;
}

unsigned int ClapTrap::getAttackDamage() const
{
	return _attackDamage;
}

const std::string& ClapTrap::getName() const
{
	return _name;
}

void ClapTrap::setName(std::string& str)
{
	_name = str;
}

void ClapTrap::setHitpoint(unsigned int point)
{
	_hitPoint = point;
}

void ClapTrap::setEnergypoint(unsigned int point)
{
	_energyPoint = point;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	_attackDamage = amount;
}
