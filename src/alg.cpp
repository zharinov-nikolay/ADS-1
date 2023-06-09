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
  for (uint64_t p = 2; ch < n; p++) {
    uint64_t kol = 0;
    for (uint64_t i = 2; i <= p - 1; i++) {
      if (p % i == 0) {
         kol += 1;
      }
    }
    if (kol == 0) {
      prost = p;
      ch += 1;
    }
  }
  return prost;
}

uint64_t nextPrime(uint64_t value) {
 uint64_t prost = 0;
  uint64_t ch = 0;
  for ( uint64_t p = value + 1 ; ch < 1; p++) {
    uint64_t kol = 0;
    for (uint64_t i = 2; i <= p - 1; i++) {
      if (p % i == 0) {
        kol += 1;
      }
    }
    if (kol == 0) {
       prost = p;
       ch += 1;
    }
  }
  return prost;
}

uint64_t sumPrime(uint64_t hbound) {
 uint64_t sum = 0;
  uint64_t ch = 0;
  for ( uint64_t p = 2; p < hbound; p++) {
    uint64_t kol = 0;
    for (uint64_t i = 2; i <= p - 1; i++) {
      if (p % i == 0) {
        kol += 1;
         }
    }
       if (kol == 0) {
       sum += p;
    }
  }
  return sum;
}
