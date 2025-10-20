/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContainerLoaderUtilities.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:20:14 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/20 10:34:32 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/seeds/ContainerLoader.hpp"

#include <vector>
#include <list>
#include <deque>

void ContainerLoader::populateVectorData(std::vector<int>& vec) {
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(42);
}

void ContainerLoader::populateListData(std::list<int>& lst) {
  lst.push_back(10);
  lst.push_back(20);
  lst.push_back(30);
  lst.push_back(40);
}

void ContainerLoader::populateDequeData(std::deque<int>& deq) {
  deq.push_back(100);
  deq.push_back(200);
  deq.push_back(300);
  deq.push_back(400);
}
