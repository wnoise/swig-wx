/* File : example.cxx */

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER)
# define _CRT_SECURE_NO_DEPRECATE
#endif

#include "example.h"
#include <stdio.h>
#include <stdlib.h>

Vector operator+(const Vector &a, const Vector &b) {
  Vector r;
  r.x = a.x + b.x;
  r.y = a.y + b.y;
  r.z = a.z + b.z;
  return r;
}

char *Vector::print() {
  static char temp[512];
  sprintf(temp,"Vector %p (%g,%g,%g)", this, x,y,z);
  return temp;
}

VectorArray::VectorArray(int size) {
  items = new Vector[size];
  maxsize = size;
  printf("VectorArray new: self=%p\n",this);
}

VectorArray::~VectorArray() {
  printf("VectorArray delete: self=%p\n",this);
  delete [] items;
}

Vector &VectorArray::operator[](int index) {
  printf("VectorArray: read[%d] self=%p\n",index,this);
  if ((index < 0) || (index >= maxsize)) {
    printf("Panic! Array index out of bounds.\n");
    exit(1);
  }
  return items[index];
}

int VectorArray::size() {
  printf("VectorArray: size %d self=%p\n",maxsize,this);
  return maxsize;
}

