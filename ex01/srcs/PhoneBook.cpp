#include "../incs/PhoneBook.hpp"

/**
 * Constructs new phone book
 */
PhoneBook::PhoneBook()
{
	
}

/**
 *	Prompts user with message and returns the input
 */
std::string	PhoneBook::prompt_user(std::string prompt_message)
{
	std::string user_input;
	std::cout << prompt_message;
	getline(std::cin, user_input);
	std::cout << user_input << std::endl;
	return (user_input);
}

/**
 * Adds a new contact
 */
Contact PhoneBook::add(void)
{
	static int	index = 0;
	int	current_index = 0;
    Contact	new_contact;
	std::string	first_name;
	std::string	last_name;
	std::string	phone_number;
	std::string	darkest_secret;
	std::string	nickname;
	
	while (first_name.length() == 0 && !std::cin.eof())
	{
		first_name = prompt_user("Enter first name: ");
	}
	while (last_name.length() == 0  && !std::cin.eof())
	{
		last_name = prompt_user("Last name: ");
	}
	while (phone_number.length() == 0  && !std::cin.eof())
	{
		phone_number = prompt_user("Phone number: ");
	}
	while (darkest_secret.length() == 0  && !std::cin.eof())
	{
		darkest_secret = prompt_user("Darkest secret: ");
	}
	while (nickname.length() == 0  && !std::cin.eof())
	{
		nickname = prompt_user("Nickname: ");
	}
	current_index = index % 8;
	index++;
	new_contact.set_first_name(first_name);
	new_contact.set_last_name(last_name);
	new_contact.set_phone_number(phone_number);
	new_contact.set_darkest_secret(darkest_secret);
	new_contact.set_nickname(first_name + " " + last_name);
	new_contact.set_index(current_index);
	std::cout << "New contact added: " << current_index << std::endl;
	contact_array[current_index] = new_contact;
	return (new_contact);
}

/**
 * Searches a index in the phone book
 */
Contact PhoneBook::search()
{
	int index = -1;
	std::string input;
	input = prompt_user("Index to look for (between 1 and 8):"); 
	std::istringstream(input) >> index;
	while ((index < 1 || index > 8) && !std::cin.eof())
	{
		std::cout << "Invalid index" << std::endl;
		input = prompt_user("Index to look for:");
		std::istringstream(input) >> index;
	}
	index--;
	return (this->contact_array[index]);
}