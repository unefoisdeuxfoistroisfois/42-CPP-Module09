#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <iostream>

class BitcoinExchange {
	private : 
		std::map<std::string, double> _exchangeRates;

	public : 
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange &operator=(const BitcoinExchange &rhs);
		~BitcoinExchange();

};

#endif