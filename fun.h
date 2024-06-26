#pragma once

#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <filesystem>
#include <limits>
#include <regex>
#include <algorithm>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::map;
using std::ifstream;
using std::istringstream;
using std::stringstream;
using std::regex;
using std::regex_match;
using std::regex_replace;
using std::transform;
using std::ofstream;
using std::left;
using std::setw;
using std::setfill;

namespace fs = std::filesystem;

string GautiPasirinkima();
bool ArAtsidaro (const string& failoPasirinkimas);
bool TikrinameArUrl (const string& zodis);
string ZodzioTvarkymas(const string& zodis);
void pridedameISarasa(const string& zodis, map<string, vector<int>>& sarasas, int eilutesNumeris);
void failoSkaitymas(const string& failoPasirinkimas,  map<string, vector<int>>& sarasas, vector<string>& urls);
void rasymas (map<string, vector<int>>& sarasas,vector<string> urls);