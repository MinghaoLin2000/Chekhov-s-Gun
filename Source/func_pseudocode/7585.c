_$sSo7CGPointV16EyeCandyGraphicsE2peoiyyABz_ABtFZ
double __fastcall static CGPoint.+= infix(_:_:)(double *a1, double a2, double a3)
{
  double result; // d0
  double v4; // d1

  result = *a1 + a2;
  v4 = a1[1] + a3;
  *a1 = result;
  a1[1] = v4;
  return result;
}