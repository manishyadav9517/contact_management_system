# Contact Management System

This is a simple contact management system that allows you to:

* Add contacts
* Display all contacts
* Search by name
* Search by phone number
* Update contacts
* Delete contacts
* Delete all contacts
* Get the number of contacts

## Requirements

* C++ compiler
* CMake

## Installation

1. Clone the repository
2. Create a build directory
3. Run CMake

mkdir build
cd build
cmake ..


4. Build the project

make


## Usage

The application can be run by running the `contact_management_system` executable.

./contact_management_system

The application will display a menu of options. You can select an option by entering the corresponding number.

Example Usage
To add a new contact, you would select option 1. You would then be prompted to enter the contact's name, phone number, and email address.

To display all contacts, you would select option 2. The application will display a list of all contacts.

To search for contacts by name, you would select option 3. You would then be prompted to enter the contact's name. The application will display a list of all contacts that match the name.

To search for contacts by phone number, you would select option 4. You would then be prompted to enter the contact's phone number. The application will display a list of all contacts that match the phone number.

To update a contact, you would select option 5. You would then be prompted to enter the contact's ID. The application will then prompt you to update the contact's name, phone number, or email address.

To delete a contact, you would select option 6. You would then be prompted to enter the contact's ID. The application will then delete the contact.

To delete all contacts, you would select option 7. The application will then delete all contacts.
