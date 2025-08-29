_$sSo7CGPointV16EyeCandyGraphicsE7roundedyABs25FloatingPointRoundingRuleOF_0
double __fastcall _sSo7CGPointV16EyeCandyGraphicsE7roundedyABs25FloatingPointRoundingRuleOF_0(
        __int64 a1,
        double a2,
        double a3)
{
  __int64 v6; // x19
  __int64 v7; // x0
  __int64 v8; // x16
  __int64 v9; // x24
  __int64 v10; // x0
  __int64 v11; // x8
  char *v12; // x22
  __int64 v13; // x12
  char *v14; // x23
  void (__fastcall *v15)(__int64); // x28
  __int64 v16; // x0
  __int64 (__fastcall *v17)(char *, __int64); // x25
  int v18; // w0
  int v19; // w21
  double v20; // d9
  __int64 v21; // x0
  int v22; // w0
  __int64 v23; // x0
  void (__fastcall *v24)(__int64); // x9
  __int64 v26; // [xsp+0h] [xbp-80h] BYREF
  __int64 v27; // [xsp+8h] [xbp-78h]
  double v28; // [xsp+10h] [xbp-70h]
  double v29; // [xsp+18h] [xbp-68h]

  v6 = sub_10001D0C0(0LL);
  v7 = sub_1000044E8(v6);
  v9 = v8;
  v10 = __chkstk_darwin(v7);
  v12 = (char *)&v26 - ((v11 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  __chkstk_darwin(v10);
  v14 = (char *)&v26 - v13;
  v29 = a2;
  v15 = *(void (__fastcall **)(__int64))(v9 + 16);
  v16 = sub_1000141A0((char *)&v26 - v13);
  v15(v16);
  v27 = v9;
  v17 = *(__int64 (__fastcall **)(char *, __int64))(v9 + 88);
  v18 = v17(v14, v6);
  v19 = enum case for FloatingPointRoundingRule.toNearestOrAwayFromZero(_:);
  if ( v18 == enum case for FloatingPointRoundingRule.toNearestOrAwayFromZero(_:) )
  {
    v20 = round(a2);
  }
  else if ( v18 == enum case for FloatingPointRoundingRule.toNearestOrEven(_:) )
  {
    v20 = rint(a2);
  }
  else
  {
    if ( v18 == enum case for FloatingPointRoundingRule.up(_:) )
      goto LABEL_6;
    if ( v18 == enum case for FloatingPointRoundingRule.down(_:) )
      goto LABEL_8;
    if ( v18 == enum case for FloatingPointRoundingRule.towardZero(_:) )
    {
      v20 = trunc(a2);
      goto LABEL_11;
    }
    if ( v18 != enum case for FloatingPointRoundingRule.awayFromZero(_:) )
    {
      v26 = a1;
      sub_10001CC00(a1);
      a1 = v26;
      v23 = sub_100014124(v14);
      v24(v23);
      v20 = v29;
      goto LABEL_12;
    }
    if ( (*(_QWORD *)&a2 & 0x8000000000000000LL) != 0 )
LABEL_8:
      v20 = floor(a2);
    else
LABEL_6:
      v20 = ceil(a2);
  }
LABEL_11:
  v29 = v20;
LABEL_12:
  v28 = a3;
  v21 = sub_1000141A0(v12);
  v15(v21);
  v22 = v17(v12, v6);
  if ( v22 != v19
    && v22 != enum case for FloatingPointRoundingRule.toNearestOrEven(_:)
    && v22 != enum case for FloatingPointRoundingRule.up(_:)
    && v22 != enum case for FloatingPointRoundingRule.down(_:)
    && v22 != enum case for FloatingPointRoundingRule.towardZero(_:)
    && v22 != enum case for FloatingPointRoundingRule.awayFromZero(_:) )
  {
    sub_10001CC00(a1);
    (*(void (__fastcall **)(char *, __int64))(v27 + 8))(v12, v6);
  }
  return v20;
}