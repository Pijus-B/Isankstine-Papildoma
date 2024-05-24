# Isankstine-Papildoma
Egzamino (išankstinė) užduotis

# Programos veikimas
1. Paleidus programą į terminalą, išspausdinami programos kataloge esantys `.txt` failai ir vartotojas yra prašomas įvesti norimo nuskaityti failo pavadinimą.
2. Jei vartotojas pavadinimo nenurodo, programa nuskaito numatytąjį `text.txt` failą.
3. Nepavykus atidaryti nurodyto failo, vartotojui nurodoma įvesti kito failo pavadinimą.
4. Kiekviena teksto eilutė yra skaitoma pažodžiui:
   - Pirmiausia programa patikrtina, ar aptiktas žodis nėra internetinės svetainės adresas.
   - Jei žodis yra internetinės svetainės adresas - pridedamas į adresų sąrašą.
   - Jei nėra, tai žodį "sutvarko": nuima visus neraidinius simbolius ir paverčia mažosiomis raidėmis.
5. Nuskaičius failą bei suskaičiavus, kiek žodžiai kartojasi, rezultatai yra atspausdinami į numatytąjį `rezultatai.txt` failą:
   - Atspausdinami internetinių svetainių adresai ir jų kiekis.
   - Atspausdinami pasikartojantys žodžiai, jų pasikartojimo kiekis bei eilutės, kuriose galima aptikti pasikartojančius žodžius.

# Programos paleisties proceso instrukcijos
## 1 žingsnis: Instaliuoti Chocolatey
Atsidaryti CMD kaip Administrator: Spustelti Win + X ir pasirinkti “Command Prompt (Admin)” or “Windows PowerShell (Admin)”.
Paleisti instaliavimo komandą: nusikopijuoti ta komandą ir paspausti Enter. Ši komanda yra pasiekiama per Chocolatey svetainę.
Nusikopijuoti kodą:
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient). DownloadString('https://chocolatey.org/install.ps1')).
Patvirtinti instaliacija: irasyti choco i CMD ir paspausti Enter. Jeigu matote Chocolatey versijos informacija, tai jau yra instaliuota sekmingai.
## 2 žingsnis: Instaliuoti Make
Instaliuokite Make: CMD terminale (vis dar kaip Administrator), įrašykite šią komandą bei paspauskite Enter:
Nukopijuokite koda:
choco install make
Patvirtinkite Make instaliacija: įrašykite "make -v" i CMD. Jei po įrašymo rodo Make versijos informaciją, tai reiškia, kad sėkmingai instaliuota.
## 3 žingsnis: Kompiliuokite ir pradėkite savo C++ projektą
Nurodykite savo projekto direktyvą: naudokite cd komandą į CMD, jog pakeisti savo projekto direktyvą, kur yra instaliuotas Makefile.
Kompiliuokite savo projektą: Įrašykite make ir paspauskite Enter. Tada prades kompiliuoti jūsų C++ projektą pagal nurodytas Makefile instrukcijas.
Pradėkite savo projektą: Po kompiliavimo jūs turėtumete turėti vykdomąjį failą, dažniausiai vadinamą main arba kitu specifiškai pavadintu jūsų Makefile. Įrašykite main i CMD ir paspauskite Enter, kad pradėtumete savo programos veikimą.

