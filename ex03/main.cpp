/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulikov <mkulikov@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:51:19 by mkulikov          #+#    #+#             */
/*   Updated: 2025/03/14 11:20:28 by mkulikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond("Diamond");
	diamond.attack("enemy");
	diamond.takeDamage(30);
	diamond.beRepaired(20);
	diamond.whoAmI();
	return 0;
}
