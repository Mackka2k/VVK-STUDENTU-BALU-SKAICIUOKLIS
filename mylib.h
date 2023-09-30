#include <iostream>
#include <numeric>
#include <string>
#include <array>
#include <vector>
#include <iomanip>
#include <algorithm>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::array;
using std::vector;
using std::setw;
using std::left;
using std::right;
using std::fixed;
using std::setprecision;
using std::sort;
using std::domain_error;

extern char skaiciavimo_Strategija;
extern string failoVardas;

class studentas {
	string vard, pav; // [SAUGO STUDENTO VARDA IR PAVARDE]
	vector<int> paz;  // [SAUGO NAM� DARBU REZULTATUS]
	int egz;		  // [SAUGO EGZAMINO REZULTAT�]
	float rez;		  // [SAUGO GALUTIN� REZULTAT�]
public:
	studentas();                                         // [DEFAULT KONSTRUKTORIUS]
	studentas(string v, string p, vector<int>pp, int e); // [KONSTRUKTORIUS SU PARAMETRAIS]
	studentas(const studentas& temp);					 // [KOPIJAVIMO KONSTRUKTORIUS]
	studentas& operator=(const studentas& temp);		 // [PRISKIRIMO KOPIJAVIMO OPERATORIUS]
	~studentas();										 // [DESTRUKTORIUS]
	
	inline string getVardas() { return vard; }			 // [GETTER]
	inline int getPazNr() { return paz.size(); }	     // [GETTER]
	
	inline void setVardas(string t) { vard = t; }        // [SETTER]

	void printas();
	void printasRez();
	void rezVid(); // [METODAS SKAI�IUOJANTIS GALUTIN� PA�YM� PAGAL VIDURK�]
	void rezMed(); // [METODAS SKAI�IUOJANTIS GALUTIN� PA�YM� PAGAL MEDIAN�]

	//Duomen� �vedimo metodas(perdengtas cin)
	//Duomen� i�vedimo metodas(perdengtas cout)
	double mediana(vector<int> vec);    // [FUNKCIJA SKAI�IUOJANTI MEDIAN�]
	
	void operator>>(std::istream& input);  // [PERDENGIA CIN OPERATORI�]
	void operator<<(std::ostream& out); // [PERDENGIA COUT OPERATORI�]
	//double galBalas(double egzaminas, const vector<double>& nd, double (*kriterijus)(vector<double>) = mediana);
};