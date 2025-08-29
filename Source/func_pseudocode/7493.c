_$s16EyeCandyGraphics8CGSSpaceV6spaces_10connectionSayACGSo0D11ListOptionsV_AA13CGSConnectionVtFZ
__int64 __fastcall static CGSSpace.spaces(_:connection:)(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10)
{
  __int64 v10; // x19
  __int64 v11; // x21
  __int64 v12; // x25
  __int64 v13; // x26
  __int64 v14; // x0
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x0
  __int64 v18; // x0
  _QWORD *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  __int64 result; // x0
  __int64 v24; // x0
  void *v25; // x0
  void *v26; // x24
  __int64 v27; // x0
  char v28; // cf
  char v29; // zf
  __int64 v30; // x0
  __int64 v31; // [xsp+68h] [xbp+68h]

  v14 = sub_1000120C4(a1, a2);
  v31 = v15;
  if ( !CGSCopySpaces(v16, v14) )
  {
    v19 = _swiftEmptyArrayStorage;
    return sub_1000120A8(v19, v31);
  }
  v17 = sub_10000E740();
  v18 = sub_100012134(v17);
  v19 = _swiftEmptyArrayStorage;
  if ( !v10 )
    return sub_1000120A8(v19, v31);
  v20 = sub_1000122A0(v18);
  if ( !v22 )
  {
    v11 = *(_QWORD *)(v21 + 16);
    if ( v11 )
      goto LABEL_5;
LABEL_17:
    swift_bridgeObjectRelease(v10);
    return sub_1000120A8(v19, v31);
  }
  sub_10001214C(v20);
  v30 = sub_10001D060(v11);
  v20 = sub_1000122D0(v30);
  if ( !v11 )
    goto LABEL_17;
LABEL_5:
  result = sub_100012110(v20);
  if ( (v11 & 0x8000000000000000LL) == 0 )
  {
    v24 = sub_100012204(result);
    do
    {
      if ( v12 )
        v25 = (void *)sub_100012288(v24);
      else
        v25 = (void *)sub_100012270(v24);
      v26 = v25;
      objc_msgSend(v25, *(SEL *)(v13 + 728));
      objc_release(v26);
      v27 = sub_1000120E0();
      if ( v28 )
      {
        sub_100012180(v27);
        v19 = a10;
      }
      v24 = sub_1000121A4();
    }
    while ( !v29 );
    goto LABEL_17;
  }
  __break(1u);
  return result;
}