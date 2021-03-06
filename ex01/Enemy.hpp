/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:05:27 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 10:58:16 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class Enemy
{

public:

	Enemy( int hp, std::string const & type );
	virtual ~Enemy();

	Enemy & operator = ( Enemy const & src );
	virtual std::string	getType() const;
	int 				getHP() const;
	virtual void		takeDamage(int amount);

protected:

	Enemy();
	int			_hp;
	std::string _type;

};

std::ostream & operator << (std::ostream & o, Enemy const & src);

#endif