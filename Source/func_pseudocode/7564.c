_$sSo6CGRectV16EyeCandyGraphicsE7roundedAByF
double CGRect.rounded()()
{
  __int64 v0; // x19
  __int64 v1; // x0
  __int64 v2; // x16
  __int64 v3; // x21
  __int64 v4; // x8
  char *v5; // x20
  __int64 v6; // x0
  double v7; // d8
  __int64 v9; // [xsp+0h] [xbp-40h] BYREF

  sub_1000140C8();
  v0 = sub_10001D0C0(0LL);
  v1 = sub_1000044E8(v0);
  v3 = v2;
  __chkstk_darwin(v1);
  v5 = (char *)&v9 - ((v4 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  (*(void (__fastcall **)(char *, _QWORD, __int64))(v3 + 104))(
    v5,
    enum case for FloatingPointRoundingRule.toNearestOrAwayFromZero(_:),
    v0);
  v6 = sub_1000140F0(v5);
  v7 = CGRect.rounded(_:)(v6);
  (*(void (__fastcall **)(char *, __int64))(v3 + 8))(v5, v0);
  return v7;
}