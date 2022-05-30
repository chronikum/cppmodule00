#include "../incs/Contact.hpp"
#include "../incs/PhoneBook.hpp"

void	display_menu(void)
{
	std::cout << "ADD a contact" << std::endl;
	std::cout << "SEARCH a contact" << std::endl;
	std::cout << "EXIT the phonebook" << std::endl;
}

int	main()
{
	std::cout << "Starting phone book" << std::endl;
	display_menu();
	return (0);
}