#include <iostream>
using namespace std;

int main() {

  int N, loc, smallestI, index;
  smallestI = 0;
  index = 0;
  cin >> N;

  int daysToLaunch[N];

  srand(time(NULL));

  for (int i = 0; i < N; i++) {
    daysToLaunch[i] = rand();
  }

  for (loc = index; loc < N; loc++) {

    if (daysToLaunch[loc] < daysToLaunch[smallestI]) {

      smallestI = loc;
    }
  }

  cout << smallestI << endl;
  return 0;
}