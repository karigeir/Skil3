#ifndef MENUS_H
#define MENUS_H

// Long strings and ASCII art here below \/ \/

std::string MAIN_MENU = "Please use the following commands to interface with this AWESOME DATABASE\n\n\
        addScientist    : Add a scientist to the database\n\
        addComputer     : Add a computer to the database\n\
        orderScientist  : Order and dislay scientists in the database\n\
        orderComputer   : Order and display computers in the database\n\
        searchScientist : Searches for a scientist\n\
        searchComputer  : Searches for a computer\n\
        connect         : Connects computers to scientists and vice versa\n\
        exit            : Exit the program";

std::string FILTER_MENU = "Enter one of the following integers to order by the corresponding column.\n\
        1     : Name\n\
        2     : Date of birth\n\
        3     : Date of death\n\
        4     : Gender\n\ Press 1 if you want to sort ascending and 2 if you want to sort descending\n\n\
    Example: \"1 1\"";

std::string FILTER_MENU_COMPUTER = "Enter one of the following integers to order by the corresponding column.\n\
        1     : Name\n\
        2     : Year Built\n\
        3     : Type\n\
        4     : Was Built\n\ Press 1 if you want to sort ascending and 2 if you want to sort descending\n\n\
    Example: \"1 1\"";

std::string CONNECTION_MENU = "First enter the ID of the scientist and then the ID of the computer that you\n\
want to tie the scientist to.\n\n\
        Example: \"19 7\"";


#endif // MENUS_H
