_$sSo6CGRectV16EyeCandyGraphicsE1poiyA2B_AbCE9DimensionOtFZ
double __fastcall static CGRect.+ infix(_:_:)(__int64 a1, char a2, double result)
{
  switch ( a2 )
  {
    case 1:
    case 2:
    case 3:
      return result;
    default:
      result = *(double *)&a1 + result;
      break;
  }
  return result;
}