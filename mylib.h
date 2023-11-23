#include <algorithm>
#include <array>
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <numeric>
#include <sstream>
#include <string>
#include <vector>
#include <stdexcept>

using std::accumulate;
using std::array;
using std::cerr;
using std::cin;
using std::cout;
using std::deque;
using std::domain_error;
using std::endl;
using std::fixed;
using std::getline;
using std::ifstream;
using std::istream;
using std::istringstream;
using std::left;
using std::list;
using std::ofstream;
using std::ostream;
using std::right;
using std::setprecision;
using std::setw;
using std::sort;
using std::string;
using std::stringstream;
using std::to_string;
using std::vector;

extern char skaiciavimo_Strategija;
extern string failoVardas;

class studentas {
  string vard, pav; // [SAUGO STUDENTO VARDA IR PAVARDE]
  vector<int> paz;  // [SAUGO NAMØ DARBU REZULTATUS]
  int egz;          // [SAUGO EGZAMINO REZULTATÀ]
  float rez;        // [SAUGO GALUTINÁ REZULTATÀ]
public:
  studentas(); // [DEFAULT KONSTRUKTORIUS]
  studentas(string v, string p, vector<int> pp,
            int e);                 // [KONSTRUKTORIUS SU PARAMETRAIS]
  studentas(const studentas &temp); // [KOPIJAVIMO KONSTRUKTORIUS]
  studentas &
  operator=(const studentas &temp); // [PRISKIRIMO KOPIJAVIMO OPERATORIUS]
  ~studentas();                     // [DESTRUKTORIUS]

  inline string getVardas() { return vard; }            // [GETTER]
  inline size_t getPazNr() { return paz.size(); }       // [GETTER]
  inline float getGal() { return rez; }                 // [GETTER]
  string getPavarde() const;                            // [GETTER]
  int getND(int indeksas) const;                        // [GETTER]
  int getEgzaminas() const;                             // [GETTER]
  int getRezultatas() const;                            // [GETTER]
  inline size_t getPazNr() const { return paz.size(); } // [GETTER]

  inline void setVardas(string t) { vard = t; } // [SETTER]

  void printas(); // [IÐVEDA STUDENTO DUOMENIS]
  void
  printasRez(); // [IÐVEDA GALUTINÁ PAÞYMÁ DVIEJU SKAICIU PO KABLELIO TIKSLUMU]
  void rezVid(); // [METODAS SKAIÈIUOJANTIS GALUTINÁ PAÞYMÁ PAGAL VIDURKÁ]
  void rezMed(); // [METODAS SKAIÈIUOJANTIS GALUTINÁ PAÞYMÁ PAGAL MEDIANÀ]

  double mediana(vector<int> vec); // [FUNKCIJA SKAIÈIUOJANTI MEDIANÀ]

  void operator<<(std::ostream &output); // [PERDENGIA COUT OPERATORIØ]
  void operator>>(std::istream &input);  // [PERDENGIA CIN OPERATORIØ]
};