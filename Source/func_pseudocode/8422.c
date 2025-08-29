_mapAndClampValueFromWithinRangeOntoRange
double __fastcall mapAndClampValueFromWithinRangeOntoRange(double a1, double a2, double a3, double a4, double a5)
{
  double result; // d0

  result = (a1 - a2) * (a5 - a4) / (a3 - a2) + a4;
  if ( result > a5 )
    result = a5;
  if ( result < a4 )
    return a4;
  return result;
}