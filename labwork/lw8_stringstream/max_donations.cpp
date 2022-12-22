#include <iostream>
#include <sstream>
#include <fstream>
using std::cin, std::cout, std::endl, std::string, std::getline,
      std::ifstream, std::istringstream;

int main() {
  string filename;
  cout << "Enter donation filename: ";
  cin >> filename;
  ifstream ifs(filename);
  if (!ifs.is_open()) {
    cout << "Failed to open file " << filename << "." << endl;
    return 1;
  }
  
  double maxTotalDonation = 0;
  int maxTotalCollector = 0;
  
  string row;
  double currdonation = 0;
  int collector = 0;
  double amount;
  string conversionvariable;
  int count;
  
  // read data
  while(getline(ifs, row)) {
    // stringstream object inputting to row
    istringstream istr(row);
    // UIN from string buffer
    istr >> collector;

    // convert string to double
    while(istr >> conversionvariable) {
      //convert from string to float
      amount = stod(conversionvariable);
      currdonation += amount;
      count++;
    }

    // if max < donation make currdonation the new max
    if (count == 1) {
      maxTotalDonation = maxTotalDonation;
    }
    // else if (count == 0) {
    //   cout << "No donations" << endl;
    //   }
    else if (maxTotalDonation < currdonation) {
      maxTotalDonation = currdonation;
      maxTotalCollector = collector;
    }

    count = 0;
    currdonation = 0;
  }
  
  if (maxTotalDonation != 0) {
    cout << "Highest donation total: " << maxTotalDonation << endl;
    cout << "-- collected by id: " << maxTotalCollector << endl;
  }
  else {
    cout << "No donations." << endl;
  }
}
