/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:05:07 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/14 09:56:33 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap serena("Serena");
	serena.attack("Chuck");
	serena.takeDamage(10);
	serena.beRepaired(10);
	serena.guardGate();
	return 0;
}
