

#include <iostream>
using namespace std;
int main() {

  int miles;
  int amount;
  int average;
  cout << "enter the miles for the rented vehicle ";
  cin >> miles;
  if (miles <= 100 && miles > 0) {
    amount = miles * 300;

    average = amount / miles;
    cout << "the amount for the journey is Mk " << amount
         << " the average cost of each mile  is Mk" << average << "/mile";

  } else if (miles > 100 && miles <= 300) {
    amount = (miles - 100) * 200 + (100 * 300);

    average = amount / miles;
    cout << "the amount for the journey is Mk " << amount
         << " the average cost of each mile  is Mk" << average << "/mile";
  } else if (miles > 300) {
    amount = (miles - 300) * 150 + (200 * 200) + (100 * 300);

    average = amount / miles;
    cout << "the amount for the journey is Mk " << amount
         << " the average cost of each mile  is Mk" << average << "/mile";
  } else {

    cout << " enter the right credintials please";
  }

  return 0;
}
