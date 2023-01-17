/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:35:49 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/17 23:48:50 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main(int argc, char *argv[])
{
	Harl	Harl;

	if (argc != 2)
	{
		std::cout << "Error: please select one of this: " << std::endl;
		std::cout << "DEBUG or INFO or WARNING or ERROR" << std::endl;
	}
	else
		Harl.complain(argv[1]);
	return (0);
}