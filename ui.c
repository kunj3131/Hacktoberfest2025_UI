#include <stdio.h>
#include <stdlib.h>

void display_ui() {
    system("clear");  // use "cls" on Windows if needed
    printf("🎨 UI COMPONENT SHOWCASE — Hacktoberfest 2025 🚀\n\n");
    printf("Choose a button:\n");
    printf(" [1] 🔄 Refresh\n");
    printf(" [2] 💾 Save\n");
    printf(" [3] ❌ Exit\n\n");
}

void handle_action(int choice) {
    switch (choice) {
        case 1:
            printf("🔄 Refresh button clicked! Data reloaded.\n");
            break;
        case 2:
            printf("💾 Save button clicked! Changes saved successfully.\n");
            break;
        case 3:
            printf("👋 Exiting... Thanks for checking out this UI component.\n");
            exit(0);
        default:
            printf("⚠️ Invalid option. Please try again.\n");
    }
}

int main() {
    int input;

    while (1) {
        display_ui();
        printf("Enter your choice: ");
        scanf("%d", &input);

        printf("\n");
        handle_action(input);

        printf("\nPress Enter to continue...\n");
        getchar(); // clear leftover newline
        getchar(); // wait for enter
    }

    return 0;
}
