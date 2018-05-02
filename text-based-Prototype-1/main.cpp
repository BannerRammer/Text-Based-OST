#include <iostream>
#include <fstream>
#include <string>


/* Hey guys, this is the code for the operating system, if you want to run the program then go to the description of the github respository to read the following instructions */
using namespace std;

// The Login System

bool IsLoggedIN() {
   string username, password, un, pw;

    cout<<"Please Enter Username: "; cin >> username;
    cout<<"Please Enter Password: "; cin >> password;

    ifstream read("data\\" + username + ".txt");
   getline(read, un);
   getline(read, pw);

   if (un == username && pw == password) {
     return true;
   } else {
      return false;
   }
}

int main () {
   int choice;
    
    std::cout<<"1: Register\n2: Login\nYour Choice: "; cin >> choice;
    
    if (choice == 1) {
        string username, password;
        cout<<"Type in An Unexisting Username: "; cin >> username;
        cout<<"Type in An Unexisting Password: "; cin >> password;
        
        ofstream file;
        file.open("data\\" + username + ".txt");
        file << username << endl << password;
        file.close();
        
        main();
    } else if (choice == 2) {
        bool status = IsLoggedIN();
        
        if (!status) {
            cout <<"Invalid Username and Password!" << endl;
            system("PAUSE");
            return 0;
        } else {
            // The Desktop
            int choice2;
            int computerProgram;
            int computerProgram2;
            int computerProgram3;
            int back;
            cout <<"Succesfully Logged In\n" << endl;
            cout <<"1. About Operating System\n2. Computer Conversations\nYour Choice: " << endl;
            scanf("%d", &choice2);
            
            if (choice2 == 1) {
                std::cout<<"Operating System Name: TB OST\nVersion: 1.0.0\nReturn to Desktop Please Press 9: " << endl;
                scanf("%d", &choice2);
            }
            if (choice2 == 2) {
                std::cout<<"Welcome to Computer Conversations\nHello User\n1. Hello Computer\n2. Quit\nYour Choice: " << endl;
                scanf("%d", &computerProgram);
                if (computerProgram == 2) {
                    return 0;
                }
                if (computerProgram == 1) {
                    std::cout<<"Hello, How was your day?\n1. Good, How was Yours?\n2. Not So Good, How was yours?\n3. Quit\nYour Choice: " << endl;
                    scanf("%d", &computerProgram2);
                    if (computerProgram2 == 3) {
                        return 0;
                    }
                    if (computerProgram2 == 2) {
                        std::cout<<"Pretty Good, So how is your computer so far?\n1. Pretty Good\n2. Not So Bad\n3. Very Bad\n4. Quit\nYour Choice: " << endl;
                        scanf("%d", &computerProgram3);
                    }
                    if (computerProgram2 == 1) {
                        std::cout<<"Not So Bad, So how is your computer so far?\n1. Pretty Good\n2. Not So Bad\n3. Very Bad\n4. Quit\nYour Choice: " << endl;
                        scanf("%d", &computerProgram3);
                    }
                    if (computerProgram3 == 1) {
                        std::cout<<"Awesome! We can make this system better next time. Thanks for the Feedback\nPress 2 to go back to Desktop: " << endl;
                        scanf("%d", &back);
                    }
                    if (computerProgram3 == 2) {
                        std::cout<<"Well I hope we can improve the system next Time. Thanks for the Feedback\nPress 2 to go back to Desktop: " << endl;
                        scanf("%d", &back);
                    }
                    if (back == 2) {
                        cout <<"Succesfully Logged In\n" << endl;
                        cout <<"1. About Operating System\n2. Computer Conversations\nYour Choice: " << endl;
                        scanf("%d", &choice2);
                    }
                    if (choice2 == 9) {
                        cout <<"Succesfully Logged In\n" << endl;
                        cout <<"1. About Operating System\nYour Choice: " << endl;
                        scanf("%d", &choice2);
                    }
                }
            }
        }
    }
}


