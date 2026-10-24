#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void nr1(char fylki[10][10]){
    cout << "þú keyrði nr1\n";
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            cout << fylki[i][j] << " ";
        }
        cout << endl;
    }

}

void nr2(char fylki[10][10]){
    cout << "þú keyrði nr2\n";
}

void nr3(char fylki[10][10]){
    cout << "þú keyrði nr3\n";
}

void nr4(char fylki[10][10]){
    cout << "þú keyrði nr4\n";
}

int main(){
    char stafafylki[10][10];
    int talningafylki[26] = {0};

    for (int i = 0; i <10; i++){
        for (int j = 0; j<10; j++){
            int random_tala = rand() % 26;
            stafafylki[i][j] = 'A' + random_tala;
            talningafylki[random_tala]++;
        }
    }
    int awnser;
    do {
        cout << "1. Sýna stafratöfluna\n2. Sýna fjölda af hverjum staf\n3. Sýna stafinn sem er algengastur\nSýna stafinn sem er sjaldgæfastur.\n0. Hætta\n Sláðu inn tölu: ";
        cin >> awnser;
        switch(awnser){
            case 0:
                cout << "Þú hætti";
                break;
            case 1:
                nr1(stafafylki);
                break;
            case 2:
                nr2(stafafylki);
                break;
            case 3:
                nr3(stafafylki);
                break;
            case 4:
                nr4(stafafylki);
                break;
            default:
                cout << "þetta er ekki val.\nReyndu aftu\nr";
        }
    } while (awnser != 0);

}
