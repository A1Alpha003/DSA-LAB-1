//Task 1

/*
//Part A
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Registration No.: \t 231250" << endl;
	cout << "Name: \t \t \t Anas Zeeshan" << endl;
	cout << "Degree Program: \t BSCYS" << endl;

    return 0;

}
*/

/*
//Pert B
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int regid;
	string fname, lname, degree;
	
	cout << "Enter Your Registration ID:" << endl;
	cin >> regid;
	cout << "Enter Your First Name:" << endl;
	cin >> fname;
	cout << "Enter Your Last Name:" << endl;
	cin >> lname;
	cout << "Enter Your Dgree:" << endl;
	cin >> degree;

	cout << "Registration No.: \t " << regid << endl;
	cout << "Name: \t \t \t " << fname << " " << lname << endl;
	cout << "Degree Program: \t " << degree << endl;

    return 0;

}
*/

/*
//Part C
#include <iostream>
#include <cmath>

using namespace std;

void Calculator() {

    float ex = 0;
    float ex2 = 0;

    cout << "Enter two numbers \n";
    cin >> ex >> ex2;
    char choice = '0';
    
    cout << "Which operation do you want to perform?\n";
    cin >> choice;

    if (choice == '+') {
        cout << ex + ex2;
    }

    else if (choice == '-') {
        cout << ex - ex2;
    }

    else if (choice == '*') {
        cout << ex * ex2;
    }

    else if (choice == '/') {
        if (ex2 > 0) {
            cout << ex / ex2;
        }

        else {
            cout << "Error, Please enter a number greater than 0.\n";
        }
    }

    else {
        cout << "Error.\n";
        cout << "For multiplication *\n";
        cout << "For divide /\n";
        cout << "For add + \n";
        cout << "For subtract - \n";
    }
}

int main(){

    char choice = 'y';

    while (choice == 'y') {
        Calculator();
        cout << "\n";
        cout << "Whould You Like To Use The Calculator Again? \n";
        cout << "(y/n) \n";
        cin >> choice;
    }

    return 0;

}
*/

/*
//Part D
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a, b, c, discriminant, root1, root2;

    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    // Calculating the discriminant
    discriminant = b * b - 4 * a * c;

    // Checking if the roots are real or complex
    if (discriminant > 0) {
        // Two real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        // One real root
        root1 = -b / (2 * a);
        cout << "Roots are real and the same." << endl;
        cout << "Root = " << root1 << endl;
    }
    else {
        // Complex roots (for simplicity, we'll skip complex part)
        cout << "The equation has complex roots." << endl;
    }

    return 0;
}
*/

//Task 2

/*
//Part A
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int numbers[5];
    int smallest, largest;

    cout << "Enter five numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    smallest = largest = numbers[0];

    for (int i = 1; i < 5; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    cout << "Smallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;

    return 0;
}
*/

/*
//Part B
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int grade;
    char letterGrade;
    string modifier = "";

    cout << "Enter the numeric grade: ";
    cin >> grade;

    if (grade >= 91 && grade <= 100) {
        letterGrade = 'A';
    } else if (grade >= 81 && grade <= 90) {
        letterGrade = 'B';
    } else if (grade >= 71 && grade <= 80) {
        letterGrade = 'C';
    } else if (grade >= 61 && grade <= 70) {
        letterGrade = 'D';
    } else {
        letterGrade = 'F'; 
    }

    if (letterGrade != 'F') {
        int lastDigit = grade % 10;

        if (lastDigit >= 1 && lastDigit <= 3) {
            modifier = "-";
        } else if (lastDigit >= 8 || lastDigit == 0) {
            modifier = "+";
        } else {
            modifier = "";  
        }
    }

    cout << "The grade is: " << letterGrade << modifier << endl;

    return 0;
}
*/

/*
//Part C
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int numCalls, numSMS;
    double callCharges, smsCharges, total, discount = 0, gst;

    cout << "Enter the number of calls made: ";
    cin >> numCalls;
    cout << "Enter the number of SMS sent: ";
    cin >> numSMS;

    if (numCalls < 100) {
        callCharges = numCalls * 10; 
    }
    else {
        callCharges = numCalls * 9; 
    }

    if (numSMS < 100) {
        smsCharges = numSMS * 1;
    }
    else {
        smsCharges = numSMS * 0.9;
    }

    total = callCharges + smsCharges;

    if (numCalls > 200 || numSMS > 200) {
        discount = 50;
    }

    total -= discount;

    gst = total * 0.165;

    total += gst;

    cout << "Total bill after discount and GST: " << total << " Rs" << endl;

    return 0;
}
*/