/*
 * File: initialization.h
 * Author: Oliver B. Fringer
 * Institution: Stanford University
 * --------------------------------
 * Header file for initialization.c.
 *
 * Copyright (C) 2005-2006 The Board of Trustees of the Leland Stanford Junior
 * University. All Rights Reserved.
 *
 */
#ifndef _initialization_h
#define _initialization_h

int GetDZ(REAL *dz, REAL depth, REAL localdepth, int Nkmax, int myproc);
REAL ReturnDepth(REAL x, REAL y);
REAL ReturnFreeSurface(REAL x, REAL y, REAL d);
REAL ReturnSalinity(REAL x, REAL y, REAL z);
REAL ReturnTemperature(REAL x, REAL y, REAL z, REAL depth);
REAL ReturnHorizontalVelocity(REAL x, REAL y, REAL n1, REAL n2, REAL z);

#endif
