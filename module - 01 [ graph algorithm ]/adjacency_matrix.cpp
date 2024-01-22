#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n, e, x, y;

      cin >> n >> e;

      int a[n][e];

      memset(a, 0, sizeof(a));

      while (e--)
      {
            cin >> x >> y;

            a[x][y] = 1;
            a[y][x] = 1;
      }

      for (int i = 0; i < n; i++)
      {
            for (int j = 0; j < n; j++)
                  cout << a[i][j] << ' ';

            cout << endl;
      }

      return 0;
}