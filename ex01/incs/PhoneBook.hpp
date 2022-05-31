#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <sstream>
#include <iomanip>
#include "Contact.hpp"

/**
 * Represents the phone book holding the contacts
 */
class PhoneBook {
	private:
		Contact contact_array[8];
		std::string	prompt_user(std::string prompt_message);
	public:
		PhoneBook();
		Contact add(void);
		Contact search();
};

# endif