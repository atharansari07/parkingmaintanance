#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int ch;
  char choice;
  int amount = 0, nofbus = 0, nofcycle = 0, nofcar = 0, count = 0, nofrickshaw = 0;
  while (true)
  {
    cout << "******* Maintanance Parking*********" << endl;

    cout << "1.Enter Bus" << endl;
    cout << "2.Enter the cycle" << endl;
    cout << "3.Enter Rickshaw" << endl;
    cout << "4.Enter Car" << endl;
    cout << "5.Show Data" << endl;
    cout << "6.Delete Data" << endl;
    cout << "7.Exit" << endl;
    cout << "Enter your choice!" << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:

      count++;
      amount = amount + 1000;
      nofbus++;
      cout << "Add 1 Bus in Record=" << endl;

      break;
    case 2:

      count++;
      amount = amount + 100;
      nofcycle++;
      cout << "Add 1 Cycle in Record=" << endl;

      break;
    case 3:

      count++;
      amount = amount + 200;
      nofrickshaw++;
      cout << "Add 1 Rickshaw in Record=" << endl;

      break;
    case 4:
      count++;
      amount = amount + 500;
      nofcar++;
      cout << "Add 1 Car in Record=" << endl;
      break;
    case 5:
      cout << "\n Number of Bus is =" << nofbus << endl;
      cout << "\n Number of Car is =" << nofcar << endl;
      cout << "\n Number of Cycle is =" << nofcycle << endl;
      cout << "\n Number of Rickshaw is =" << nofrickshaw << endl;
      cout << "\n Total Number of Vehile is=" << count << endl;
      cout << "\n Total Amount of Vehicles is =" << amount << endl;
      system("pause");
      system("cls");

      break;
    case 6:
      nofbus = 0;
      nofcycle = 0;
      nofrickshaw = 0;
      nofcar = 0;
      amount = 0;
      count = 0;
      break;

    case 7:
      exit(0);
      break;

    default:
      cout << "Invalid Enter!" << endl;
      break;
    }
  }

  return 0;
}
