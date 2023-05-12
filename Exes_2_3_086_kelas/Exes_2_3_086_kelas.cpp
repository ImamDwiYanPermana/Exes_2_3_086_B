#include <iostream>
using namespace std;

int Imam[118];
int n;
int i;

void input() {
    while (true) {
        cout << "Masukan Data Imam Dwi Yan Permana :";
        cin >> n;
        if ((n > 0) && (n <= 118))
            break;
        else
            cout << "\nData Imam min 0 Max 118.\n\n";
    }
    cout << "\n-----------\n";
    cout << "Data Imam \n";
    cout << "-------------\n";

    for (i = 0; i < n; i++) {
        cout << "<" << (i + 1) << ">";
        cin >> Imam[i];
    }
}

void BinearySearch() {
    cout << "\n enter Untnuk Mencari data Imam Dwi Yan Permana\n";
    char ch;
    int item;
    cin >> item;
    
    do {
        int yan = 0;
        int dwi = n-1;
        int mid; bool found = false;

        while (yan <= dwi) {
            mid = (yan + dwi) / 2;
            if (yan == item) {
                found = true;
                break;
            }
            else if (Imam[mid] < item) {
                yan = mid + 1;
            }
            else {
                dwi = mid - 1;
            }
        }
        if (found) {
            cout << "\nitem<<" "mencari posisi" << (mid + 1) << endl;
        }
        else {
            cout << "\n" << item << " tidak di temukan\n ";
        }
        cout << "kemabli mencari y/n: ";
        cin >> ch;
    } while (ch == 'y' || ch == 'y');
}   

int main()
{
    input();
    BinearySearch();
}


