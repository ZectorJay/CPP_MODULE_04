/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 19:05:10 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 10:53:54 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Sorcerer.hpp"

class Peon : public Victim {
	
public:

	Peon( std::string name );
	virtual ~Peon();

	void	getPolymorphed() const;

};

#endif