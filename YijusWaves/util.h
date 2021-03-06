/*
 * File: util.h
 * Author: Oliver B. Fringer
 * Institution: Stanford University
 * --------------------------------
 * Header file for util.c.
 *
 * Copyright (C) 2005-2006 The Board of Trustees of the Leland Stanford Junior               
 * University. All Rights Reserved.
 *
 */
#ifndef _util_h
#define _util_h

#include "grid.h"
#include "suntans.h"

void Sort(int *a, int *v, int N);
void ReOrderIntArray(int *a, int *order, int *tmp, int N, int Num);
void ReOrderRealArray(REAL *a, int *order, REAL *tmp, int N, int Num);
int *ReSize(int *a, int N);
int IsMember(int i, int *points, int numpoints);
void FindNearest(int *points, REAL *x, REAL *y, int N, int np, REAL xi, REAL yi);
void Interp(REAL *x, REAL *y, REAL *z, int N, REAL *xi, REAL *yi, REAL *zi, int Ni);
void TriSolve(REAL *a, REAL *b, REAL *c, REAL *d, REAL *u, int N);
int IsNan(REAL x);
REAL UpWind(REAL u, REAL dz1, REAL dz2);
void Copy(REAL **from, REAL **to, gridT *grid);
REAL Max(REAL x1, REAL x2);
REAL Min(REAL x, REAL y);

#endif
