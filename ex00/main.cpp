/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:05:07 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/10 17:43:22 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap chuck("Chuck");
	ClapTrap tom("Tom");
	ClapTrap clone(tom);
	ClapTrap clone2("clone 2");

	chuck.attack("Tom");
	tom.takeDamage(10);
	
	clone2 = chuck;
	return 0;
}
