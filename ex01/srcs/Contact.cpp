#include "../incs/Contact.hpp"


/**
 *	Sets first name
 */
bool Contact::set_first_name(std::string first_name)
{
	if (first_name.length() == 0)
	{
		return (false);
	}
	this->first_name = first_name;
	return (true);
}

/**
 *	Sets last name
 */
bool Contact::set_last_name(std::string last_name)
{
	if (last_name.length() == 0)
	{
		return (false);
	}
	this->last_name = last_name;
	return (true);
}


/**
 *	Sets nickname
 */
bool Contact::set_nickname(std::string nickname)
{
	if (nickname.length() == 0)
	{
		return (false);
	}
	this->nickname = last_name;
	return (true);
}

/**
 *	Sets phone_number
 */
bool Contact::set_phone_number(std::string phone_number)
{
	if (phone_number.length() == 0)
	{
		return (false);
	}
	this->phone_number = phone_number;
	return (true);
}


/**
 *	Sets darkest_secret
 */
bool Contact::set_darkest_secret(std::string darkest_secret)
{
	if (darkest_secret.length() == 0)
	{
		return (false);
	}
	this->darkest_secret = darkest_secret;
	return (true);
}