/** 
* @file
* @author Sergey Brutyan sbrutyan01@gmail.com
* @version 1.0
* 
* @section DESCRITPION
* 
* This class represents the Ararat Teather and all is functionalities
*/
#pragma once

/**
*  headers from standard library
*/
#include <iostream>
#include <map>
#include <algorithm>
#include <string>

#ifndef ARARAT_TEATHER_H
#define ARARAT_TEATHER_H

/** 
* @brief Ararat Teather class
* @author Sergey Brutyan
*/

class ararat_teather
{
public:

	/**
	* constructor for booking system ararat class
	*/
	ararat_teather();

	/**
	* method for printing welcome message
	*/
	void print_welcome();

	/**
	* method for printing move list
	*/
	void print_movie_list();

	/**
	* method to set seat for ararat teather 3 halls
	*/
	void set_seat_info_ararat_hall1(std::string seat_name);
	void set_seat_info_ararat_hall2(std::string seat_name);
	void set_seat_info_ararat_hall3(std::string seat_name);

	/**
	* method to get seat info for ararat teather
	*/
	void get_seat_info_ararat_hall1();
	void get_seat_info_ararat_hall2();
	void get_seat_info_ararat_hall3();

	/**
	* method to set movie name
	*/
	void set_movie_list(std::string movie_name1, std::string movie_name2, std::string movie_name3);

	/**
	* method to print movie list
	*/
	void get_movie_list();

	/**
	* method to get single movie name
	* @return single movie name
	*/
	std::string get_movie_name(int movie_number);

	/**
	* destructor for ararat class
	*/
	~ararat_teather();


private:

	/**
	* amount of seats for ararat hall 1
	*/
	std::map<int, bool> ararat_seats_hall1;

	/**
	* amount of seats for ararat hall 2
	*/
	std::map<int, bool> ararat_seats_hall2;

	/**
	* amount of seats for ararat hall 3
	*/
	std::map<int, bool> ararat_seats_hall3;

	/**
	* count of movies
	*/
	static const int MOVIE_COUNT = 3;

	/**
	* movie list per teather
	*/
	std::string movie_list[MOVIE_COUNT];
};

#endif