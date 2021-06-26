/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:11:20 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/16 18:46:29 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {

public:

	Character( std::string const & name );
	~Character();
	Character ( Character const & src);

	Character & operator = ( Character const & src );
	void 		recoverAP();
	void 		equip( AWeapon* weapon );
	void 		attack( Enemy* target );

	std::string virtual getName() const;
	AWeapon	* 			getWeapon() const;
	int					getAp( ) const;

protected:

	Character();
	int			_ap;
	std::string	_name;
	AWeapon		*_weapon;
};

std::ostream & operator << (std::ostream & o, Character const & src);

#endif