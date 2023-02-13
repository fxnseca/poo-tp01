#include <iostream>
using namespace std;

const int NUM_ROOMS = 4;
const int CAPACITY[NUM_ROOMS] = {10, 5, 5, 3};
bool isBooked[NUM_ROOMS] = {false, false, false, false};

void bookRoom(int roomNumber) {
  if (roomNumber >= 0 && roomNumber < NUM_ROOMS) {
    if (!isBooked[roomNumber]) {
      isBooked[roomNumber] = true;
      cout << "Sala " << roomNumber + 1 << " reservada com sucesso." << endl;
    } else {
      cout << "Sala " << roomNumber + 1 << " já está reservada." << endl;
    }
  } else {
    cout << "Sala inválida." << endl;
  }
}

void unbookRoom(int roomNumber) {
  if (roomNumber >= 0 && roomNumber < NUM_ROOMS) {
    if (isBooked[roomNumber]) {
      isBooked[roomNumber] = false;
      cout << "Reserva da sala " << roomNumber + 1 << " cancelada com sucesso." << endl;
    } else {
      cout << "A sala " << roomNumber + 1 << " não está reservada." << endl;
    }
  } else {
    cout << "Sala inválida." << endl;
  }
}

int main() {
  bookRoom(0);
  bookRoom(1);
  unbookRoom(1);
  bookRoom(1);

  return 0;
}
