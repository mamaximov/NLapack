/* DO NOT EDIT THIS FILE - it is machine generated */
/* Header for class spbu_linalg_lapack_JLapack */
/*
JNIEXPORT void JNICALL Java_spbu_linalg_lapack_JLapack_freelibs
  (JNIEnv *, jobject);


JNIEXPORT jint JNICALL Java_spbu_linalg_lapack_JLapack_simpletest
  (JNIEnv *, jobject);
  */

int lapack_CholD(CJRMatrix a, CJRMatrix & r);


/*JNIEXPORT jint JNICALL Java_spbu_linalg_lapack_JLapack__1CholZ
  (JNIEnv *, jobject, jobject, jobject);
  */

void lapack_invD(CJRMatrix a, CJRMatrix & b);

/*
 * Class:     spbu_linalg_lapack_JLapack
 * Method:    _invZ
 * Signature: (Lspbu/linalg/matrix/JComplexMatrix;Lspbu/linalg/matrix/JComplexMatrix;)I
 */
/*JNIEXPORT jint JNICALL Java_spbu_linalg_lapack_JLapack__1invZ
  (JNIEnv *, jobject, jobject, jobject);*/

long lapack_geevxD(int balanc, CJRMatrix a, CJCMatrix & w, CJCMatrix & vl, CJCMatrix & vr, CJRMatrix & rconde, CJRMatrix & rcondv);

/*
JNIEXPORT jlong JNICALL Java_spbu_linalg_lapack_JLapack__1geevxZ
  (JNIEnv *, jobject, jint, jobject, jobject, jobject, jobject, jobject, jobject);*/

/*
 * Class:     spbu_linalg_lapack_JLapack
 * Method:    _geevD
 * Signature: (Lspbu/linalg/matrix/JRealMatrix;Lspbu/linalg/matrix/JComplexMatrix;Lspbu/linalg/matrix/JComplexMatrix;Lspbu/linalg/matrix/JComplexMatrix;)J
 */
long lapack_geevD(CJRMatrix a, CJCMatrix & w,  CJCMatrix & vl, CJCMatrix & vr);

/*
 * Class:     spbu_linalg_lapack_JLapack
 * Method:    _geevZ
 * Signature: (Lspbu/linalg/matrix/JComplexMatrix;Lspbu/linalg/matrix/JComplexMatrix;Lspbu/linalg/matrix/JComplexMatrix;Lspbu/linalg/matrix/JComplexMatrix;)J

JNIEXPORT jlong JNICALL Java_spbu_linalg_lapack_JLapack__1geevZ
  (JNIEnv *, jobject, jobject, jobject, jobject, jobject);
 */
/*
 * Class:     spbu_linalg_lapack_JLapack
 * Method:    _multiplyS
 * Signature: (Lspbu/linalg/matrix/JFloatMatrix;Lspbu/linalg/matrix/JFloatMatrix;Lspbu/linalg/matrix/JFloatMatrix;)I

JNIEXPORT jint JNICALL Java_spbu_linalg_lapack_JLapack__1multiplyS
  (JNIEnv *, jobject, jobject, jobject, jobject);
 */
/*
 * Class:     spbu_linalg_lapack_JLapack
 * Method:    _multiplyD
 * Signature: (Lspbu/linalg/matrix/JRealMatrix;Lspbu/linalg/matrix/JRealMatrix;Lspbu/linalg/matrix/JRealMatrix;)I
 */
int lapack_multiplyD(CJRMatrix a, CJRMatrix b, CJRMatrix &c);


int lapack_multiplyZ(CJCMatrix a, CJCMatrix b, CJCMatrix &c);


/*
 * Class:     spbu_linalg_lapack_JLapack
 * Method:    _solveSLED
 * Signature: (Lspbu/linalg/matrix/JRealMatrix;Lspbu/linalg/matrix/JRealMatrix;Lspbu/linalg/matrix/JRealMatrix;)I
 */
int lapack_solveSLED  (CJRMatrix A, CJRMatrix B, CJRMatrix & X);


int lapack_solveSLEZ  (CJCMatrix A, CJCMatrix B, CJCMatrix & X);
 
/*
 * Class:     spbu_linalg_lapack_JLapack
 * Method:    matrixNorm
 * Signature: (Ljava/lang/String;Lspbu/linalg/matrix/JRealMatrix;)D
 */
double lapack_matrixNorm(char norm, CJRMatrix a);

double lapack_matrixRConditionNumber(char norm, CJRMatrix a, double anorm);

/*
 * Class:     spbu_linalg_lapack_JLapack
 * Method:    _LUPDecompositionD
 * Signature: (Lspbu/linalg/matrix/JRealMatrix;Lspbu/linalg/matrix/JRealMatrix;Lspbu/linalg/matrix/JRealMatrix;Lspbu/linalg/matrix/JRealMatrix;)I
 */
int lapack_LUPDecompositionD(CJRMatrix a, CJRMatrix b, CJRMatrix & l, CJRMatrix & u);

/*
 * Class:     spbu_linalg_lapack_JLapack
 * Method:    _LUPDecompositionZ
 * Signature: (Lspbu/linalg/matrix/JComplexMatrix;Lspbu/linalg/matrix/JComplexMatrix;Lspbu/linalg/matrix/JComplexMatrix;Lspbu/linalg/matrix/JComplexMatrix;)I

JNIEXPORT jint JNICALL Java_spbu_linalg_lapack_JLapack__1LUPDecompositionZ
  (JNIEnv *, jobject, jobject, jobject, jobject, jobject);
 */
int lapack_SVDDecompositionD(CJRMatrix a, CJRMatrix & s, CJRMatrix & u, CJRMatrix & vt);

int lapack_SVDDecompositionZ(CJCMatrix a, CJRMatrix & s, CJCMatrix & u, CJCMatrix & vt);
/*
 * Class:     spbu_linalg_lapack_JLapack
 * Method:    _SVDDecompositionS
 * Signature: (Lspbu/linalg/matrix/JFloatMatrix;Lspbu/linalg/matrix/JFloatMatrix;Lspbu/linalg/matrix/JFloatMatrix;Lspbu/linalg/matrix/JFloatMatrix;)I

JNIEXPORT jint JNICALL Java_spbu_linalg_lapack_JLapack__1SVDDecompositionS
  (JNIEnv *, jobject, jobject, jobject, jobject, jobject);
 */
/*
 * Class:     spbu_linalg_lapack_JLapack
 * Method:    _SVDDecompositionC
 * Signature: (Lspbu/linalg/matrix/JComplex64Matrix;Lspbu/linalg/matrix/JFloatMatrix;Lspbu/linalg/matrix/JComplex64Matrix;Lspbu/linalg/matrix/JComplex64Matrix;)I
 
JNIEXPORT jint JNICALL Java_spbu_linalg_lapack_JLapack__1SVDDecompositionC
  (JNIEnv *, jobject, jobject, jobject, jobject, jobject);
*/
void lapack_dlarnv(int idist, CJIMatrix & iseed, CJRMatrix & x);

