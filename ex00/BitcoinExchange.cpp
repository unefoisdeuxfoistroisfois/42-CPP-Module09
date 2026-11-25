#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
	std::cout << "BitcoinExchange default constructor called" << std::endl;

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src){
	std::cout << "BitcoinExchange copy constructor called" << std::endl;

	this->_exchangeRates = src._exchangeRates;

}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs){
	std::cout << "BitcoinExchange assignment operator called" << std::endl;

	if (this != &rhs){
		this->_exchangeRates = rhs._exchangeRates;
	}

	return (*this);

}

BitcoinExchange::~BitcoinExchange(){
	std::cout << "BitcoinExchange destructor called" << std::endl;

}