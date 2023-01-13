/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanghel <aanghel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 05:14:16 by aanghel           #+#    #+#             */
/*   Updated: 2023/01/11 05:16:28 by aanghel          ###   ########.fr       */
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
		~ZOMBIE(void);
		void announce(void);
		void naming(std::string name);
};

#endif