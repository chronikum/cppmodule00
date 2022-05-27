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
        Contact(int i, std::string first, std::string last, std::string nick, std::string phone, std::string secret) {
            index = i;
            first_name = first;
            last_name = last;
            nickname = nick;
            phone_number = phone;
            darkest_secret = secret;
        };
};

# endif