_$sSo6CGRectV16EyeCandyGraphicsE8midPointSo7CGPointVvg
double CGRect.midPoint.getter()
{
  double MidX; // d12
  __int64 v1; // x0
  CGRect v3; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  CGRect v4; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  v3.origin.x = sub_1000140C8();
  MidX = CGRectGetMidX(v3);
  sub_1000140F0(v1);
  CGRectGetMidY(v4);
  return MidX;
}