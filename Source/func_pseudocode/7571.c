_$sSo6CGRectV16EyeCandyGraphicsE25rectByCenteringAndScalingyA2BF
double CGRect.rectByCenteringAndScaling(_:)()
{
  double v0; // d9
  __int64 v1; // x0
  double v2; // d3
  double v3; // d7
  double v4; // d2
  double v5; // d6
  double v6; // d0
  double v7; // d14
  double v8; // d14

  v1 = sub_100014144();
  v6 = v4 / v5;
  if ( v2 / v3 < v4 / v5 )
    v6 = v2 / v3;
  if ( v6 >= 1.0 )
  {
    v8 = sub_100014180(v1);
    sub_100014104();
    return v8 + v0 * -0.5;
  }
  else
  {
    v7 = sub_100014180(v1) + v6 * v0 * -0.5;
    sub_100014104();
  }
  return v7;
}