_$sSo6CGRectV16EyeCandyGraphicsE7roundedyABs25FloatingPointRoundingRuleOF
double CGRect.rounded(_:)()
{
  double v0; // d10
  double v1; // d11
  __int64 v2; // x20
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x16
  __int64 v6; // x27
  __int64 v7; // x0
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x12
  char *v11; // x23
  __int64 v12; // x0
  __int64 v13; // x12
  char *v14; // x24
  __int64 v15; // x12
  char *v16; // x25
  void (__fastcall *v17)(__int64); // x28
  __int64 v18; // x0
  __int64 (__fastcall *v19)(__int64); // x22
  __int64 v20; // x0
  int v21; // w0
  int v22; // w21
  double v23; // d12
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  double v27; // d13
  double Width; // d14
  __int64 v29; // x0
  __int64 v30; // x0
  int v31; // w0
  double v32; // d14
  char *v33; // x23
  __int64 v34; // x0
  __int64 v35; // x0
  int v36; // w0
  __int64 v37; // x0
  void (__fastcall *v38)(__int64); // x9
  __int64 v39; // x0
  __int64 (__fastcall *v40)(__int64); // x9
  __int64 v41; // x0
  void (__fastcall *v42)(__int64); // x9
  __int64 v44; // [xsp+0h] [xbp-D0h] BYREF
  __int64 v45; // [xsp+8h] [xbp-C8h]
  __int64 v46; // [xsp+10h] [xbp-C0h]
  char *v47; // [xsp+18h] [xbp-B8h]
  double v48; // [xsp+20h] [xbp-B0h]
  double v49; // [xsp+28h] [xbp-A8h]
  double v50; // [xsp+30h] [xbp-A0h]
  double v51; // [xsp+38h] [xbp-98h]
  CGRect v52; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  v2 = sub_1000140C8();
  v3 = sub_10001D0C0(0LL);
  v4 = sub_1000044E8(v3);
  v6 = v5;
  v7 = __chkstk_darwin(v4);
  v47 = (char *)&v44 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = __chkstk_darwin(v7);
  v11 = (char *)&v44 - v10;
  v12 = __chkstk_darwin(v9);
  v14 = (char *)&v44 - v13;
  __chkstk_darwin(v12);
  v16 = (char *)&v44 - v15;
  v51 = v1;
  v17 = *(void (__fastcall **)(__int64))(v6 + 16);
  v18 = sub_1000140DC((char *)&v44 - v15);
  v17(v18);
  v46 = v6;
  v19 = *(__int64 (__fastcall **)(__int64))(v6 + 88);
  v20 = sub_100014134(v16);
  v21 = v19(v20);
  v22 = enum case for FloatingPointRoundingRule.toNearestOrAwayFromZero(_:);
  if ( v21 == enum case for FloatingPointRoundingRule.toNearestOrAwayFromZero(_:) )
  {
    v23 = round(v1);
    v51 = v23;
    goto LABEL_12;
  }
  if ( v21 == enum case for FloatingPointRoundingRule.toNearestOrEven(_:) )
  {
    v23 = rint(v1);
LABEL_11:
    v51 = v23;
    goto LABEL_12;
  }
  if ( v21 == enum case for FloatingPointRoundingRule.up(_:) )
  {
LABEL_6:
    v23 = ceil(v1);
    goto LABEL_11;
  }
  if ( v21 == enum case for FloatingPointRoundingRule.down(_:) )
  {
LABEL_8:
    v23 = floor(v1);
    goto LABEL_11;
  }
  if ( v21 == enum case for FloatingPointRoundingRule.towardZero(_:) )
  {
    v23 = trunc(v1);
    goto LABEL_11;
  }
  if ( v21 == enum case for FloatingPointRoundingRule.awayFromZero(_:) )
  {
    if ( (*(_QWORD *)&v1 & 0x8000000000000000LL) == 0 )
      goto LABEL_6;
    goto LABEL_8;
  }
  v45 = v2;
  sub_10001CC00(v2);
  v2 = v45;
  v37 = sub_100014124(v16);
  v38(v37);
  v23 = v51;
LABEL_12:
  v50 = v0;
  v24 = sub_1000140DC(v14);
  v17(v24);
  v25 = sub_100014134(v14);
  v26 = v19(v25);
  if ( (_DWORD)v26 == v22 )
  {
    v27 = round(v0);
LABEL_22:
    v50 = v27;
    goto LABEL_23;
  }
  if ( (_DWORD)v26 == enum case for FloatingPointRoundingRule.toNearestOrEven(_:) )
  {
    v27 = rint(v0);
    goto LABEL_22;
  }
  if ( (_DWORD)v26 == enum case for FloatingPointRoundingRule.up(_:) )
  {
LABEL_17:
    v27 = ceil(v0);
    goto LABEL_22;
  }
  if ( (_DWORD)v26 == enum case for FloatingPointRoundingRule.down(_:) )
  {
LABEL_19:
    v27 = floor(v0);
    goto LABEL_22;
  }
  if ( (_DWORD)v26 == enum case for FloatingPointRoundingRule.towardZero(_:) )
  {
    v27 = trunc(v0);
    goto LABEL_22;
  }
  if ( (_DWORD)v26 == enum case for FloatingPointRoundingRule.awayFromZero(_:) )
  {
    if ( (*(_QWORD *)&v0 & 0x8000000000000000LL) == 0 )
      goto LABEL_17;
    goto LABEL_19;
  }
  sub_10001CC00(v2);
  v39 = sub_100014124(v14);
  v26 = v40(v39);
LABEL_23:
  sub_1000140F0(v26);
  Width = CGRectGetWidth(v52);
  v49 = Width;
  v29 = sub_1000140DC(v11);
  v17(v29);
  v30 = sub_100014134(v11);
  v31 = v19(v30);
  if ( v31 == v22 )
  {
    v32 = round(Width);
  }
  else if ( v31 == enum case for FloatingPointRoundingRule.toNearestOrEven(_:) )
  {
    v32 = rint(Width);
  }
  else
  {
    if ( v31 == enum case for FloatingPointRoundingRule.up(_:) )
      goto LABEL_28;
    if ( v31 == enum case for FloatingPointRoundingRule.down(_:) )
      goto LABEL_30;
    if ( v31 == enum case for FloatingPointRoundingRule.towardZero(_:) )
    {
      v32 = trunc(Width);
      goto LABEL_33;
    }
    if ( v31 != enum case for FloatingPointRoundingRule.awayFromZero(_:) )
    {
      sub_10001CC00(v2);
      v41 = sub_100014124(v11);
      v42(v41);
      goto LABEL_34;
    }
    if ( (*(_QWORD *)&Width & 0x8000000000000000LL) != 0 )
LABEL_30:
      v32 = floor(Width);
    else
LABEL_28:
      v32 = ceil(Width);
  }
LABEL_33:
  v49 = v32;
LABEL_34:
  v33 = v47;
  v48 = sub_100014160();
  v34 = sub_1000140DC(v33);
  v17(v34);
  v35 = sub_100014134(v33);
  v36 = v19(v35);
  if ( v36 != v22
    && v36 != enum case for FloatingPointRoundingRule.toNearestOrEven(_:)
    && v36 != enum case for FloatingPointRoundingRule.up(_:)
    && v36 != enum case for FloatingPointRoundingRule.down(_:)
    && v36 != enum case for FloatingPointRoundingRule.towardZero(_:)
    && v36 != enum case for FloatingPointRoundingRule.awayFromZero(_:) )
  {
    sub_10001CC00(v2);
    (*(void (__fastcall **)(char *, __int64))(v46 + 8))(v33, v3);
  }
  return v23;
}