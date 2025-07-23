#include <cmath>
#include <iostream>
using namespace std;

int main() {

    int wordCounts, remaining, wordLimit = 1000;;

    cout<<"Enter wordCounts: "; cin>>wordCounts;
    remaining = wordLimit - wordCounts;

    if (wordCounts < wordLimit) {
        cout<<"You have "<< remaining<<" words remaining.";
        cout<<"You have "<< remaining<<" words remaining.";
    }
    else if (wordCounts == wordLimit) cout<<"Congratulations, you have reached your words limit!";
    else cout<<"You have exceeded your limits by "<<remaining * -1<<" words!";

    return 0;
}
