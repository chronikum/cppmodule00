#include "../incs/Contact.hpp"
#include "../incs/PhoneBook.hpp"

void	display_menu(void)
{
	std::cout << "-----------------------------" << std::endl;
	std::cout << "	ADD a contact" << std::endl;
	std::cout << "	SEARCH a contact" << std::endl;
	std::cout << "	EXIT the phonebook" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << "$ ";
}

bool	handle_command(std::string command_string, PhoneBook *phone_book)
{
	if (command_string == "ADD")
	{
		phone_book->add();
		return (true);
	}
	else if (command_string == "SEARCH")
	{
		std::cout << "SEARCH a contact" << std::endl;
		return (true);
	}
	else if (command_string == "EXIT")
	{
		exit(0);
	}
	else
	{
		std::cout << "Unknown command" << std::endl;
		return (true);
	}
	return (false);
}

int	main()
{
	PhoneBook	phone_book;
	std::string command_string;
	display_menu();
	while (true)
	{
		getline(std::cin, command_string);
		if (handle_command(command_string, &phone_book) == false)
		{
			display_menu();
		}
		else
		{
			break;
		}
	}
	return (0);
}	