/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:05:07 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/12 10:16:18 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap chuck("Chuck");
	ClapTrap tom("Tom");
	ClapTrap clone(tom);
	ClapTrap clone2("clone 2");
	clone2 = chuck;

	tom.attack("Chuck");
	tom.takeDamage(5);
	tom.beRepaired(3);
	tom.takeDamage(10);
	tom.attack("Chuck");
	tom.beRepaired(10);
	return 0;
}
