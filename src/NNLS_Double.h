//
// NNLS_Double.h
//
#ifndef __NNLS_DOUBLE_H__
#define __NNLS_DOUBLE_H__

#if defined _M_X64


double *WeightedNNLSRegression( char *lpTmpFile, 
							    double *pEnvDataMatrix, long long nRows, long long nCols, 
								double *pRespVector, double *pDeviance, double *pWeights, long long logit);

double CalcGDMDevianceDouble( double *pY, double *pU, double *pW, long long nLen );

double GetWeightedNULLDeviance( long long nRows, double *pRespVector, double *pWeights, long long logit );

double *CopyEnvMatrixDouble( double *pMatrix, long long nRows, long long nCols );

double *nnlsFITDouble( double *pEnvDataMatrix, long long nRows, long long nCols, double *pRespVector, double *pWeights, long long logit );


#elif defined _WIN32


double *WeightedNNLSRegression( char *lpTmpFile, 
							    double *pEnvDataMatrix, int nRows, int nCols, 
								double *pRespVector, double *pDeviance, double *pWeights, int logit);


double CalcGDMDevianceDouble( double *pY, double *pU, double *pW, int nLen );

double GetWeightedNULLDeviance( int nRows, double *pRespVector, double *pWeights, int logit );

double GetTestWeightedNULLDeviance( double *pMatrix, int nCols, int nRows, double *pRespVector, double *pWeights );

double *CopyEnvMatrixDouble( double *pMatrix, int nRows, int nCols );

double *nnlsFITDouble( double *pEnvDataMatrix, int nRows, int nCols, double *pRespVector, double *pWeights, int logit );

#else // Linux

double *WeightedNNLSRegression( char *lpTmpFile, 
							    double *pEnvDataMatrix, int nRows, int nCols, 
								double *pRespVector, double *pDeviance, double *pWeights, int logit);


double CalcGDMDevianceDouble( double *pY, double *pU, double *pW, int nLen );

double GetWeightedNULLDeviance( int nRows, double *pRespVector, double *pWeights, int logit );

double GetTestWeightedNULLDeviance( double *pMatrix, int nCols, int nRows, double *pRespVector, double *pWeights );

double *CopyEnvMatrixDouble( double *pMatrix, int nRows, int nCols );

double *nnlsFITDouble( double *pEnvDataMatrix, int nRows, int nCols, double *pRespVector, double *pWeights, int logit );


#endif

#endif  // __NNLS_DOUBLE_H__
