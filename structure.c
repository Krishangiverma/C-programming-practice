//enter address(house no,block,city,state )of 5 
#include <stdio.h>
#include <string.h>

struct address {
    int house_no;
    char block[30];
    char city[30];
    char state[30];
};

int main() {
    struct address people[5];

    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for person %d:\n", i + 1);

        printf("House No: ");
        scanf("%d", &people[i].house_no);
        getchar(); // clear newline after number input

        printf("Block: ");
        fgets(people[i].block, sizeof(people[i].block), stdin);
        people[i].block[strcspn(people[i].block, "\n")] = '\0'; // remove trailing newline

        printf("City: ");
        fgets(people[i].city, sizeof(people[i].city), stdin);
        people[i].city[strcspn(people[i].city, "\n")] = '\0';

        printf("State: ");
        fgets(people[i].state, sizeof(people[i].state), stdin);
        people[i].state[strcspn(people[i].state, "\n")] = '\0';
    }

    printf("\nStored Addresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nPerson %d:\n", i + 1);
        printf("House No: %d\n", people[i].house_no);
        printf("Block: %s\n", people[i].block);
        printf("City: %s\n", people[i].city);
        printf("State: %s\n", people[i].state);
    }

    return 0;
}



