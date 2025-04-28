/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellanglo <ellanglo@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:08:48 by ellanglo          #+#    #+#             */
/*   Updated: 2025/04/28 22:25:01 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string &name);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &other);

		void guardGate();
		void attack(const std::string &target);
};
