#include <iostream> 
#include <cmath>
using namespace std;
int getPerson() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    return age;
}
void checkVotingEligibility(int age) {
    const int votingAge = 18;
    if (age >= votingAge) {
        cout << "You are eligible to vote." << endl;
    } else if (age >= 0) {
        cout << "You are allowed to vote after " << votingAge - age << " years." << endl;
    } else {
	    cout << "Invalid age entered. Please enter a valid age." << endl;
    }
}
int main() {
    int age = getPerson();
    checkVotingEligibility(age);

    return 0;
}
