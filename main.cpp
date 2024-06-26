#include "fun.h"

vector <string> urls;
map <string, vector<int>> sarasas;

int main() {

    string failoPasirinkimas = GautiPasirinkima();

    while (!ArAtsidaro(failoPasirinkimas)) {
        cout << "Pasirinkto failo nepavyko atidaryti. Bandykite pasirinkti kita faila." << endl;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Iveskite naujo failo pavadinima: " << endl;
        cin >> failoPasirinkimas;
        if (failoPasirinkimas.size() < 4 || failoPasirinkimas.substr(failoPasirinkimas.size() - 4) != ".txt")
            failoPasirinkimas += ".txt";
    }
    cout << "\nPalaukite kol failas bus nuskaitytas..." << endl;
    failoSkaitymas(failoPasirinkimas, sarasas, urls);
    cout << "\nFailas nuskaitytas. Rezultatus rasite faile " << "rezultatai.txt" << endl;
    rasymas (sarasas, urls);

}