typedef struct {
  int data[10][10];
} Mat; // 2D Matrix

typedef struct {
  int data[1][10];
} VecRow; // Row Vector

typedef struct {
  int data[10][1];
} VecCol; // Column Vector

void Multiply_M_M(Mat a, Mat b, Mat *c);         // c = a * b
void Multiply_M_VC(Mat a, VecCol b, VecCol *c);  // c = a * b
void Multiply_VR_M(VecRow a, Mat b, VecRow *c);  // c = a * b
void Multiply_VC_VR(VecCol a, VecRow b, Mat *c); // c = a * b
void Multiply_VR_VC(VecRow a, VecCol b, int *c); // c = a * b

int main() {
  Mat m1, m2, rm;
  VecRow rv, rrv;
  VecCol cv, rcv;
  int r;
  Multiply_M_M(m1, m2, &rm);   // rm <-- m1 * m2
  Multiply_M_VC(m1, cv, &rcv); // rcv <-- m1 * cv
  Multiply_VR_M(rv, m2, &rrv); // rrv <-- rv * m2
  Multiply_VC_VR(cv, rv, &rm); // rm <-- cv * rv
  Multiply_VR_VC(rv, cv, &r);  // r <-- rv * cv
  return 0;
}

/*
 * define multiple functions having the same name
 * binding happens at compile time
 *
 */
