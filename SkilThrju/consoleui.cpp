#include "consoleui.h"
#include <iostream>
#include <string>
#include "menus.h"
#include <stdexcept>
#include <sstream>

ConsoleUI::ConsoleUI()
{
    scienceService = ScienceService();
    compService = ComputerService();
    connectService = ConnectService();
}

ConsoleUI::~ConsoleUI() {
}

int ConsoleUI::start() {
    // REPL
    while(true) {
        int response = respondToMessage();
        if( response == 0)
        {
            return 0;
        }
    }

    return 1;
}

void ConsoleUI::clear() {
    // Not pretty, but it is platform independant
    std::cout << std::string( 100, '\n' );
}

void ConsoleUI::waitForPrompt() {
    std::cout << "\nPress enter to continue..." << std::endl;
    std::cin.ignore();
    std::cin.get();
}

int ConsoleUI::respondToMessage() {

    std::cout << MAIN_MENU << std::endl;

    std::string userRequest;
    std::cin >> userRequest;

    try {
        // Handle all available commands and throw error on unknown ones
        if(userRequest.find("addScientist") != std::string::npos)
        {
            clear();
            Scientist additionalScientist = Scientist();
            std::cout << "Enter the name of the scientist: ";
            std::cin.ignore();
            std::getline(std::cin, additionalScientist.name);
            clear();
            std::cout << "Enter the date of birth of the scientist (yyyy.mm.dd): ";
            std::cin >> additionalScientist.dateOfBirth;
            clear();
            std::cout << "Enter the date of death of the scientist (yyyy.mm.dd): ";
            std::cin >> additionalScientist.dateOfDeath;
            clear();
            std::cout << "Enter the gender of the scientist: ";
            std::cin >> additionalScientist.gender;
            scienceService.addScientist(additionalScientist);
            clear();
        }
        else if(userRequest.find("addComputer") != std::string::npos)
        {
            clear();
            Computer additionalComputer = Computer();
            std::cout << "Enter the name of the computer: ";
            std::cin.ignore();
            std::getline(std::cin, additionalComputer.name);
            clear();
            std::cout << "Enter the building year of the computer: ";
            std::cin >> additionalComputer.yearBuilt;
            clear();
            std::cout << "Enter the type of the computer: ";
            std::cin >> additionalComputer.type;
            clear();
            std::cout << "Enter 1 if the computer was built and 0 if it was never built: ";
            std::cin >> additionalComputer.was_built;
            compService.add(additionalComputer);
            clear();
        }
           else if(userRequest.find("searchScientist") != std::string::npos)
        {
            clear();
            std::string searchTerm = "";
            std::cout << "Enter the name of the scientist that you want to search for: ";
            std::cin.ignore();
            std::getline(std::cin,searchTerm);
            clear();
            std::list<Scientist> searchResult = scienceService.search(searchTerm);
            if(!searchResult.empty())
            {
                std::cout << "Scientist found!!" << std::endl;
                std::cout << "Name:\t\tDateOfBirth:\tDateOfDeath:\tGender:\n";
                for(list<Scientist>::iterator iter = searchResult.begin(); iter != searchResult.end(); iter++)
                {
                    cout << iter->name << "\t" << iter->dateOfBirth << "\t" << iter->dateOfDeath << "\t" << iter->gender;
                    cout << endl;
                }
            }
        }
            else if(userRequest.find("searchComputer") != std::string::npos)
            {
             clear();
             std::string searchTerm = "";
             std::cout << "Enter the name of the computer that you want to search for: ";
             std::cin.ignore();
             std::getline(std::cin,searchTerm);
             clear();
             std::list<Computer> searchResult = compService.search(searchTerm);
             if(!searchResult.empty())
             {
                 std::cout << "Computer found!!" << std::endl;
                 std::cout << "Name:\t\tYearBuilt:\tType:\tWasBuilt:\n";
                 for(list<Computer>::iterator iter = searchResult.begin(); iter != searchResult.end(); iter++)
                 {
                     cout << iter->name << "\t" << iter->yearBuilt << "\t\t" << iter->type << "\t\t" << iter->was_built;
                     cout << endl;
                 }
             }
            else
             {
                std::cout << "No results found for the term: " << searchTerm << std::endl;
             }
            waitForPrompt();
            clear();
        }
            else if(userRequest.find("orderScientist") != std::string::npos)
        {
            clear();
            int filterCol = 0;
            int filterMod = 0;
            std::cout << FILTER_MENU << std::endl;
            std::cin >> filterCol >> filterMod;
            clear();
            std::list<Scientist> l = scienceService.getScientistsOrderedBy(filterCol,filterMod);
            std::cout << "Name:\t\t\tDateOfBirth:\t\tDateOfDeath:\t\tGender:\n";
            for(std::list<Scientist>::iterator iter = l.begin(); iter != l.end(); iter ++)
            {
                std::cout << iter->name << "\t\t" << iter->dateOfBirth << "\t\t" << iter->dateOfDeath << "\t\t" << iter->gender << std::endl;
            }
            waitForPrompt();
            clear();
        }
        else if(userRequest.find("orderComputer") != std::string::npos)
        {
            clear();
            int filterCol = 0;
            int filterMod = 0;
            std::cout << FILTER_MENU_COMPUTER << std::endl;
            std::cin >> filterCol >> filterMod;
            clear();
            std::list<Computer> l = compService.getComputersOrderedBy(filterCol,filterMod);
            std::cout << "Name:\t\tYearBuilt:\t\tType:\t\tWasBuilt:\n";
            for(std::list<Computer>::iterator iter = l.begin(); iter != l.end(); iter ++)
            {
                std::cout << iter->name << "\t\t" << iter->yearBuilt << "\t\t" << iter->type << "\t\t" << iter->was_built << std::endl;
            }
            waitForPrompt();
            clear();
        }
        else if(userRequest.find("connect") != std::string::npos)
        {
            clear();
            int computerId = 0;
            int scientistId = 0;
            std::cout << CONNECTION_MENU << std::endl;
            std::cin >> scientistId >> computerId;
            connectService.add(scientistId,computerId);
            std::list<Connection> l = connectService.display();
            std::cout << "Scientists and computers that are already associated: " << endl;
            for(std::list<Connection>::iterator iter = l.begin(); iter != l.end(); iter ++)
            {
                std::cout << iter->scientistName << "\t" << iter->computerName << std::endl;
            }
            waitForPrompt();
            clear();
        }

        else if (userRequest.find("exit") != std::string::npos)
        {
            return 0;
        }
        else
        {
            throw std::runtime_error( userRequest + " is not a valid command.");
        }
    }
    catch(std::runtime_error e)
    {
        clear();
        std::cout << "Command caused an error: " << e.what() << std::endl;
        std::cout << "Please try another command" << std::endl;
        waitForPrompt();
        clear();
    }

    return 1;
}

