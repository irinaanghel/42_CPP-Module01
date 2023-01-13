/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 05:20:44 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/11 05:23:24 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

ZOMBIE	*zombieHorde(int N, std::string name)
{
	ZOMBIE	*horde;
	horde = new ZOMBIE[N];
	while (N--)
		horde[N].naming(name);
	return (horde);
}