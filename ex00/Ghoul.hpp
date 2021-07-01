/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ghoul.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 10:29:57 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/26 10:32:55 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GHOUL_HPP
# define GHOUL_HPP
# include "Victim.hpp"

class Ghoul : public Victim {

public:

	Ghoul( std::string name );
	virtual ~Ghoul();

	void	getPolymorphed() const;
	
};

#endif