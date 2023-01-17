/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:01:59 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/17 23:06:55 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class HARL
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	
	public:
		HARL();
		~HARL();
		void complain(std::string level);
};

#endif