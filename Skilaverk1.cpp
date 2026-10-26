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

void nr2(int fylki[26]){
    cout << "þú keyrði nr2\n";
    for (int i = 0; i < 26; i++)  
        cout << char('A' + i) << ": " << fylki[i] << endl;
}

void nr3(int fylki[26]){
    int biggest = fylki[0];
    cout << "þú keyrði nr3\n";
    for (int i = 1; i < 26; i++){
        if (fylki[i] > biggest){
            biggest = fylki[i];
        }
    }
    cout << "Kem oftast er nr: " << biggest << "\n";
}

void nr4(int fylki[26]){
    cout << "þú keyrði nr4\n";
    int smallest = fylki[0];
    cout << "þú keyrði nr3\n";
    for (int i = 1; i < 26; i++){
        if (fylki[i] < smallest){
            smallest = fylki[i];
        }
    }
    cout << "Kem minst er nr: " << smallest << "\n";
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
        cout << "1. Sýna stafratöfluna\n2. Sýna fjölda af hverjum staf\n3. Sýna stafinn sem er algengastur\n4. Sýna stafinn sem er sjaldgæfastur.\n0. Hætta\n Sláðu inn tölu: ";
        cin >> awnser;
        switch(awnser){
            case 0:
                cout << "Þú hætti";
                break;
            case 1:
                nr1(stafafylki);
                break;
            case 2:
                nr2(talningafylki);
                break;
            case 3:
                nr3(talningafylki);
                break;
            case 4:
                nr4(talningafylki);
                break;
            default:
                cout << "þetta er ekki val.\nReyndu aftu\nr";
        }
    } while (awnser != 0);

}
