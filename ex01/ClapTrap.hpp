/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:04:10 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/12 14:59:23 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	unsigned int _hitPoint;
	unsigned int _energyPoint;
	unsigned int _attackDamage;
	std::string _name;
	bool _isEnoughPoints(void);
public:
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	~ClapTrap();
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	const std::string& getName() const;
	unsigned int getHitPoint() const;
	unsigned int getEnergyPoint() const;
	unsigned int getAttackDamage() const;
	void setName(std::string& str);
	void setHitpoint(unsigned int point);
	void setEnergypoint(unsigned int point);
	void setAttackDamage(unsigned int amount);
};

#endif
