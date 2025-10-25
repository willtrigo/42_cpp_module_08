/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContainerLoaderUtilities.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:20:14 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/24 21:09:21 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/seeds/ContainerLoader.hpp"

#include <deque>
#include <list>
#include <vector>

const int ContainerLoader::VECTOR_DATA[] = {1, 2, 3, 42};
const int ContainerLoader::LIST_DATA[] = {10, 20, 30, 40};
const int ContainerLoader::DEQUE_DATA[] = {100, 200, 300, 400};

const std::size_t ContainerLoader::VECTOR_DATA_SIZE =
    sizeof(ContainerLoader::VECTOR_DATA) /
    sizeof(ContainerLoader::VECTOR_DATA[0]);
const std::size_t ContainerLoader::LIST_DATA_SIZE =
    sizeof(ContainerLoader::LIST_DATA) / sizeof(ContainerLoader::LIST_DATA[0]);
const std::size_t ContainerLoader::DEQUE_DATA_SIZE =
    sizeof(ContainerLoader::DEQUE_DATA) /
    sizeof(ContainerLoader::DEQUE_DATA[0]);

void ContainerLoader::populateVectorData(std::vector<int>& vec) {
  for (std::size_t i = 0; i < VECTOR_DATA_SIZE; ++i) {
    vec.push_back(VECTOR_DATA[i]);
  }
}

void ContainerLoader::populateListData(std::list<int>& lst) {
  for (std::size_t i = 0; i < LIST_DATA_SIZE; ++i) {
    lst.push_back(LIST_DATA[i]);
  }
}

void ContainerLoader::populateDequeData(std::deque<int>& deq) {
  for (std::size_t i = 0; i < DEQUE_DATA_SIZE; ++i) {
    deq.push_back(DEQUE_DATA[i]);
  }
}
