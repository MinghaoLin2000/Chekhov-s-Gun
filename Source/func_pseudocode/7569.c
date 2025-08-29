_$sSo6CGRectV16EyeCandyGraphicsE15rectByCenteringyA2BF
double CGRect.rectByCentering(_:)()
{
  double v0; // d9
  double MidX; // d14
  CGRect v3; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  v3.origin.x = sub_100014144();
  MidX = CGRectGetMidX(v3);
  sub_100014104();
  return MidX - v0 * 0.5;
}