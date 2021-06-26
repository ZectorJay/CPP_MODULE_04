/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 19:05:10 by hmickey           #+#    #+#             */
/*   Updated: 2021/06/11 14:05:06 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Sorcerer.hpp"

class Peon : public Victim {
	
public:

	Peon( std::string name );
	~Peon();

	void	getPolymorphed() const;

protected:

	Peon(){};

};

#endif