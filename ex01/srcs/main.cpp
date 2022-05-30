#include "../incs/Contact.hpp"
#include "../incs/PhoneBook.hpp"

/**
 * Displays 10 characters of string character by character
 * and then displays a pipe. Fills up with spaces if shorter
 * than 10.
 */
void display_column(std::string to_display)
{
	int length = 0;
	while (to_display[length])
	{
		std::cout << to_display[length];
	}
	while (length < 10)
	{
		std::cout << " ";
		length++;
	}
	std::cout << "|";
}

/**
 * Will truncate string to 9 characters and set dot as last character.
 * Then displays it.
 */
std::string truncate_string_and_display(std::string string)
{
	if (string.length() == 0)
		return "";
	if (string.length() == 9)
	{
		string[9] = '.';
		display_column(string);
		return string;
	}
	string = string.substr(0,10);
	display_column(string);
	return string;
}

/**
 * Displays all contents of the contact
 */
void	display_contact(Contact contact_to_display)
{
	truncate_string_and_display(contact_to_display.get_first_name());
	truncate_string_and_display(contact_to_display.get_last_name());
	truncate_string_and_display(contact_to_display.get_phone_number());
	truncate_string_and_display(contact_to_display.get_nickname());
}

/**
 * Displays the menu
 */
void	display_menu(void)
{
	std::cout << "-----------------------------" << std::endl;
	std::cout << "	ADD a contact" << std::endl;
	std::cout << "	SEARCH a contact" << std::endl;
	std::cout << "	EXIT the phonebook" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << "$ ";
}

/**
 * Handles commands fromm user input
 */
bool	handle_command(std::string command_string, PhoneBook *phone_book)
{
	if (command_string == "ADD")
	{
		phone_book->add();
		std::cout << "Contact added. Press ENTER to continue." << std::endl;
		return (true);
	}
	else if (command_string == "SEARCH")
	{
		Contact contact_found = phone_book->search();
		if (contact_found.get_first_name().length())
		{
			display_contact(contact_found);
			std::cout << "Contact found. Press ENTER to continue." << std::endl;
			return (true);
		}
		std::cout << "Contact not found. Press ENTER to continue." << std::endl;
		return (false);
	}
	else if (command_string == "EXIT")
	{
		exit(0);
	}
	else
	{
		std::cout << "Unknown command" << std::endl;
		return (false);
	}
	return (false);
}

int	main()
{
	PhoneBook	phone_book;
	std::string command_string;

	display_menu();
	while (!std::cin.eof())
	{
		getline(std::cin, command_string);
		if (handle_command(command_string, &phone_book) == false)
		{
			display_menu();
		}
	}
	return (0);
}	