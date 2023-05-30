// Copyright 2023 Kuchin Nikita
#ifndef MODULES_TASK_3_KUCHIN_N_CCS_MATRIX_TBB_CCS_MATRIX_TBB_H_
#define MODULES_TASK_3_KUCHIN_N_CCS_MATRIX_TBB_CCS_MATRIX_TBB_H_

#include <float.h>

#include <vector>
struct SparceMatrix {
    int n;
    std::vector<double> data;
    std::vector<int> row_id;
    std::vector<int> col_ptr;
};

SparceMatrix transport(SparceMatrix Ant);
SparceMatrix multiply(SparceMatrix A, SparceMatrix B);
SparceMatrix tbbmultiply(SparceMatrix A, SparceMatrix B);
#endif  // MODULES_TASK_3_KUCHIN_N_CCS_MATRIX_TBB_CCS_MATRIX_TBB_H_
