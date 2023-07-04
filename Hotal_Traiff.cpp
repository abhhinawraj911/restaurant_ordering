// Restaurant Ordring System

#include<bits/stdc++.h>
using namespace std;

class menu{

    public:
    void userip(){

        int num;
        cout << "Enter Your Dezierd Item code : ";
        cin >> num;
    }
    void opt(){

        int n;
        cout << endl << "Please Select an Option : " << endl;
        cout << endl;
        cout << "\t1. Dine- IN" << endl;
        cout << endl;
        cout << "\t2. Delivery" << endl;
        cout << endl;
        cout << "\t3. Exit" << endl;
        cout << endl;
        cout << "Enter Your Option : ";
        cin >> n;

        if(n == 1){
            din();
        }
        else if (n == 2){
            dvy();
        }
        else if (n == 3){
            Greet();
        }
        else{
            cout << "Please Enter a Valid Input" << endl;
            opt();
        }

    }
    void din(){
        int code;
        int O_code;
        cout << endl;
        cout << "Menu : " << endl;
        cout << "\t1. Dal makhani       //Code - 102\\" << endl;
        cout << "\t2. Pizza             //Code - 112\\" << endl;
        cout << "\t3. Dhokla            //Code - 231\\" << endl;
        cout << "\t4. Burger            //Code - 101\\" << endl;
        cout << "\t5. Vada pav          //Code - 242\\" << endl;
        cout << "\t6. Stuffed paratha   //Code - 232\\" << endl;
        cout << endl << "Enter Your Food Code : ";
        cin >> code;
        cout << endl;

        switch (code)
        {
        case 102:
            Order(102);
            break;
        case 112:
            Order(112);
            break;
        case 231:
            Order(231);
            break;
        case 101:
            Order(101);
            break;
        case 242:
            Order(242);
            break;
        case 232:
            Order(232);
            break;
        
        default:
            cout << "Invalid Input Please Try Again" << endl;
            din();
            break;
        }
    }
    void Order(int O_code){

        cout << "\tYour Order is Successful " << O_code << endl;
        
        fstream myfile;
        myfile.open("Order.txt", ios::out | ios::app);
        
        if(myfile.is_open()){
            
            switch (O_code)
            {
            case 102:
                myfile << "Dal makhani" << endl;
                break;
            case 112:
                myfile << "Pizza" << endl;
                break;
            case 231:
                myfile << "Dhokla" << endl;
                break;
            case 101:
                myfile << "Burger" << endl;
                break;
            case 242:
                myfile << "Vada pav" << endl;
                break;
            case 232:
                myfile << "Stuffed paratha" << endl;
                break;
            }
        }
            cout << endl;
            cout << "Order Added to Your cart";
            cout << endl;

        dsby();

    }
    void dvy(){

        cout << endl << "Welcome To X&Z Delivery." << endl;
        din();
        ad();
    }
    void dsby(){

        int n;
        cout << endl << "Looking for Someting Else" << endl;
        cout << "\t1. Yes" << endl;
        cout << "\t2. No" << endl;
        cout << "Your Input : ";
        cin >> n;

        if(n == 1){
            din();
        }
        else if (n == 2){
            cout << endl << "Thank you" << endl;
            opt();
        }
        else{
            cout << endl << "Please Enter a Valid Input" << endl;
            dsby();
        }
    }
    void ad(){

        string s;
        int n;
        cout << endl << "Enter your full Address : ";
        cin >> s;
        cout << endl << "Enter your Pincode : ";
        cin >> n;

        fstream myfile;
        myfile.open("Order.txt", ios::out | ios::app);
        
        if(myfile.is_open()){

            myfile << "\n" << s << "\n" << n << endl;
        }
        
        cout << endl << "Thank you for Order" << endl;
        cout << "Your Order will be Deliered to " << s << " In 30 Min." << endl;

    }
    void Greet(){
        cout << endl << "Thank you, Please Come Again." << endl;
    }

};

int main(){

    cout << endl << "\tWelcome to X & Z Restraa." << endl;
    menu m;
    m.opt();

}