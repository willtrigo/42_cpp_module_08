/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpanException.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:05:28 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/28 22:23:21 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/entities/Span.hpp"

Span::SpanException::SpanException(const char* msg) : m_msg(msg) {}

const char* Span::SpanException::what() const throw() { return this->m_msg; }
