//
// Created by biezhihua on 2016/10/2.
//

#include <set>
#include <iostream>
#include <string>

using namespace std;

template<typename T>
void displayContents(const T &input) {
    for (auto item = input.cbegin(); item != input.cend(); item++) {
        cout << *item << endl;
    }
    cout << endl;
}

struct ContactItem {
    string strContactsName;
    string strPhoneNumber;
    string strDisplayRepresentation;

    // construct and destructor
    ContactItem(const string &strContactsName, const string &strPhoneNumber)
            : strContactsName(strContactsName), strPhoneNumber(strPhoneNumber),
              strDisplayRepresentation(strContactsName + ":" + strPhoneNumber) {

    }

    // used by set::find();
    bool operator==(const ContactItem &itemToCompare) const {
        return (itemToCompare.strContactsName == this->strContactsName);
    }

    bool operator<(const ContactItem &itemToCompare) const {
        return (this->strContactsName < itemToCompare.strContactsName);
    }


    // sed in displayContents via cout
    operator const char *() const {
        return strDisplayRepresentation.c_str();
    }
};

int main() {

    set<ContactItem> setContacts;
    setContacts.insert(ContactItem("Jack Welsch", "1"));
    setContacts.insert(ContactItem("Jack Welsch 1", "1"));
    setContacts.insert(ContactItem("Jack Welsch 2", "1"));
    setContacts.insert(ContactItem("Jack Welsch 3", "1"));
    setContacts.insert(ContactItem("Jack Welsch 4", "1"));

    displayContents(setContacts);

    cout << "Enter a person whose number you wish to delete:";
    string nameInput;
    getline(cin, nameInput);
    auto iContactFound = setContacts.find(ContactItem(nameInput, ""));

    if (iContactFound != setContacts.end()) {
        // Erase the contact found in set
        setContacts.erase(iContactFound);
        cout << "Displaying content after erasing :" << nameInput << endl;
        displayContents(setContacts);
    }else {
        cout << "Contact not found" << endl;
    }

    return 0;
}