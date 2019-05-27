#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
using namespace std;


int wiek;
int a;
int b;
int c;
int odw;
string odp;
string quiz;
string gracz1;
string gracz2;
string zwierze;
std::string opis;
string odpzwierz;
string kontynuacja;
string taq;
string taw;

int main()
{
 endo:
  char liczba = '1';

     while (liczba!='q')
        {
     system("cls");
    cout << "Witaj uzytkowniku! Co chcesz teraz zrobic? :)" << endl;
         cout << "1.Wykonac kilka dzialan matematycznych." << endl;
         cout << "2.Rozwiazac quiz wiedzy o c++." << endl;
         cout << "3.Odpowiedziec na prosty quiz wiedzy ogolnej." << endl;
         cout << "4.Krotka instrukcja" << endl;
         cout << "5.Posluchac ciekawostek (o komputerach :D)" << endl;
         cout << "6.Zagrac w kalambury" << endl;
         cout << "7.Zagrac w kalambury dla 2 osob" << endl;
         cout << "8.Rozwiazac zagadke" << endl;
         cout << "9.Kilka informacji o programie" << endl;
         cout << "Litera -q- oznacza wyjscie" << endl;
         cout << "*-*-*-UWAGA WPISUJ SAME LICZBY BEZ KROPEK-*-*-*" << endl;
          cin >> liczba;


       if(liczba=='1')
        {

          system("cls");
         cout << "Dobrze, zaczynajmy. Pamietaj, liczby nie beda nigdy wystepowac w tej samej kolejnosci." << endl;
         cout << "Zawsze mozesz wyjsc wpisujac -0-" << endl;
         srand(time(NULL));
           a = rand()%1000+1;
           b = rand()%1000+1;
           c = a+b;
         cout <<a;
         cout <<"+";
         cout <<b;
         cout << "=?"<< endl;
          cin >> odw;
         cout << "Odpowiedz to:" <<c<< endl;
          if (odw==0)
          {
            goto endo;
          }
         else if(odw==c)
           {
         cout << "Dobrze!" << endl;
         cout << "Kontynuowac?" << endl;
         cout << "tak/nie" << endl;
          cin >> taw;
           if(taw=="tak")
           {
          Sleep(5000);

         cout << "Poczekaj, wlaczam program od nowa..." << endl;

           }
         else
          {
        cout << "Okej..." << endl;
         return 0;
          }
           }
          else
           {
         cout << "Niestety, nie o ta liczbe chodzilo :(" << endl;
         Sleep(3000);
           }
         }


       else if(liczba=='2')
        {
           system("cls");
          cout << "Okej, ale ostrzegam, pytan nie bedzie duzo, beda one bardzo proste ;)" << endl;
          cout << "1.Jezeli stworze tablice w ktorej bedzie 1000 pomiarow. Ktory pomiar bedzie ostatni?" << endl;
          cout << "(liczba)" << endl;
           cin >> odp;
            if(odp=="999")
            {
           cout << "Dobrze! " << endl;
            Sleep(2000);
            system("cls");
           cout << "2.Co to za petla? W miejsce znaku x wstaw odpowiedz." << endl;
           cout << "x(int i=4; i>=-2; i--)..." << endl;
           cout << "Napisz litere:" << endl;
           cout << "a- To petla while" << endl;
           cout << "b- To petla for" << endl;
           cout << "c- To petla do...while" << endl;
            cin >> odp;
             if(odp=="d")
              {
             cout << "Dobrze! " << endl;
              Sleep(2000);
              system("cls");
             cout << "3.Czy ta petla zadziala? " << endl;
             cout << "for(int i=6; i==-2; i--)" << endl;
             cout << "a-Tak" << endl;
             cout << "b-Nie" << endl;
              cin >> odp;
               if(odp=="b")
                {
               cout << "Dobrze! " << endl;
                Sleep(2000);
                system("cls");
               cout << "4.Czy jesli wpisze do tego programu 5 5 5 program zadziala?:" << endl;
               cout << "cin>>z>>j>>m;" << endl;
               cout << "if ((z>j) && (z>m))" << endl;
               cout << "cout<<Najwiekasz liczba jest rowna: <<z;" << endl;
               cout << "if ((j>z) && (j>m))" << endl;
               cout << "cout<<Najwiekasz liczba jest rowna: <<j;" << endl;
               cout << "if ((m>z) && (m>j))" << endl;
               cout << "cout<<Najwiekasz liczba jest rowna: <<m;" << endl;
               cout << "a-Tak" << endl;
               cout << "b-Nie" << endl;
                cin >> odp;
                 if(odp=="b")
                  {
                 cout << "Dobrze! " << endl;
                  Sleep(2000);
                  system("cls");
                 cout << "5.Co sie stanie z ta petla po wlaczeniu programu?" << endl;
                 cout << "for(int i=-15; i<0; i=i-2);" << endl;
                 cout << "a-program sie wlaczy, wszystko jest dobrze" << endl;
                 cout << "b-wybuchnie" << endl;
                 cout << "c-bedzie trwal dosc dlugo, ale sie skonczy" << endl;
                 cout << "d-nie skonczy sie nigdy" << endl;
                  cin >> odp;
                   if(odp=="d")
                    {
                 cout << "Dobrze! " << endl;
                  Sleep(2000);
                  system("cls");
                 cout << "Gratulacje! Udalo Ci sie ukonczyc quiz z wiedzy o c++" << endl;
                 cout << "Jestes w tym niezly/niezla!" << endl;
                 cout << "Otrzymano nowy tytul:" << endl;
                 cout << "Mistrz c++" << endl;
                    }
                   else
                    {
                 cout << "Ojej, przykro mi, ale nie, to zla odpowiedz :(" << endl;
                    }


                  }
                 else
                  {
                 cout << "Niestety, to zla odpowiedz :(" << endl;
                  }



                }
               else
                {
               cout << "Zla odpowiedz :(" << endl;
                }



              }
             else
             {
             cout << "Niestety, nie..." << endl;
             }


            }
           else
            {
           cout << "Niestety, ale to nie o ta liczbe chodzi..." << endl;
            }

             }

       else if(liczba=='3')

        {
           system("cls");
          cout << "Okej, pytan bedzie 6, sa to pytania z wiedzy ogolnej, beda dosyc trudne, ale nie martw sie ;)" << endl;
          cout << "Pisz malymi literami" << endl;
          cout << "1.Najglebsze jezioro w Polsce to ..?" <<endl;
           cin >> quiz;
            if(quiz=="hancza")
             {
          cout << "Dobrze!" << endl;
          cout << "2.Jak poprawnie pisze sie nazwe tego tworzywa sztucznego?" <<endl;
          cout << "Styropian czy Steropian?" << endl;
           cin >> quiz;
            if(quiz=="styropian")
             {
          cout << "Dobrze!" << endl;
          cout << "3.Gdzie lezy Tranylwania?" <<endl;
           cin >> quiz;
            if(quiz=="rumunia")
             {
          cout << "Dobrze!" << endl;
          cout << "4.Za najstarsza flage na swiecie uwazana jest flaga:" <<endl;
          cout << "Dani, Szwecji, Wloch, Szwajcarii" << endl;
           cin >> quiz;
            if(quiz=="dani")
             {
          cout << "Dobrze!" << endl;
          cout << "5.Nie jest ryba, ale zyje w wodzie. Co to za zwierze?" <<endl;
           cin >> quiz;
            if(quiz=="delfin")
             {
          cout << "Dobrze!" << endl;
          cout << "6.Tworca obrazu przedstawiajacego sloneczniki" <<endl;
          cout << "Pisz ze spacjami malymi literami, pelne imie i nazwisko" << endl;
           cin >> quiz;
            if(quiz=="vincent van gogh")
             {
          cout << "Dobrze!" << endl;
          cout << "Gratulacje, ukonczyles quiz wiedzy ogolnej!" << endl;
          cout << "Osiagnales tytul:" << endl;
          cout << "Mistrz wiedzy ogolnej" << endl;
           Sleep(7000);
             }
           else
             {
          cout << "Niestety, ale nie :(" << endl;
             }
             }
           else
             {
          cout << "Zle :(" << endl;
             }
             }
           else
             {
          cout << "Niestety, ale nie :(" << endl;
             }
             }
           else
             {
          cout << "Niestety, to zla odpowiedz :(" << endl;
             }
             }
           else
             {
          cout << "Niestety, nie :(" << endl;
             }
             }
           else
             {
          cout << "Niestety, ale nie :(" << endl;
             }

             }

       else if(liczba=='4')
        {
           system("cls");
          cout << "Kliknij numer, abz wybrac, co chcesz odwiedzic :D" << endl;
          cout << "Nie powinno byc tu bledow, program sprawdzilam wieeele razy :3" << endl;
          cout << "(Na niektorych komputerach program moze sie zacinac, lub nie dzialac, ostrzegam :)" << endl;
          cout << "Gdzie teraz? ^-^" << endl;
           Sleep(5000);
        }

       else if(liczba=='5')
        {
           system("cls");
          cout << "Kilka ciekawostek o informatyce :D" << endl;
           system("cls");
          cout << "Wszystkiemu dalo poczatek powstanie komputera. Bylo to w roku 1946." << endl;
          cout << "Komputer nosil nazwe ENIAC. 14 lutego w Walentynki 1946 zaprezentowano go publicznie." << endl;
          cout << "ENIAC wazyl okolo 27 ton. Zajmowal powierzchnie 140 metrow kwadratowych." << endl;
          cout << "Skladal sie z ponad 18 tysiecy lamp elektronowych.Pierwszy komputer pobieral 140kW mocy." << endl;
          cout << "Czy mam kontynuowac? :D" << endl;
          cout << "tak/nie" << endl;
           cin >> taq;
            if(taq=="tak")
             {
           system("cls");
          cout << "Okej, czy wiesz, ze..." << endl;
          cout << "29 wrzesnia 1969 pierwsza w dziejach siec ruszyla," << endl;
          cout << "a pierwsze przeslane dane zostaly wyslane z Uniwersytetu kalifornijskiego (Los Angeles)" << endl;
          cout << "przez studenta-programiste, Charleya Kline'a dokladnie o 22:30 lokalnego czasu." << endl;
          cout << "Komputer zwal się SDS Sigma 7, zas odbiorcą był znajdujący się na Osrodku Badawczym Stanford model SDS 940." << endl;
          cout << "Co wlasciwie przeslano? Bylo to powszechne dzis slowo: login. I tak wlasnie rozpoczela sie" << endl;
          cout << "wymiana danych, najpierw lokalna, potem - globalna. Co zabawne, na skutek zawieszenia sie sieci, Stanford odebral" << endl;
          cout << "najpierw samo lo-, a dopiero... godzine pozniej -gin." << endl;
          cout << "1983- Od tego mniej wiecej czasu uzywa sie nazwy -Internet- " << endl;
          cout << "Czy mam kontynuowac? :D" << endl;
          cout << "tak/nie" << endl;
           cin >> taq;
            if(taq=="tak")
             {
           system("cls");
          cout << "Okej! Czy wiedziales, o tym, ze..." << endl;
          cout << "Deklarowaną misja Google jest skatalogowanie swiatowych zasobow informacji i uczynienie ich powszechnie dostepnymi i uzytecznymi" << endl;
          cout << "Teraz kilka smiesznych ciekawostek o firmie Google chcesz posluchac? :D" << endl;
          cout << "tak/nie" << endl;
           cin >> taq;
            if(taq=="tak")
             {
           system("cls");
          cout << "Google znane jest z wielu humorystycznych akcentow ukrytych w oferowanych"<< endl;
          cout << "uslugach, a takze z czesto zlozonych zartow primaaprilisowych, takich jak zapowiedzi" << endl;
          cout << "wprowadzenia napoju Google Gulp! albo algorytmu PigeonRank, w ktorym wartosc stron internetowych mialaby byc obliczana przez" << endl;
          cout << "golebie z uwagi na ich rzekoma -umiejętnosc podejmowania natychmiastowych decyzji w przypadku skonfrontowania z trudnymi wyborami-" << endl;
          cout << "***" << endl;
          cout << "Kiedy w aplikacji Google Earth lub Google Maps pytamy o droge z Ameryki Połnocnej do Australii program instruuje, by poprzez Ocean Spokojny przeplynac kajakiem." << endl;
          cout << "***" << endl;
          cout << " w ramach holdu dla pisarza Douglasa Adamsa, kalkulator wbudowany w wyszukiwarke Google jako odpowiedź na -pytanie o zycie, wszechswiat i cala reszte- podaje wartosc 42" << endl;
          cout << "***" << endl;
          cout << "Z okazji prima aprilis w 2013 zaprezentowano aplikacje Nos Google, ktora po przylozeniu nosa do monitora komputera lub wyswietlacza smartfonu miala emitować kazdy wybrany zapach." << endl;
          cout << "Chcesz posluchac dalej? Oczywiscie teraz o czyms innym.." << endl;
          cout << "tak/nie" << endl;
           cin >> taq;
            if(taq=="tak")
             {
           system("cls");
          cout << "Czy wiesz, ze..." << endl;
          cout << "Bill Moggridge w 1979 roku stworzyl pierwszego laptopa w takiej formie," << endl;
          cout << " w jakiej znamy go dzisiaj-zamykanej walizeczki. Pierwsze przenosne komputery powstawaly " << endl;
          cout << " wprawdzie juz pod koniec lat 60., ale trzeba bylo kolejnych 10 lat, aby pojawil" << endl;
          cout << "pomysl genialny w swojej prostocie i ergonomii. Tak genialny, że GRiD Compass" << endl;
          cout << "trafil na statek kosmiczny NASA oraz byl wykorzystywany przez amerykanskie słuzby specjalne." << endl;
          cout << "Chcesz posluchac wiecej ciekawostek?" << endl;
          cout << "tak/nie" << endl;
           system("cls");
           cin >> taq;
            if(taq=="tak")
             {
          cout << "C++ zostal zaprojektowany przez Bjarne Stroustrupa jako rozszerzenie" << endl;
          cout << "jezyka C o obiektowe mechanizmy abstrakcji danych i silna statyczna" << endl;
          cout << "kontrole typow. Zachowanie zgodnosci z jezykiem C++ na poziomie kodu zrodlowego pozostaje" << endl;
          cout << " jednym z podstawowych celow projektowych kolejnych standardow jezyka." << endl;
          cout << "W latach 90. XX wieku jezyk C++ zdobyl pozycje jednego z najpopularniejszych jezyków programowania" << endl;
          cout << "ogolnego przeznaczenia. Na poczatku XXI wieku liczbe programistow jezyka C++ szacowano na okolo 3 miliony." << endl;
          cout << "Chcesz posluchac czegos wiecej?" << endl;
          cout << "tak/nie" << endl;
            system("cls");
           cin >> taq;
            if(taq=="tak")
             {
          cout << "Dobrze, ale to ostatnia ciekawostka ;)" << endl;
          cout << "W poszukiwaniu pierwowzoru wspolczesnej myszki musimy cofnąc się do roku 1941, gdy trwala jeszcze wojna." << endl;
          cout << "Dla potrzeb wojska Ralph Benjamin przygotowal projekt o dzwiecznej nazwie Trackball." << endl;
          cout << "Byl on czescia systemu obrony przeciwlotniczej." << endl;
          cout << "Pomysl zakladal uzycie komputera analogowego do wyliczania przyszlych pozycji" << endl;
          cout << "namierzanych wrogich samolotow. Wlasnie przy tym rozwiazaniu zaczeto korzystac z czegos, co obecnie nazwalibysmy joystickiem." << endl;
          cout << "To juz koniec :(" << endl;
          cout << "Gdzie chcesz teraz przejsc? :D" << endl;
           Sleep(7000);
             }
           else
            {
          cout << "Okej..." << endl;
            }


             }
            else
             {
          cout << "No coz..." << endl;
             }

             }
            else
            {
          cout << "Nie, to nie..." << endl;
            }

             }
            else
            {
           cout << "No coz, szkoda..." << endl;
            }
             }
           else
            {
          cout << "Och..." << endl;
            }



             }
            else
             {
          cout << "Szkoda..." << endl;
             }



             }


       else if(liczba=='6')
        {
           system("cls");
          cout << "Dobrze, a wiec kalambury." << endl;
          cout << "Oto zasady:" << endl;
          cout << "1.Ja pisze opis czegos z danej kategorii, a ty masz za zadanie napisac odpowiedz BEZ SPACJI Z MALYCH LITER" << endl;
          cout << "2.Co iles pytan zmieniam kategorie" << endl;
          cout << "3.Nie pisz zdrobnieniami,zgrubieniami,ani polskimi znakami" << endl;
            Sleep(10000);
          cout << "Zaczynamy!" << endl;
          cout << "Kategoria:" << endl;
            Sleep(3000);
          cout << "Zwierzeta." << endl;
            Sleep(2000);
          cout << "Co to za zwierze?" << endl;
          cout << "Jest wielkim kotem w pomaranczowe i czarne pasy." << endl;
          cout << "Mieszka w dzungli " << endl;
            cin >> odp;
             if(odp!="tygrys")
             {
                 cout << "Zle :(" <<endl;

             }
             if(odp=="tygrys")
             {
                 cout << "Dobra odpowiedz!" <<endl;
                cout << "Co to za zwierze?" <<endl;
                    Sleep(3000);

                cout << "Jest to niedzwiedz o czarno-bialym futrze " << endl;
                cout << "Zywi sie (niezawsze) bambusem (i jego liscmi)" << endl;
                     cin >> odp;
                    if(odp=="panda")
                     {
                         cout << "Dobrze!" << endl;
                         cout << "Co to za zwierze?" << endl;
                            Sleep(3000);
                         cout << "Jest to kolorowy ptak zamieszkujacy lasy tropikalne" << endl;
                         cout << "Znany z powtarzania po ludziach slow" << endl;
                            cin >> odp;

                            if(odp=="papuga")
                            {
                            cout << "Dobra odpowiedz!" << endl;
                             system("cls");
                            cout << "Kolejna kategoria:" << endl;
                               Sleep(3000);
                            cout << "Przedmioty" << endl;
                               Sleep(2000);
                            cout << "Co to jest?" << endl;
                            cout << "Zrobiona jest z papieru, zawiera wiele wydrukowanych slow." << endl;
                            cout << "Zeby ja zrobic potrzeba duzo czasu, staran i tuszu." << endl;
                             cin >> odp;
                              if(odp=="ksiazka")
                               {
                            cout << "Dobra odpowiedz!" << endl;
                            cout << "Co to?" << endl;
                               Sleep(2000);
                            cout << "Plyta glowna, monitor, karta graficzna, masa kabli..." << endl;
                            cout << "Poszerza granice mozliwosci, jest dla niektorych druga rzeczywistoscia...Trudno go przeniesc." << endl;
                             cin >> odp;
                              if(odp=="komputer")
                               {
                            cout << "Dobrze!!" << endl;
                            cout << "Co to moze byc?" << endl;
                               Sleep(2000);
                            cout << "Moze stac lub wisiec na scianie. Sluzy do zabicia czasu." << endl;
                            cout << "Mozna na nim ogladac rozne programy, seriale, kreskowki, filmy." << endl;
                             cin >> odp;
                              if(odp=="telewizor")
                               {
                            cout << "To poprawna odpowiedz!" << endl;
                             system("cls");
                            cout << "Ostatnia kategoria:" << endl;
                              Sleep(3000);
                            cout << "Jedzenie" << endl;
                            cout << "Co to za jedzenie?" << endl;
                              Sleep(2000);
                            cout << "Inaczej mrozony jourt z dodatkiem owocow lub innych skladnikow. W LICZBIE MNOGIEJ." << endl;
                             cin >> odp;
                              if(odp=="lody")
                               {
                            cout << "Dobrze!" << endl;
                            cout << "Co to jest?" << endl;
                              Sleep(2000);
                            cout << "Rozmieszane jajka podgrzane na patelni. Konczy sie na -ca" << endl;
                             cin >> odp;
                              if(odp=="jajecznica")
                               {
                            cout << "Dobra odpowiedz!" << endl;
                            cout << "Ostatnie pytanie!" << endl;
                              Sleep(2000);
                            cout << "Potrawa z japonii z ryzem i dodatkami, zwykle zawinieta w rulon." << endl;
                            cout << "Do jedzenia jej mozna uzywac paleczek. Pisz przez -h- nie przez -sz-" << endl;
                             cin >> odp;
                              if(odp=="sushi")
                              {
                            cout << "Gratulacje udalo Ci sie ukonczyc kalambury bezblednie!!! :D" << endl;
                            cout << "Otrzymales tytul:" << endl;
                            cout << "Mistrz kalambur" << endl;
                              }
                             else
                             {
                            cout << "Niestety, ale nie. A tak dobrze Ci szlo...Sprobuj ponownie! :(" << endl;
                             }


                               }
                              else
                               {
                            cout << "Zla odpowiedz :(" << endl;
                               }

                               }
                              else
                               {
                            cout << "Niestety, nie" << endl;
                               }



                               }
                              else
                               {
                            cout << "Blad :(" << endl;
                               }


                               }
                              else
                               {
                            cout << "Zla odpowiedz :(" << endl;
                               }



                               }
                              else
                               {
                            cout << "Niestety, nie o to chodzilo :(" << endl;
                               }


                            }
                            else
                                {
                                cout << "Zla odpowiedz :(" << endl;
                                }

                     }
                    else
                    {
                        cout << "To niestety zla odpowiedz :(" << endl;
                    }
             }
             else
             {
                 cout << "Niestety nie chodzi o to zwierze :(" << endl;

             }


             }

       else if(liczba=='7')
        {
            system("cls");
          cout << "A wiec graczu nr 1 podaj swoje imie lub nick:" << endl;
           cin >> gracz1;
            system("cls");
          cout << "Graczu nr 2 teraz ty podaj swoje imie lub nick:" << endl;
           cin >> gracz2;
            system("cls");
          cout << "Graczu " <<gracz1 <<endl;
          cout << " Napisz o jakie zwierze ci chodzi (tylko nazwa):" << endl;
           cin >> zwierze;
          cout << "A teraz napisz krotki opis tego zwierzecia:" << endl;
          getchar();
           std::getline(std::cin,opis);
           system("cls");
          cout <<"A teraz graczu "<<gracz2 <<endl;
          cout <<" Co to za zwierze?"<< endl;
          cout <<opis<< endl;
           cin >> odpzwierz ;
          cout <<"A teraz czas na odpowiedzi!"<< endl;
             if(zwierze==odpzwierz)
              {
             cout << "Gratulacje! to dokladnie o to zwierze chodzilo!" << endl;
              Sleep(4000);
              }
             else
              {
             cout << "Niestety nie o to zwierze chodilo :(" << endl;
             cout << "Chodzilo o:" << endl;
             cout << zwierze << endl;
             cout << "Moze pierwszy gracz napisal je z wielkiej litery lub w liczbie mnogiej?..." << endl;
              Sleep(3000);
              }
             cout << "Chcesz grac dalej? Teraz kolei gracza " <<gracz2 << endl;
             cout << "tak/nie" << endl;
              cin >> kontynuacja;
                if(kontynuacja=="tak")
                 {
            system("cls");
          cout << "Graczu " <<gracz2 <<endl;
          cout << " Napisz o jakie zwierze ci chodzi (tylko nazwa):" << endl;
           cin >> zwierze;
          cout << "A teraz napisz krotki opis tego zwierzecia:" << endl;
           getchar();
          std::getline(std::cin,opis);
             system("cls");
          cout <<"A teraz graczu "<<gracz1 <<endl;
          cout <<" Co to za zwierze?"<< endl;
          cout <<opis<< endl;
           cin >> odpzwierz ;
          cout <<"A teraz czas na odpowiedzi!"<< endl;
             if(zwierze==odpzwierz)
              {
             cout << "Gratulacje! to dokladnie o to zwierze chodzilo!" << endl;
              system("cls");
             cout << "Koniec gry wrzuc monete zeby kontynuowac ;)" << endl;
              }
             else
              {
             cout << "Niestety nie o to zwierze chodilo :(" << endl;
             cout << "Chodzilo o:" << endl;
             cout << zwierze << endl;
             cout << "Moze drugi gracz napisal je z wielkiej litery lub w liczbie mnogiej?..." << endl;
              Sleep(3000);
              }
                 }
                else
                 {
             cout << "Okej..." << endl;
              Sleep(3000);
                 }

             }

       else if(liczba=='8')
        {
           system("cls");
          cout << "Nazwa najbardziej epickiej gry nalezacej do gatunku MMORPG wydana przez Blizzard Entertainment?" << endl;
          cout << "Napisz pelna nazwe WSZYSTKO z Caps Lockiem i BEZ SPACJI:" << endl;
           cin >> odp;
            if (odp=="WORLDOFWARCRAFT")
             {
          cout << "Dobrze!!! Widze, ze tez lubisz grac w dobre gry! :D" << endl;
           Sleep(3000);
             }
           else
             {
          cout << "Niestety ale nieeee ;P" << endl;
           Sleep(3000);
             }
        }
       else if(liczba=='9')
        {
           system("cls");
          cout << "Program zostal zrobiony w Code Bolcksie.(console aplication, c++).Autor: Zosia.S :D" << endl;
          cout << "Pomocy naukowej udzielily filmiki Pasja informatyki" <<endl;
          cout << ":)" <<endl;
           Sleep(5000);
             }

       else if(liczba=='0')
        {
           system("cls");
          Sleep(5000);
          cout << "Uuu natknales/as sie wlasnie na tajna skrytke w tym programie :)" << endl;
          cout << "Nudno tu, prawda? Niestety, na ta chwile tu nic nie ma..." <<endl;
          cout << "Moze masz pomysl jak uzadzic ten zakatek? :)" <<endl;
           Sleep(5000);
        }
       else if(liczba=='q')
        {
            Sleep(1000);
            return 0;
        }
       else
        {
        system("cls");
       cout << "Niestety, nie ma puktu o tej nazwie. Wybierz moze te od 1-9..." << endl;
       Sleep(3000);
        }
        }
return 0;
}
