#include <iostream>
#include <string>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phonenumber;
    std::string dark_secret;

public:
    // Setter methods
    // void setFirstName(const std::string& firstName);
    // void setLastName(const std::string& lastName);
    // void setNickname(const std::string& nick);
    // void setPhoneNumber(const std::string& phone);
    // void setDarkSecret(const std::string& secret);

    // Getter methods
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkSecret() const;

    void fillContact();
    void displayContact();
    std::string truncateText(const std::string& text, int width);
};

class Phonebook
{
private:
    static const int MAX_CONTACTS = 8;
    Contact contacts[MAX_CONTACTS];
    int length;

public:
    Phonebook()
    {
        length = 0;
    }
    void addContact();
    void displayContacts();
    void searchContact();
};

// Contact class implementation
// void Contact::setFirstName(const std::string& firstName)
// {
//     first_name = firstName;
// }

// void Contact::setLastName(const std::string& lastName)
// {
//     last_name = lastName;
// }

// void Contact::setNickname(const std::string& nick)
// {
//     nickname = nick;
// }

// void Contact::setPhoneNumber(const std::string& phone)
// {
//     phonenumber = phone;
// }

// void Contact::setDarkSecret(const std::string& secret)
// {
//     dark_secret = secret;
// }

std::string Contact::getFirstName() const
{
    return first_name;
}

std::string Contact::getLastName() const
{
    return last_name;
}

std::string Contact::getNickname() const
{
    return nickname;
}

// std::string Contact::getPhoneNumber() const
// {
//     return phonenumber;
// }

// std::string Contact::getDarkSecret() const
// {
//     return dark_secret;
// }

void Contact::fillContact()
{
    std::cout << "Please enter contact info:\n";
    std::cout << "First Name: ";
    getline(std::cin, first_name);
    std::cout << "Last Name: ";
    getline(std::cin, last_name);
    std::cout << "Nickname: ";
    getline(std::cin, nickname);
    std::cout << "Phone Number: ";
    getline(std::cin, phonenumber);
    std::cout << "Dark Secret: ";
    getline(std::cin, dark_secret);
}

void Contact::displayContact()
{
    std::cout << "First Name: " << first_name << "\n";
    std::cout << "Last Name: " << last_name << "\n";
    std::cout << "Nickname: " << nickname << "\n";
    std::cout << "Phone Number: " << phonenumber << "\n";
    std::cout << "Dark Secret: " << dark_secret << "\n";
    std::cout << std::endl;
}

std::string Contact::truncateText(const std::string& text, int width)
{
    if (text.length() <= width)
        return text;
    else
        return text.substr(0, width - 1) + ".";
}

// Phonebook class implementation
void Phonebook::addContact()
{
    if (length >= MAX_CONTACTS)
    {
        std::cout << "Phonebook is full. Cannot add more contacts.\n";
    }
    else
    {
        Contact newContact;
        newContact.fillContact();
        contacts[length] = newContact;
        length++;
    }
}

void Phonebook::displayContacts()
{
    if (length == 0)
    {
        std::cout << "Phonebook is empty.\n";
    }
    else
    {
        std::cout << "Contacts in Phonebook:\n";
        std::cout << "----------------------------------\n";
        std::cout << "| Index |  First Name | Last Name  | Nickname   |\n";
        std::cout << "----------------------------------\n";
        for (int i = 0; i < length; i++)
        {
            std::cout << "| ";
            std::cout.width(6);
            std::cout << std::left << i + 1 << " |";
            std::cout.width(12);
            std::cout << std::right << contacts[i].truncateText(contacts[i].getFirstName(), 10) << " |";
            std::cout.width(12);
            std::cout << std::right << contacts[i].truncateText(contacts[i].getLastName(), 10) << " |";
            std::cout.width(12);
            std::cout << std::right << contacts[i].truncateText(contacts[i].getNickname(), 10) << " |\n";
        }
        std::cout << "----------------------------------\n";
    }
}

void Phonebook::searchContact()
{
    if (length == 0)
    {
        std::cout << "Phonebook is empty.\n";
        return;
    }

    std::string index;
    std::cout << "Enter the index of the contact you want to display: ";
    std::getline(std::cin, index);
    int a = std::stoi(index);
    if (a < 1 || a > length)
    {
        std::cout << "Invalid index. Please try again.\n";
    }
    else
    {
        std::cout << "Contact Information:\n";
        std::cout << "----------------------------------\n";
        contacts[a - 1].displayContact();
    }
}

int main()
{
    Phonebook book;
    std::string input;

    while (true)
    {
        std::cout << "Enter a command : ";
        getline(std::cin, input);

        if (input == "ADD")
        {
            book.addContact();
        }
        else if (input == "SEARCH")
        {
            book.displayContacts();
            book.searchContact();
        }
        else if (input == "EXIT")
        {
            exit(0);
        }
        else
        {
            std::cout << "Invalid command. Please try again.\n";
        }
    }

    return 0;
}