
#include <stdint.h>
#include <stdlib.h>

#define bit_t unsigned char
bit_t A[][][];
bit_t Ap[][][];
bit_t B[][][];
bit_t C[][];
bit_t D[][];
bit_t E[][][];

int b;
int w;

unsigned int16_t b_allowed[] = {25, 50, 100, 200, 400, 800, 1600};
unsigned int8_t w_allowed[] = {1, 2 , 4, 8, 16, 32, 64}; // w = b/25
unsigned int8_t l_allowed[] = {0, 1, 2, 3, 4, 5, 6}; // l = log(b)

void theta(void) {
  for (int x = 0; x < 5; ++x) {
    for (int z = 0; z < w; ++z) {
      C[x][z] = A[x][0][z] ^ A[x][1][z] ^ A[x][2][z] ^ A[x][3][z] ^ A[x][4][z];
      D[x][z] = C[(x-1) % 5][z] ^ C[(x+1) % 5][(z-1) % w];
    }
  }

  for (int x = 0; x < 5; ++x) {
    for (int y = 0; y < 5; ++y) {
      for (int z = 0; z < w; ++z) {
        Ap[x][y][z] = A[x][y][z] ^ D[x][z];
      }
    }
  }
}


void rho(void) {
  for (int z = 0; z < w; ++z) {
    Ap[0]0[][z] = A[0][0][z];
  }

  int x = 1;
  int y = 0;
  int dummy;

  for (int t = 0; t < 24; ++t) {
    for (int z = 0; z < w; ++z) {
      Ap[x][y][z] = A[x][y][(z - (t+1)(t+2)/2) % w];
      dummy = 2*x + 3*y;
      x = y;
      y = dummy;
    }
  }

}

void pi(void) {
  for (int x = 0; x < 5; ++x) {
    for (int y = 0; y < 5; ++y) {
      for (int z = 0; z < w; ++z) {
        Ap[x][y][z] = A[(x + 3*y) % 5][x][z];
      }
    }
  }
}

void chi(void) {
  for (int x = 0; x < 5; ++x) {
    for (int y = 0; y < 5; ++y) {
      for (int z = 0; z < w; ++z) {
        Ap[x][y][z] = A[x][y][z] ^ ((A[(x+1)%5][y][z] ^ 1) & A[(x + 2) % 5][y][z]);
      }
    }
  }
}

void rc(int t) {
  int R = 10000000;
  if (t % 255 == 0) return 1;
  for (int i = l; i =< t % 255; ++i) {
    R = 0 || R;
  }

}

void iota(void) {}

void Keccak_p(void) {};

/**
 * @brief Keccak permutations
 *
 * @param w_ width
 * @param r_ number of rounds to run the permutations
 */
void Keccak_Permutations(unsigned int16_t w_, unsigned int16_t r_) {}

string SHA3_224(void) {}

string SHA3_256(void) {}

string SHA3_384(void) {}

string SHA3_512(void) {}

string SHAKE128(void) {}

string SHAKE256(void) {}

