/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:17:41 by hmickey           #+#    #+#             */
/*   Updated: 2021/07/01 16:28:32 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria {
	
public:

	Ice () : AMateria("ice"){};
	~Ice(){}
	AMateria*	clone() const;

protected:

	void		useMessage( ICharacter & target );

};

#endif