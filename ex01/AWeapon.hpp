/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 14:46:50 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/16 18:45:31 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP
#include <iostream>

class AWeapon{

public:

	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();
	AWeapon( AWeapon const & src); 

	AWeapon & operator = (AWeapon const & src);

	std::string		getName() const;
	int				getAPCost() const;
	int 			getDamage() const;
	virtual void	attack() const = 0;
	void			equip( AWeapon * weapon );

protected:

	AWeapon();
	std::string _name;
	int			_apcost;
	int			_damage;

private:


};

#endif