#include "BitcoinExchange.hpp"
#include <fstream>
#include <string>
#include <stdexcept>

void ftReadCsvFile(const std::string &filename){

	std::ifstream file(filename.c_str());

	if (file.is_open() == false){
    throw std::runtime_error("Could not open database");
	} else {
		std::cout << "fichier ouvert" << std::endl;
	}

	std::string line;

	while (std::getline(file, line)){
		std::cout << line << std::endl;
	}
}

int	main(int argc, char **argv){

	if (argc != 2){
    std::cerr << "Usage: ./btc filename" << std::endl;
		return (-1);
	}

	try{
		ftReadCsvFile(argv[1]);
	} catch (const std::exception &e){
    std::cerr << e.what() << std::endl;
		return (-1);
	}

	return (0);
}