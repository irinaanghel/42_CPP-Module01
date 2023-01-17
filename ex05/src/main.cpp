/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:02:57 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/17 23:17:49 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main()
{
	HARL Harl;

	Harl.complain("debug");
	Harl.complain("info");
	Harl.complain("warning");
	Harl.complain("error");
	return (0);
}