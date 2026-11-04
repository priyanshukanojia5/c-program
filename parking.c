#include <stdio.h>
#include <string.h>

#define MAX 100        
#define DEFAULT_SLOTS 50   

struct Car {
    char carNumber[20];
    int isParked;          
};

void parkCar(struct Car parking[], int totalSlots);
void exitCar(struct Car parking[], int totalSlots);
void showParking(struct Car parking[], int totalSlots);

int main() {
    int choice;
    int totalSlots = DEFAULT_SLOTS;  

    struct Car parking[MAX] = {0};   

    while (1) {
        printf("\n===== VEHICLE PARKING SYSTEM =====\n");
        printf("Total Available Slots: %d\n", totalSlots);
        printf("1. Park a Car\n");
        printf("2. Exit a Car\n");
        printf("3. Show Parking Record\n");
        printf("4. Exit Program\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                parkCar(parking, totalSlots);
                break;
            case 2:
                exitCar(parking, totalSlots);
                break;
            case 3:
                showParking(parking, totalSlots);
                break;
            case 4:
                printf("Exiting... Thank you!\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}


void parkCar(struct Car parking[], int totalSlots) {
    int i;
    char carNum[20];

    for (i = 0; i < totalSlots; i++) {
        if (parking[i].isParked == 0) {

            printf("Enter Car Number: ");
            scanf("%s", carNum);

            strcpy(parking[i].carNumber, carNum);
            parking[i].isParked = 1;

            printf("Car %s parked at Slot %d\n", carNum, i + 1);
            return;
        }
    }

    printf("Parking Full! No empty slots.\n");
}

void exitCar(struct Car parking[], int totalSlots) {
    char carNum[20];
    int i;

    printf("Enter Car Number to exit: ");
    scanf("%s", carNum);

    for (i = 0; i < totalSlots; i++) {
        if (parking[i].isParked == 1 && strcmp(parking[i].carNumber, carNum) == 0) {
            parking[i].isParked = 0;
            printf("Car %s exited from Slot %d\n", carNum, i + 1);
            return;
        }
    }

    printf("Car not found in parking!\n");
}

void showParking(struct Car parking[], int totalSlots) {
    int i, count = 0;

    printf("\n--- PARKING STATUS ---\n");

    for (i = 0; i < totalSlots; i++) {
        if (parking[i].isParked == 1) {
            printf("Slot %d : %s\n", i + 1, parking[i].carNumber);
            count++;
        }
    }
    
    if (count == 0)
        printf("No cars parked.\n");
}