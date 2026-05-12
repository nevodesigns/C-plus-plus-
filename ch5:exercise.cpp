#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

/* 
Chapter 5 Exercise
Write a contact book program using everything from Phase 1:

Create two std::vectors — one for names (string), one for phone numbers (string)
Write a function void addContact(vector<string>& names, vector<string>& phones, const string& name, const string& phone) that adds a contact
Write a function void listContacts(const vector<string>& names, const vector<string>& phones) that prints all contacts numbered from 1
Write a function int searchContact(const vector<string>& names, const string& query) that returns the index of a matching name, or -1 if not found
In main: add 3 contacts manually, list them, then ask the user to search by name and print the result


*/


void addContact(
    std::vector<std::string>& names, 
    std::vector<std::string>& phones,
    const std::string& name, 
    const std::string& phone){
  
        names.push_back(name);
        phones.push_back(phone);
    }

void listContacts(
    const std::vector<std::string>& names, 
    const std::vector<std::string>& phones){
        for(int i=0; i<names.size(); i++){
            std::cout<<i+1<<"."<<names[i]<<" "<<phones[i]<<std::endl;   
        }
    }    
int searchContact(const std::vector<std::string>& names, const std::string& query) {
    for (int i = 0; i < names.size(); i++) {
        if (names[i] == query) {
            return i;
        }
    }
    return -1;
}

    
int main(){


   std::vector<std::string> name;
    std::vector<std::string> phone_number;

    addContact(name, phone_number, "robo",  "123");
    addContact(name, phone_number, "robo2", "1234");
    addContact(name, phone_number, "robo3", "12345");

    listContacts(name, phone_number);

    std::string query;
    std::cout << "Search by name: ";
    std::cin >> query;

    int index = searchContact(name, query);
    std::cout << "Search result: " << index << std::endl;   
  










    return 0;
}
