/**
* yerevan teather class definition
*/
#include "yerevan_teather.h"

/**
*  implementing yerevan class constructor
*/
yerevan_teather::yerevan_teather()
{
	/**
	* Mapping values to keys for every seat for yerevan teather hall 1
	*/
	yerevan_seats_hall1.insert(std::make_pair(1, false));
	yerevan_seats_hall1.insert(std::make_pair(2, false));
	yerevan_seats_hall1.insert(std::make_pair(3, false));
	yerevan_seats_hall1.insert(std::make_pair(4, false));
	yerevan_seats_hall1.insert(std::make_pair(5, false));
	yerevan_seats_hall1.insert(std::make_pair(6, false));
	yerevan_seats_hall1.insert(std::make_pair(7, false));
	yerevan_seats_hall1.insert(std::make_pair(8, false));
	yerevan_seats_hall1.insert(std::make_pair(9, false));
	yerevan_seats_hall1.insert(std::make_pair(10, false));
	yerevan_seats_hall1.insert(std::make_pair(11, false));
	yerevan_seats_hall1.insert(std::make_pair(12, false));
	yerevan_seats_hall1.insert(std::make_pair(13, false));
	yerevan_seats_hall1.insert(std::make_pair(14, false));
	yerevan_seats_hall1.insert(std::make_pair(15, false));
	yerevan_seats_hall1.insert(std::make_pair(16, false));
	yerevan_seats_hall1.insert(std::make_pair(17, false));
	yerevan_seats_hall1.insert(std::make_pair(18, false));
	yerevan_seats_hall1.insert(std::make_pair(19, false));
	yerevan_seats_hall1.insert(std::make_pair(20, false));

	/**
	* Mapping values to keys for every seat for yerevan teather hall 2
	*/
	yerevan_seats_hall2.insert(std::make_pair(1, false));
	yerevan_seats_hall2.insert(std::make_pair(2, false));
	yerevan_seats_hall2.insert(std::make_pair(3, false));
	yerevan_seats_hall2.insert(std::make_pair(4, false));
	yerevan_seats_hall2.insert(std::make_pair(5, false));
	yerevan_seats_hall2.insert(std::make_pair(6, false));
	yerevan_seats_hall2.insert(std::make_pair(7, false));
	yerevan_seats_hall2.insert(std::make_pair(8, false));
	yerevan_seats_hall2.insert(std::make_pair(9, false));
	yerevan_seats_hall2.insert(std::make_pair(10, false));
	yerevan_seats_hall2.insert(std::make_pair(11, false));
	yerevan_seats_hall2.insert(std::make_pair(12, false));
	yerevan_seats_hall2.insert(std::make_pair(13, false));
	yerevan_seats_hall2.insert(std::make_pair(14, false));
	yerevan_seats_hall2.insert(std::make_pair(15, false));
	yerevan_seats_hall2.insert(std::make_pair(16, false));
	yerevan_seats_hall2.insert(std::make_pair(17, false));
	yerevan_seats_hall2.insert(std::make_pair(18, false));
	yerevan_seats_hall2.insert(std::make_pair(19, false));
	yerevan_seats_hall2.insert(std::make_pair(20, false));

	/**
	* Mapping values to keys for every seat for yerevan teather hall 3
	*/
	yerevan_seats_hall3.insert(std::make_pair(1, false));
	yerevan_seats_hall3.insert(std::make_pair(2, false));
	yerevan_seats_hall3.insert(std::make_pair(3, false));
	yerevan_seats_hall3.insert(std::make_pair(4, false));
	yerevan_seats_hall3.insert(std::make_pair(5, false));
	yerevan_seats_hall3.insert(std::make_pair(6, false));
	yerevan_seats_hall3.insert(std::make_pair(7, false));
	yerevan_seats_hall3.insert(std::make_pair(8, false));
	yerevan_seats_hall3.insert(std::make_pair(9, false));
	yerevan_seats_hall3.insert(std::make_pair(10, false));
	yerevan_seats_hall3.insert(std::make_pair(11, false));
	yerevan_seats_hall3.insert(std::make_pair(12, false));
	yerevan_seats_hall3.insert(std::make_pair(13, false));
	yerevan_seats_hall3.insert(std::make_pair(14, false));
	yerevan_seats_hall3.insert(std::make_pair(15, false));
	yerevan_seats_hall3.insert(std::make_pair(16, false));
	yerevan_seats_hall3.insert(std::make_pair(17, false));
	yerevan_seats_hall3.insert(std::make_pair(18, false));
	yerevan_seats_hall3.insert(std::make_pair(19, false));
	yerevan_seats_hall3.insert(std::make_pair(20, false));

}


/**
* implementation of printing welcome message
*/
void yerevan_teather::print_welcome()
{
	std::cout << "Welcome to Yerevan Teather Tickets Booking System!" << std::endl;
}

/**
* implementing set_seat_info_yerevan_hall1
*/
void yerevan_teather::set_seat_info_yerevan_hall1(std::string seat_name)
{

	if (seat_name == "a1") { yerevan_seats_hall1.insert_or_assign(1, true); }
	else if (seat_name == "a2") { yerevan_seats_hall1.insert_or_assign(2, true); }
	else if (seat_name == "a3") { yerevan_seats_hall1.insert_or_assign(3, true); }
	else if (seat_name == "a4") { yerevan_seats_hall1.insert_or_assign(4, true); }
	else if (seat_name == "a5") { yerevan_seats_hall1.insert_or_assign(5, true); }
	else if (seat_name == "a6") { yerevan_seats_hall1.insert_or_assign(6, true); }
	else if (seat_name == "a7") { yerevan_seats_hall1.insert_or_assign(7, true); }
	else if (seat_name == "a8") { yerevan_seats_hall1.insert_or_assign(8, true); }
	else if (seat_name == "a9") { yerevan_seats_hall1.insert_or_assign(9, true); }
	else if (seat_name == "a10") { yerevan_seats_hall1.insert_or_assign(10, true); }
	else if (seat_name == "a11") { yerevan_seats_hall1.insert_or_assign(11, true); }
	else if (seat_name == "a12") { yerevan_seats_hall1.insert_or_assign(12, true); }
	else if (seat_name == "a13") { yerevan_seats_hall1.insert_or_assign(13, true); }
	else if (seat_name == "a14") { yerevan_seats_hall1.insert_or_assign(14, true); }
	else if (seat_name == "a15") { yerevan_seats_hall1.insert_or_assign(15, true); }
	else if (seat_name == "a16") { yerevan_seats_hall1.insert_or_assign(16, true); }
	else if (seat_name == "a17") { yerevan_seats_hall1.insert_or_assign(17, true); }
	else if (seat_name == "a18") { yerevan_seats_hall1.insert_or_assign(18, true); }
	else if (seat_name == "a19") { yerevan_seats_hall1.insert_or_assign(19, true); }
	else if (seat_name == "a20") { yerevan_seats_hall1.insert_or_assign(20, true); }
	else { std::cout << "ERROR: Entered seat name not found. Please enter correct seat name" << std::endl; }
}

/**
* implementing set_seat_info_yerevan_hall2
*/
void yerevan_teather::set_seat_info_yerevan_hall2(std::string seat_name)
{

	if (seat_name == "a1") { yerevan_seats_hall2.insert_or_assign(1, true); }
	else if (seat_name == "a2") { yerevan_seats_hall2.insert_or_assign(2, true); }
	else if (seat_name == "a3") { yerevan_seats_hall2.insert_or_assign(3, true); }
	else if (seat_name == "a4") { yerevan_seats_hall2.insert_or_assign(4, true); }
	else if (seat_name == "a5") { yerevan_seats_hall2.insert_or_assign(5, true); }
	else if (seat_name == "a6") { yerevan_seats_hall2.insert_or_assign(6, true); }
	else if (seat_name == "a7") { yerevan_seats_hall2.insert_or_assign(7, true); }
	else if (seat_name == "a8") { yerevan_seats_hall2.insert_or_assign(8, true); }
	else if (seat_name == "a9") { yerevan_seats_hall2.insert_or_assign(9, true); }
	else if (seat_name == "a10") { yerevan_seats_hall2.insert_or_assign(10, true); }
	else if (seat_name == "a11") { yerevan_seats_hall2.insert_or_assign(11, true); }
	else if (seat_name == "a12") { yerevan_seats_hall2.insert_or_assign(12, true); }
	else if (seat_name == "a13") { yerevan_seats_hall2.insert_or_assign(13, true); }
	else if (seat_name == "a14") { yerevan_seats_hall2.insert_or_assign(14, true); }
	else if (seat_name == "a15") { yerevan_seats_hall2.insert_or_assign(15, true); }
	else if (seat_name == "a16") { yerevan_seats_hall2.insert_or_assign(16, true); }
	else if (seat_name == "a17") { yerevan_seats_hall2.insert_or_assign(17, true); }
	else if (seat_name == "a18") { yerevan_seats_hall2.insert_or_assign(18, true); }
	else if (seat_name == "a19") { yerevan_seats_hall2.insert_or_assign(19, true); }
	else if (seat_name == "a20") { yerevan_seats_hall2.insert_or_assign(20, true); }
	else { std::cout << "ERROR: Entered seat name not found. Please enter correct seat name" << std::endl; }
}

/**
* implementing set_seat_info_yerevan_hall3
*/
void yerevan_teather::set_seat_info_yerevan_hall3(std::string seat_name)
{

	if (seat_name == "a1") { yerevan_seats_hall3.insert_or_assign(1, true); }
	else if (seat_name == "a2") { yerevan_seats_hall3.insert_or_assign(2, true); }
	else if (seat_name == "a3") { yerevan_seats_hall3.insert_or_assign(3, true); }
	else if (seat_name == "a4") { yerevan_seats_hall3.insert_or_assign(4, true); }
	else if (seat_name == "a5") { yerevan_seats_hall3.insert_or_assign(5, true); }
	else if (seat_name == "a6") { yerevan_seats_hall3.insert_or_assign(6, true); }
	else if (seat_name == "a7") { yerevan_seats_hall3.insert_or_assign(7, true); }
	else if (seat_name == "a8") { yerevan_seats_hall3.insert_or_assign(8, true); }
	else if (seat_name == "a9") { yerevan_seats_hall3.insert_or_assign(9, true); }
	else if (seat_name == "a10") { yerevan_seats_hall3.insert_or_assign(10, true); }
	else if (seat_name == "a11") { yerevan_seats_hall3.insert_or_assign(11, true); }
	else if (seat_name == "a12") { yerevan_seats_hall3.insert_or_assign(12, true); }
	else if (seat_name == "a13") { yerevan_seats_hall3.insert_or_assign(13, true); }
	else if (seat_name == "a14") { yerevan_seats_hall3.insert_or_assign(14, true); }
	else if (seat_name == "a15") { yerevan_seats_hall3.insert_or_assign(15, true); }
	else if (seat_name == "a16") { yerevan_seats_hall3.insert_or_assign(16, true); }
	else if (seat_name == "a17") { yerevan_seats_hall3.insert_or_assign(17, true); }
	else if (seat_name == "a18") { yerevan_seats_hall3.insert_or_assign(18, true); }
	else if (seat_name == "a19") { yerevan_seats_hall3.insert_or_assign(19, true); }
	else if (seat_name == "a20") { yerevan_seats_hall3.insert_or_assign(20, true); }
	else { std::cout << "ERROR: Entered seat name not found. Please enter correct seat name" << std::endl; }
}

/**
* implementing get_seat_info_yerevan_hall1()
*/
void yerevan_teather::get_seat_info_yerevan_hall1()
{
	for (const auto& [key, value] : yerevan_seats_hall1)
	{
		std::cout << "a" << key << "-" << value << "\t";
		if (key % 5 == 0) {
			std::cout << std::endl;
		}
	}
}

/**
* implementing get_seat_info_yerevan_hall2()
*/
void yerevan_teather::get_seat_info_yerevan_hall2()
{
	for (const auto& [key, value] : yerevan_seats_hall2)
	{
		//std::cout << "a" << key << " " << value << std::endl;
		std::cout << "a" << key << "-" << value << "\t";
		if (key % 5 == 0) {
			std::cout << std::endl;
		}

	}
}

/**
* implementing get_seat_info_yerevan_hall3()
*/
void yerevan_teather::get_seat_info_yerevan_hall3()
{
	for (const auto& [key, value] : yerevan_seats_hall3)
	{
		//std::cout << "a" << key << " " << value << std::endl;
		std::cout << "a" << key << "-" << value << "\t";
		if (key % 5 == 0) {
			std::cout << std::endl;
		}

	}
}

/**
* method to set count of movies and movie names
*/
void yerevan_teather::set_movie_list(std::string movie_name1, std::string movie_name2, std::string movie_name3)
{
	movie_list[0] = movie_name1;
	movie_list[1] = movie_name2;
	movie_list[2] = movie_name3;
}

/**
* method to print movie list
*/
void yerevan_teather::get_movie_list()
{
	for (int i = 0; i < MOVIE_COUNT; i++)
	{
		std::cout << i + 1 << " : " << movie_list[i] << std::endl;
	}
}

/**
* method to get single movie name
*/
std::string yerevan_teather::get_movie_name(int movie_number)
{
	return movie_list[movie_number];
}



/**
* yerevan class destructor
*/
yerevan_teather::~yerevan_teather()
{

}