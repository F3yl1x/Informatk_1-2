#include <iostream>
#include <vector>

using namespace std;	

class person
{
  

  public:
    

};

class aufgabe
{
  

  public:
    

};

vector<bool> Speicher_Pers;				//"Speicher Controller" fuer Personen
vector<bool> Speicher_Aufg;				//"Speicher Controller" fuer Aufgaben
vector<person> Obj_Pers;				//Speichervektor fuer alle Personen
vector<aufgabe> Obj_Aufg;	



class liste {
    private:

    public:
    void ausgabe(); //Alle Aufgaben ausgeben
    void ausgabe_datum(); //Alle Aufgaben sortiert nach Faelligkeitsdatum ausgeben
    void ausgabe(person); //Alle Aufgaben einer Person ausgeben
    void neu_aufgabe(string aufgabenname,int date[3],string beschreibung); //Neue Aufgabe erstellen
    void neu_aufgabe(string aufgabenname,int date[3],string beschreibung, string teilnehmer); //Neue Aufgabe erstellen mit teilnehmer
};

void liste::ausgabe()
{
    int size = Speicher_Aufg.size();
    vector<int> beschrieben;
    for(int i = 0 ; i < size; i++)
    {
        if(Speicher_Aufg[i]==1)
        {
            beschrieben.push_back(i);
        }
    }

    size = beschrieben.size();

    for(int i = 0; i < size; i++)
    {
        //cout <<"1. Aufgabe: " << Obj_Aufg[beschrieben[i]].name;
    }

}

void liste::ausgabe_datum()
{
    
}

void liste::ausgabe(person)
{
    
}

void neu_aufgabe(string aufgabenname,int date[3],string beschreibung)
{

}

void neu_aufgabe(string aufgabenname,int date[3],string beschreibung, string teilnehmer)
{

}

int main()
{
    return 0;
}
