//
// NNLSDoubleCore.h
//
#ifndef __NNLSDOUBLECORE_H__
#define __NNLSDOUBLECORE_H__

#include "stdafx.h"

#if defined _M_X64

int nnls_c(double *a,
		   long long *mda,
		   long long *m,
		   long long *n,
		   double *b,
		   double *x,
		   double *rnorm,
		   double *w,
		   double *zz,
		   long long *index,
		   int *mode);

int nnnpls_c(double *a, long long *mda, long long *m, long long *n, double *con, double *b,
			 double *x, double *rnorm, double *w, double *zz, long long *index,
			 long long *mode);

int nnls_Weighted(double *a,
				  long long *mda,
				  long long *m,
				  long long *n,
				  double *b,
				  double *pWghts,
				  double *x,
				  double *rnorm,
				  double *w,
				  double *zz,
				  long long *index,
				  int *mode);

int nnnpls_Weighted(double *a, int *mda, int *m, int *n, double *con, double *b, double *pWghts,
					double *x, double *rnorm, double *w, double *zz, int *index,
					int *mode);

#elif defined _WIN32

int nnls_c(double *a,
		   int *mda,
		   int *m,
		   int *n,
		   double *b,
		   double *x,
		   double *rnorm,
		   double *w,
		   double *zz,
		   int *index,
		   int *mode);

int nnnpls_c(double *a, int *mda, int *m, int *n, double *con, double *b,
			 double *x, double *rnorm, double *w, double *zz, int *index,
			 int *mode);

int nnls_Weighted(double *a,
				  int *mda,
				  int *m,
				  int *n,
				  double *b,
				  double *pWghts,
				  double *x,
				  double *rnorm,
				  double *w,
				  double *zz,
				  int *index,
				  int *mode);

int nnnpls_Weighted(double *a, int *mda, int *m, int *n, double *con, double *b, double *pWghts,
					double *x, double *rnorm, double *w, double *zz, int *index,
					int *mode);

#else // Linux

int nnls_c(double *a,
		   int *mda,
		   int *m,
		   int *n,
		   double *b,
		   double *x,
		   double *rnorm,
		   double *w,
		   double *zz,
		   int *index,
		   int *mode);

int nnnpls_c(double *a, int *mda, int *m, int *n, double *con, double *b,
			 double *x, double *rnorm, double *w, double *zz, int *index,
			 int *mode);

int nnls_Weighted(double *a,
				  int *mda,
				  int *m,
				  int *n,
				  double *b,
				  double *pWghts,
				  double *x,
				  double *rnorm,
				  double *w,
				  double *zz,
				  int *index,
				  int *mode);

int nnnpls_Weighted(double *a, int *mda, int *m, int *n, double *con, double *b, double *pWghts,
					double *x, double *rnorm, double *w, double *zz, int *index,
					int *mode);

#endif

#endif // __NNLSDOUBLECORE_H__
