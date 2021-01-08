
/* 
   Native symbol registration table for spatstat.sparse package

   Automatically generated - do not edit this file!

*/

#include "proto.h"
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/*  
   See proto.h for declarations for the native routines registered below.
*/

static const R_CMethodDef CEntries[] = {
    {"Cbiform",          (DL_FUNC) &Cbiform,           6},
    {"CDspaSumSymOut",   (DL_FUNC) &CDspaSumSymOut,    9},
    {"CDspaWtSumSymOut", (DL_FUNC) &CDspaWtSumSymOut, 13},
    {"Cquadform",        (DL_FUNC) &Cquadform,         5},
    {"CspaSumSymOut",    (DL_FUNC) &CspaSumSymOut,     9},
    {"CspaWtSumSymOut",  (DL_FUNC) &CspaWtSumSymOut,  13},
    {"Csum2outer",       (DL_FUNC) &Csum2outer,        6},
    {"CsumDsymouter",    (DL_FUNC) &CsumDsymouter,     4},
    {"Csumouter",        (DL_FUNC) &Csumouter,         4},
    {"Csumsymouter",     (DL_FUNC) &Csumsymouter,      4},
    {"Cwsum2outer",      (DL_FUNC) &Cwsum2outer,       7},
    {"CwsumDsymouter",   (DL_FUNC) &CwsumDsymouter,    5},
    {"Cwsumouter",       (DL_FUNC) &Cwsumouter,        5},
    {"Cwsumsymouter",    (DL_FUNC) &Cwsumsymouter,     5},
    {NULL, NULL, 0}
};

void R_init_spatstat_sparse(DllInfo *dll)
{
    R_registerRoutines(dll, CEntries, NULL, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
    R_forceSymbols(dll, TRUE); 
}
