#include <iostream>
#include <cmath>

using namespace std;


int main() {
  unsigned long long int n, m, a;
  cin >> n >> m >> a;

  cout << 1ULL * ((n + a - 1) / a) * ((m + a - 1)/ a) << endl;
  return 0;
}