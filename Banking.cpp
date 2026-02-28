#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include <vector>

using namespace std;

// ==========================================
// ACCOUNT CLASS
// ==========================================
class Account {
    int acno;
    char name[50];
    int deposit;
    char type;

public:
    void create_account();    // Get data from user
    void show_account() const; // Display data
    void modify();            // Update data
    void dep(int);            // Add amount
    void draw(int);           // Subtract amount
    void report() const;      // Tabular data row
    int retacno() const;      // Return account number
    int retdeposit() const;   // Return balance
    char rettype() const;     // Return account type
};

void Account::create_account() {
    cout << "\nEnter Account No. : ";
    cin >> acno;
    cout << "Enter Name of Account Holder: ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "Enter Type of Account (S/C): ";
    cin >> type;
    type = toupper(type);
    cout << "Enter Initial Amount (>=500 for S, >=1000 for C): ";
    cin >> deposit;
    cout << "\n\nAccount Created Successfully!";
}

void Account::show_account() const {
    cout << "\nAccount No. : " << acno;
    cout << "\nAccount Holder Name : " << name;
    cout << "\nType of Account : " << type;
    cout << "\nBalance amount : " << deposit;
}

void Account::modify() {
    cout << "\nAccount No. : " << acno;
    cout << "\nModify Account Holder Name : ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "Modify Type of Account : ";
    cin >> type;
    type = toupper(type);
    cout << "Modify Balance amount : ";
    cin >> deposit;
}

void Account::dep(int x) { deposit += x; }
void Account::draw(int x) { deposit -= x; }
void Account::report() const {
    cout << acno << setw(10) << " " << name << setw(10) << " " << type << setw(6) << deposit << endl;
}
int Account::retacno() const { return acno; }
int Account::retdeposit() const { return deposit; }
char Account::rettype() const { return type; }

// ==========================================
// FUNCTION PROTOTYPES
// ==========================================
void write_account();
void display_sp(int);
void modify_account(int);
void delete_account(int);
void display_all();
void deposit_withdraw(int, int);
void intro();

// ==========================================
// MAIN MENU
// ==========================================
int main() {
    char ch;
    int num;
    intro();
    do {
        system("cls"); // Use "clear" for Linux/Mac
        cout << "\n\n\n\tMAIN MENU";
        cout << "\n\n\t01. NEW ACCOUNT";
        cout << "\n\n\t02. DEPOSIT AMOUNT";
        cout << "\n\n\t03. WITHDRAW AMOUNT";
        cout << "\n\n\t04. BALANCE ENQUIRY";
        cout << "\n\n\t05. ALL ACCOUNT HOLDER LIST";
        cout << "\n\n\t06. CLOSE AN ACCOUNT";
        cout << "\n\n\t07. MODIFY AN ACCOUNT";
        cout << "\n\n\t08. EXIT";
        cout << "\n\n\tSelect Your Option (1-8): ";
        cin >> ch;

        switch (ch) {
        case '1': write_account(); break;
        case '2':
            cout << "\n\n\tEnter The account No. : "; cin >> num;
            deposit_withdraw(num, 1); break;
        case '3':
            cout << "\n\n\tEnter The account No. : "; cin >> num;
            deposit_withdraw(num, 2); break;
        case '4':
            cout << "\n\n\tEnter The account No. : "; cin >> num;
            display_sp(num); break;
        case '5': display_all(); break;
        case '6':
            cout << "\n\n\tEnter The account No. : "; cin >> num;
            delete_account(num); break;
        case '7':
            cout << "\n\n\tEnter The account No. : "; cin >> num;
            modify_account(num); break;
        case '8': cout << "\n\n\tThanks for using Bank Management System!"; break;
        default: cout << "\a";
        }
        cin.ignore();
        cin.get();
    } while (ch != '8');
    return 0;
}

// ==========================================
// LOGIC IMPLEMENTATIONS
// ==========================================

void write_account() {
    Account ac;
    ofstream outFile;
    outFile.open("bank_data.dat", ios::binary | ios::app);
    ac.create_account();
    outFile.write(reinterpret_cast<char*>(&ac), sizeof(Account));
    outFile.close();
}

void display_sp(int n) {
    Account ac;
    bool flag = false;
    ifstream inFile;
    inFile.open("bank_data.dat", ios::binary);
    if (!inFile) { cout << "File could not be open !! Press any Key..."; return; }
    
    while (inFile.read(reinterpret_cast<char*>(&ac), sizeof(Account))) {
        if (ac.retacno() == n) {
            ac.show_account();
            flag = true;
        }
    }
    inFile.close();
    if (flag == false) cout << "\n\nAccount number does not exist";
}

void display_all() {
    Account ac;
    ifstream inFile;
    inFile.open("bank_data.dat", ios::binary);
    if (!inFile) { cout << "File could not be open !! Press any Key..."; return; }
    
    cout << "\n\n\t\tACCOUNT HOLDER LIST\n\n";
    cout << "====================================================\n";
    cout << "A/c no.      NAME           Type  Balance\n";
    cout << "====================================================\n";
    while (inFile.read(reinterpret_cast<char*>(&ac), sizeof(Account))) {
        ac.report();
    }
    inFile.close();
}

void deposit_withdraw(int n, int sel) {
    int amt;
    bool found = false;
    Account ac;
    fstream File;
    File.open("bank_data.dat", ios::binary | ios::in | ios::out);
    if (!File) { cout << "File could not be open !! Press any Key..."; return; }
    
    while (!File.eof() && found == false) {
        File.read(reinterpret_cast<char*>(&ac), sizeof(Account));
        if (ac.retacno() == n) {
            ac.show_account();
            if (sel == 1) {
                cout << "\n\n\tTO DEPOSIT AMOUNT ";
                cout << "\nEnter Amount: "; cin >> amt;
                ac.dep(amt);
            }
            if (sel == 2) {
                cout << "\n\n\tTO WITHDRAW AMOUNT ";
                cout << "\nEnter Amount: "; cin >> amt;
                int bal = ac.retdeposit() - amt;
                if ((bal < 500 && ac.rettype() == 'S') || (bal < 1000 && ac.rettype() == 'C'))
                    cout << "Insufficient balance";
                else
                    ac.draw(amt);
            }
            int pos = (-1) * static_cast<int>(sizeof(ac));
            File.seekp(pos, ios::cur);
            File.write(reinterpret_cast<char*>(&ac), sizeof(Account));
            cout << "\n\n\t Record Updated";
            found = true;
        }
    }
    File.close();
    if (found == false) cout << "\n\n Record Not Found ";
}

void delete_account(int n) {
    Account ac;
    ifstream inFile;
    ofstream outFile;
    inFile.open("bank_data.dat", ios::binary);
    if (!inFile) { cout << "File could not be open !! Press any Key..."; return; }
    outFile.open("Temp.dat", ios::binary);
    inFile.seekg(0, ios::beg);
    while (inFile.read(reinterpret_cast<char*>(&ac), sizeof(Account))) {
        if (ac.retacno() != n) {
            outFile.write(reinterpret_cast<char*>(&ac), sizeof(Account));
        }
    }
    inFile.close();
    outFile.close();
    remove("bank_data.dat");
    rename("Temp.dat", "bank_data.dat");
    cout << "\n\n\tRecord Deleted ..";
}

void modify_account(int n) {
    bool found = false;
    Account ac;
    fstream File;
    File.open("bank_data.dat", ios::binary | ios::in | ios::out);
    if (!File) { cout << "File could not be open !! Press any Key..."; return; }
    while (!File.eof() && found == false) {
        File.read(reinterpret_cast<char*>(&ac), sizeof(Account));
        if (ac.retacno() == n) {
            ac.show_account();
            cout << "\n\nEnter The New Details of account" << endl;
            ac.modify();
            int pos = (-1) * static_cast<int>(sizeof(ac));
            File.seekp(pos, ios::cur);
            File.write(reinterpret_cast<char*>(&ac), sizeof(Account));
            cout << "\n\n\t Record Updated";
            found = true;
        }
    }
    File.close();
    if (found == false) cout << "\n\n Record Not Found ";
}

void intro() {
    cout << "\n\n\n\t  BANK";
    cout << "\n\n\tMANAGEMENT";
    cout << "\n\n\t  SYSTEM";
    cout << "\n\n\n\nMADE BY : YOUR NAME";
    cin.get();
}