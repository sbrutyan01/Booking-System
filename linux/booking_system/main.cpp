/**
* @file
* @author Sergey Brutyan sbrutyan01@gmail.com
* @version 1.0
*
* @section DESCRITPION
*
* This class represents the main and all is functionalities
*/
#include "ararat_teather.h"
#include "yerevan_teather.h"
#include "nairi_teather.h"

/**
* global function prototype to only show teather list
*/
void print_teather_list();

int main()
{
	/**
	* three teathers as objects
	*/
	ararat_teather ararat = ararat_teather();
	yerevan_teather yerevan = yerevan_teather();
	nairi_teather nairi = nairi_teather();

	/**
	* set movie names list
	*/
	ararat.set_movie_list("Iron Man", "Hulk", "Batman");	// 

	/**
	* set movie names list
	*/
	yerevan.set_movie_list("Incredible India", "Future Technology", "Sportcars");

	/**
	* set movie names list
	*/
	nairi.set_movie_list("Tears of Happiness", "Love and Fear", "Daily Romance");

	/**
	* command that entered by user
	*/
	char command;

	/**
	* seat name variable enterd by user
	*/
	std::string seat_name; 

	do {

		std::cout << "!!!\tWlecome to Theater Tickets Booking System\t!!!" << std::endl;
		std::cout << "\nMenu for selecting action: " << std::endl;
		std::cout << "Enter 1 to show list of teathers." << std::endl;
		std::cout << "Enter q to quit program." << std::endl;
		std::cout << "\nEnter your command : ";
		std::cin >> command;

		if (command == '1')
		{
			print_teather_list();
			std::cout << "\nPlease select theater or q for quit program: ";
			std::cin >> command;
			/**
			* select teather Ararat Teather
			*/
			if (command == '1')
			{
				std::cout << "\nYour choice is Ararat Theater" << std::endl;
				std::cout << "Enter 1 to print movie list" << std::endl;
				std::cout << "Enter q to exit!" << std::endl;
				std::cout << "\nEnter your command : ";
				std::cin >> command;
				if (command == '1')
				{
					std::cout << "\nThe movie list for Ararat Teather is : " << std::endl;
					ararat.get_movie_list();
					std::cout << "Select movie : " << std::endl;
					std::cout << "Enter q for exit." << std::endl;
					std::cout << "\nEnter your command : ";
					std::cin >> command;
					/**
					* select movie #1 in ararat teather
					*/
					if (command == '1')
					{
						std::cout << "\nYour choice is : " << ararat.get_movie_name(0) << std::endl;
						std::cout << "Enter 1 to see available tickets : " << std::endl;
						std::cout << "Enter q to exit." << std::endl;
						std::cout << "\nPlease enter your command : ";
						std::cin >> command;
						/**
						* seat booking procedure for ararat teather for movie #1
						*/
						if (command == '1')
						{
							std::cout << "Ararat Teather seats: 1 is booked, 0 is free" << std::endl;
							ararat.get_seat_info_ararat_hall1();
							std::cout << std::endl;
							std::cout << "For booking ticket please enter seat name : a1 to a20 >> ";
							std::cin >> seat_name;
							ararat.set_seat_info_ararat_hall1(seat_name);
							std::cout << "Seat : " << seat_name << " is booked! " << std::endl;
							std::cout << std::endl;
							ararat.get_seat_info_ararat_hall1();

						}
						else if (command == 'q')
						{
							/**
							* exit from seat booking procedure for ararat teather for movie #1
							*/
							exit(0);
						}
					}
					/**
					* select movie #2 in ararat teather
					*/
					else if (command == '2')
					{
						std::cout << "\nYour choice is : " << ararat.get_movie_name(1) << std::endl;
						std::cout << "Enter 1 to see available tickets : " << std::endl;
						std::cout << "Enter q to exit." << std::endl;
						std::cout << "\nPlease enter your command : ";
						std::cin >> command;
						/**
						* seat booking procedure for ararat teather for movie #2
						*/
						if (command == '1')
						{
							std::cout << "Ararat Teather seats: 1 is booked, 0 is free" << std::endl;
							ararat.get_seat_info_ararat_hall2();
							std::cout << std::endl;
							std::cout << "For booking ticket please enter seat name : a1 to a20 >> ";
							std::cin >> seat_name;
							ararat.set_seat_info_ararat_hall2(seat_name);
							std::cout << "Seat : " << seat_name << " is booked!" << std::endl;
							std::cout << std::endl;
							ararat.get_seat_info_ararat_hall2();
						}
						else if (command == 'q')
						{
							/**
							* exit from seat booking procedure for ararat teather for movie #2
							*/
							exit(0);
						}
					}
					/**
					* select movie #3 in ararat teather
					*/
					else if (command == '3')
					{
						std::cout << "\nYour choice is : " << ararat.get_movie_name(2) << std::endl;
						std::cout << "Enter 1 to see available tickets : " << std::endl;
						std::cout << "Enter q to exit." << std::endl;
						std::cout << "\nPlease enter your command : ";
						std::cin >> command;
						/**
						* seat booking procedure for ararat teather for movie #3
						*/
						if (command == '1')
						{
							std::cout << "Ararat Teather seats: 1 is booked, 0 is free" << std::endl;
							ararat.get_seat_info_ararat_hall3();
							std::cout << std::endl;
							std::cout << "For booking ticket please enter seat name : a1 to a20 >> ";
							std::cin >> seat_name;
							ararat.set_seat_info_ararat_hall3(seat_name);
							std::cout << "Seat : " << seat_name << " is booked!" << std::endl;
							std::cout << std::endl;
							ararat.get_seat_info_ararat_hall3();
						}
						else if (command == 'q')
						{
							/**
							* exit from seat booking procedure for ararat teather movie #3
							*/
							exit(0);
						}
					}
					else if (command == 'q')
					{
						/**
						* exit from movie selection menu in ararat teather
						*/
						exit(0);
					}

				}
				else if (command == 'q')
				{
					/**
					* exit from ararat teather menu
					*/
					exit(0);
				}

			}/**
			 * ararat teather selection finished here
			 */

			/**
			* select teather Yerevan Teather
			*/
			else if (command == '2')
			{
				std::cout << "Your choice is Yerevan Theater" << std::endl;
				std::cout << "Enter 1 to print movie list" << std::endl;
				std::cout << "Enter q to exit!" << std::endl;
				std::cout << "Enter your command : ";
				std::cin >> command;
				/**
				* show movie list in yerevan teather
				*/
				if (command == '1')
				{
					/**
					* yerevan teather movie selection menu
					*/
					std::cout << "The movie list for Yerevan Teather is : " << std::endl;
					yerevan.get_movie_list();
					std::cout << "Select movie : " << std::endl;
					std::cout << "Enter q for exit." << std::endl;
					std::cout << "Enter your command : ";
					std::cin >> command;
					/**
					* select movie #1 in yerevan teather
					*/
					if (command == '1')
					{
						std::cout << "\nYour choice is : " << yerevan.get_movie_name(0) << std::endl;
						std::cout << "Enter 1 to see available tickets : " << std::endl;
						std::cout << "Enter q to exit." << std::endl;
						std::cout << "\nPlease enter your command : ";
						std::cin >> command;
						/**
						* seat booking procedure for yerevan teather for movie #1
						*/
						if (command == '1')
						{
							std::cout << "Yerevan Teather seats: 1 is booked, 0 is free" << std::endl;
							yerevan.get_seat_info_yerevan_hall1();
							std::cout << std::endl;
							std::cout << "For booking ticket please enter seat name : a1 to a20 >> ";
							std::cin >> seat_name;
							yerevan.set_seat_info_yerevan_hall1(seat_name);
							std::cout << "Seat : " << seat_name << " is booked!" << std::endl;
							std::cout << std::endl;
							yerevan.get_seat_info_yerevan_hall1();
						}
						else if (command == 'q')
						{
							/**
							* exit from seat booking procedure for yerevan teather movie #1
							*/
							exit(0);						
						}
						}
						/**
						* select movie #2 in yerevan teather
						*/
						else if (command == '2')
						{
							std::cout << "\nYour choice is : " << yerevan.get_movie_name(1) << std::endl;
							std::cout << "Enter 1 to see available tickets : " << std::endl;
							std::cout << "Enter q to exit." << std::endl;
							std::cout << "\nPlease enter your command : ";
							std::cin >> command;
							/**
							* seat booking procedure in yerevan teather for movie #2
							*/
							if (command == '1')
							{
								std::cout << "Yerevan Teather seats: 1 is booked, 0 is free" << std::endl;
								yerevan.get_seat_info_yerevan_hall2();
								std::cout << std::endl;
								std::cout << "For booking ticket please enter seat name : a1 to a20 >> ";
								std::cin >> seat_name;
								yerevan.set_seat_info_yerevan_hall2(seat_name);
								std::cout << "Seat : " << seat_name << " is booked!" << std::endl;
								std::cout << std::endl;
								yerevan.get_seat_info_yerevan_hall2();
							}
							else if (command == 'q')
							{
								/**
								* exit from program after booking seat
								*/
								exit(0);
							}
						}
						/**
						* select yerevan teather movie #3
						*/
						else if (command == '3')
						{
							std::cout << "\nYour choice is : " << yerevan.get_movie_name(2) << std::endl;
							std::cout << "Enter 1 to see available tickets : " << std::endl;
							std::cout << "Enter q to exit." << std::endl;
							std::cout << "\nPlease enter your command : ";
							std::cin >> command;
							/**
							* seats bookiing procedure for yerevan teather for movie #3
							*/
							if (command == '1')
							{
								std::cout << "Yerevan Teather seats: 1 is booked, 0 is free" << std::endl;
								yerevan.get_seat_info_yerevan_hall3();
								std::cout << std::endl;
								std::cout << "For booking ticket please enter seat name : a1 to a20 >> ";
								std::cin >> seat_name;
								yerevan.set_seat_info_yerevan_hall3(seat_name);
								std::cout << "Seat : " << seat_name << " is booked!" << std::endl;
								std::cout << std::endl;
								yerevan.get_seat_info_yerevan_hall3();
							}
							else if (command == 'q')
							{
								/**
								* exit from seat booking procedure for yerevan teather for movie #3
								*/
								exit(0);
							}
						}
						else if (command == 'q')
						{
							/**
							* exit from movie selection menu in yerevan teather
							*/
							exit(0);
						}
					}
					else if (command == 'q')
					{
						/**
						* exit from yerevan teather menu
						*/
						exit(0);
					}
				} 
				/**
				* yerevan teather selection is finished here
				*/

				/**
				* select Nairi Teather
				*/
				else if (command == '3')
				{
					std::cout << "Your choice is Nairi Theater" << std::endl;
					std::cout << "Enter 1 to print movie list" << std::endl;
					std::cout << "Enter 0 to exit!" << std::endl;
					std::cout << "Enter your command : ";
					std::cin >> command;
					/**
					* show movie list in Nairi teather	
					*/
					if (command == '1')
					{
						/**
						* nairi teather movie selection menu
						*/
						std::cout << "The movie list for Nairi Teather is : " << std::endl;
						nairi.get_movie_list();
						std::cout << "Select movie : " << std::endl;
						std::cout << "Enter 0 for exit." << std::endl;
						std::cout << "Enter your command : ";
						std::cin >> command;
						/**
						* nairi teather movie #1 selection
						*/
						if (command == '1')
						{
							std::cout << "\nYour choice is : " << nairi.get_movie_name(0) << std::endl;
							std::cout << "Enter 1 to see available tickets : " << std::endl;
							std::cout << "Enter 0 to exit." << std::endl;
							std::cout << "\nPlease enter your command : ";
							std::cin >> command;
							/**
							* seat booking procedure in nairi teather for movie #1
							*/
							if (command == '1')
							{
								std::cout << "Nairi Teather seats: 1 is booked, 0 is free" << std::endl;
								nairi.get_seat_info_nairi_hall1();
								std::cout << std::endl;
								std::cout << "For booking ticket please enter seat name : a1 to a20 >> ";
								std::cin >> seat_name;
								nairi.set_seat_info_nairi_hall1(seat_name);
								std::cout << "Seat : " << seat_name << " is booked!" << std::endl;
								std::cout << std::endl;
								nairi.get_seat_info_nairi_hall1();
							}
							else if (command == 'q')
							{
								/**
								* exit seat booking procedure for nairi teather for movie #1
								*/
								exit(0);
							}
						}
						/**
						* nairi teather movie #2 selection
						*/
						else if (command == '2')
						{
							std::cout << "\nYour choice is : " << nairi.get_movie_name(1) << std::endl;
							std::cout << "Enter 1 to see available tickets : " << std::endl;
							std::cout << "Enter 0 to exit." << std::endl;
							std::cout << "\nPlease enter your command : ";
							std::cin >> command;
							/**
							* seats booking procedure in nairi teather for movie #2
							*/
							if (command == '1')
							{
								std::cout << "Nairi Teather seats: 1 is booked, 0 is free" << std::endl;
								nairi.get_seat_info_nairi_hall2();
								std::cout << std::endl;
								std::cout << "For booking ticket please enter seat name : a1 to a20 >> ";
								std::cin >> seat_name;
								nairi.set_seat_info_nairi_hall2(seat_name);
								std::cout << "Seat : " << seat_name << " is booked!" << std::endl;
								std::cout << std::endl;
								nairi.get_seat_info_nairi_hall2();
							}
							else if (command == 'q')
							{
								/**
								* exit procedure for nairi teather for movie #2
								*/
								exit(0);
							}
						}
						/**
						* nairi teather movie #3 selection
						*/
						else if (command == '3')
						{
							std::cout << "\nYour choice is : " << nairi.get_movie_name(2) << std::endl;
							std::cout << "Enter 1 to see available tickets : " << std::endl;
							std::cout << "Enter 0 to exit." << std::endl;
							std::cout << "\nPlease enter your command : ";
							std::cin >> command;
							/**
							* seat booking procedure in nairi teather for movie #3
							*/
							if (command == '1')
							{
								std::cout << "Nairi Teather seats: 1 is booked, 0 is free" << std::endl;
								nairi.get_seat_info_nairi_hall3();
								std::cout << std::endl;
								std::cout << "For booking ticket please enter seat name : a1 to a20 >> ";
								std::cin >> seat_name;
								nairi.set_seat_info_nairi_hall3(seat_name);
								std::cout << "Seat : " << seat_name << " is booked!" << std::endl;
								std::cout << std::endl;
								nairi.get_seat_info_nairi_hall3();
							}
							else if (command == 'q')
							{
								/**
								* exit from seat booking procedure in nairi teather for movie #3
								*/
								exit(0);
							}
						}
						else if (command == 'q')
						{
							/**
							* exit from nairi teather from movie selection list menu
							*/
							exit(0);
						}
					}
					else if (command == 'q')
					{
						/**
						* exit from nairi teather menu
						*/
						exit(0);
					}
				}		
				/**
				* nairi teather selection is finished here
				*/
				else if (command == 'q')
				{
					/**
					* exit from teather selection list
					*/
					exit(0);
				}
			}
			/**
			* exit from teather selection list
			*/
			else if (command == 'q')
			{
				/**
				* exit from teather selection list
				*/
				exit(0);
			}

			if (command == 'q')
			{
				/**
				* exit from booking system (global menu)
				*/
				exit(0);
			}
			/**
			* forever loop for menu and selections
			*/
		} while (true);

		/**
		* destructor for ararat teather object
		*/
		ararat.~ararat_teather();

		/**
		* destructor for yerevan teather object
		*/
		yerevan.~yerevan_teather();

		/**
		* destructor for nairi teather object
		*/
		nairi.~nairi_teather();

		return 0;
}

/**
* global function for only showing teather list
*/
void print_teather_list()	
{
	std::cout << "1\tArarat Theater" << std::endl;
	std::cout << "2\tYerevan Theater" << std::endl;
	std::cout << "3\tNairi Theater" << std::endl;
}