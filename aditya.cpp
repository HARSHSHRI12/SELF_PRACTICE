include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a contact
struct Contact {
    char name[50];
    char phone[20];
    char email[50];
};

// Function to add a new contact
void addContact(struct Contact *contacts, int *numContacts) {
    printf("Enter name: ");
    scanf("%s", contacts[*numContacts].name);
    printf("Enter phone number: ");
    scanf("%s", contacts[*numContacts].phone);
    printf("Enter email: ");
    scanf("%s", contacts[*numContacts].email);
    (*numContacts)++;
}

// Function to display all contacts
void displayContacts(const struct Contact *contacts, int numContacts) {
printf("\nContacts:\n");
    for (int i = 0; i < numContacts; i++) {
        printf("Name: %s\nPhone: %s\nEmail: %s\n\n", contacts[i].name, contacts[i].phone, contacts[i].email);
    }
}

int main() {
    struct Contact contacts[100];  // Assuming a maximum of 100 contacts
    int numContacts = 0;
    int choice;

    do {
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (numContacts < 100) {
                    addContact(contacts, &numContacts);
                } else {
                    printf("Maximum contacts reached.\n");
                }
                break;
            case 2:
                displayContacts(contacts, numContacts);
                break;
            case 3:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 3)

    return 0;
    
}
