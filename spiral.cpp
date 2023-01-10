#include <iostream>
#include <iomanip>

    using namespace std;

    int main(){
        int N=0;
        cout << "N = ";
        cin >> N;
        int n;
        do{
            cout << "n = ";
            cin >>  n;

        }while (n < 1 || N < n);

        int a[N][N];
        int k = 1;
        int i = 0;
        int j = 0;
        while (k <= n*n){

            a[i][j] = k;
            if (i <= j + 1 && i + j < n - 1)
                ++j;
            else if (i < j && i + j >= n - 1)
                ++i;
            else if (i >= j && i + j > n - 1)
            --j;
            else
            --i;
            ++k;
        }

        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j)
                cout << setw(4) << a[i][j];
            cout << endl;
        }
    }