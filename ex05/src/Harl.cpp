/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:02:41 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/17 23:18:43 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

void HARL::complain(std::string level)
{
	int i;

	void (HARL::*funcs[]) (void) =
	{
		&HARL::debug,
		&HARL::info,
		&HARL::warning,
		&HARL::error
	};

	std::string levels[] = {"debug", "info", "warning", "error"};

	i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;
	if (i < 4)
		(this->*funcs[i])();
}

void HARL::debug(void)
{
	std::cout << "Debug" << std::endl;
}

void HARL::info(void)
{
	std::cout << "Info" << std::endl;
}

void HARL::warning(void)
{
	std::cout << "Warning" << std::endl;
}

void HARL::error(void)
{
	std::cout << "Error" << std::endl;
}

HARL::HARL()
{}

HARL::~HARL()
{
}

