// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t value) {
  uint64_t kol = 0;
   for (uint64_t i = 2; i<= value - 1; i++) { 
      if (value % i == 0) {
        kol += 1;
      }
   }
   if (kol == 0) {
     return true;
   }
   else {
     return false;
   }
   return 0;
}

uint64_t nPrime(uint64_t n) {
 uint64_t prost = 0;
  uint64_t ch = 0;
  for (uint64_t j = 2; ch < n; j++) {
    uint64_t kol = 0;
    for (uint64_t i = 2; i <= j - 1; i++) {
      if (j % i == 0) {
         kol += 1;
      }
    }
    if (kol == 0) {
      prost = j;
      ch += 1;
    }
  }
  return prost;
}

uint64_t nextPrime(uint64_t value) {
 uint64_t prost = 0;
  uint64_t ch = 0;
  for ( uint64_t j = value + 1 ; ch < 1; j++) {
    uint64_t kol = 0;
    for (uint64_t i = 2; i <= j - 1; i++) {
      if (j % i == 0) {
        kol += 1;
      }
    }
    if (kol == 0) {
       prost = j;
       ch += 1;
    }
  }
  return prost;
}

uint64_t sumPrime(uint64_t hbound) {
 uint64_t sum = 0;
  uint64_t ch = 0;
  for ( uint64_t j = 2; j < hbound; j++) {
    uint64_t kol = 0;
    for (uint64_t i = 2; i <= j - 1; i++) {
      if (j % i == 0) {
        kol += 1;
         }
    }
       if (kol == 0) {
       sum += j;
    }
  }
  return sum;
}
