/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 12:45:49 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 13:41:22 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

class AMateria;

class Character : public ICharacter {
	
public:

	Character( std::string const & name );
	~Character();
	Character ( Character const & src );

	Character & 		operator= ( Character const & src );

	std::string	const &	getName() const;
	void				equip ( AMateria* m );
	void				unequip ( int idx );
	void				use ( int idx, ICharacter & target );
	AMateria*			getMateria( int idx ) const ;
	
private:

	std::string			_name;
	AMateria*			_inventory[4];
};

#endif