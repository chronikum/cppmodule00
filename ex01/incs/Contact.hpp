#ifndef CONTACTS_H
# define CONTACTS_H

#include <iostream>

/**
 * Represents a contact entry in the phone book
 */
class Contact {
    private:
        int index;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
		bool		set_first_name(std::string first_name);
		bool		set_last_name(std::string first_name);
		bool		set_phone_number(std::string first_name);
		bool		set_darkest_secret(std::string first_name);
		bool		set_nickname(std::string first_name);
		bool		set_index(int index);
		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_phone_number(void);
		std::string	get_darkest_secret(void);
		std::string	get_nickname(void);
};

# endif