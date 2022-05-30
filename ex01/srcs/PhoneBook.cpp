#include "../incs/PhoneBook.hpp"

/**
 *	Prompts user with message and returns the input
 */
std::string	prompt_user(std::string prompt_message)
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
    Contact	new_contact;
	std::string	first_name;
	std::string	last_name;
	std::string	phone_number;
	std::string	darkest_secret;
	std::string	nickname;
	
	while (first_name.length() == 0)
	{
		first_name = prompt_user("First name: ");
	}
	while (last_name.length() == 0)
	{
		last_name = prompt_user("Last name: ");
	}
	while (phone_number.length() == 0)
	{
		phone_number = prompt_user("Phone number: ");
	}
	while (darkest_secret.length() == 0)
	{
		darkest_secret = prompt_user("Darkest secret: ");
	}
	while (nickname.length() == 0)
	{
		nickname = prompt_user("Darkest secret: ");
	}
	new_contact.set_first_name(first_name);
	new_contact.set_last_name(last_name);
	new_contact.set_phone_number(phone_number);
	new_contact.set_darkest_secret(darkest_secret);
	new_contact.set_nickname(first_name + " " + last_name);
	return (new_contact);
}

/**
 * Searches a string in the phone book
 */
Contact *PhoneBook::search(std::string search_string)
{
	(void) search_string;
	return NULL;
}