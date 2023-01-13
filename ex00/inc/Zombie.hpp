/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 04:34:01 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/11 05:08:18 by aanghel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class ZOMBIE
{
	private:
		std::string name;
		
	public:
		void 	announce(void);
		ZOMBIE(std::string name);
		~ZOMBIE(void);
		
};

#endif