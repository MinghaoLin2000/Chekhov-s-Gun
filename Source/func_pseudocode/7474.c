_$s16EyeCandyGraphics8CGSSpaceV8getTiles10connectionSayACGAA13CGSConnectionV_tF
__int64 __fastcall CGSSpace.getTiles(connection:)(
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
  __int64 v16; // x0
  __int64 v17; // x0
  _QWORD *v18; // x20
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  __int64 result; // x0
  __int64 v23; // x0
  void *v24; // x0
  void *v25; // x24
  __int64 v26; // x0
  char v27; // cf
  char v28; // zf
  __int64 v29; // x0
  __int64 v30; // [xsp+68h] [xbp+68h]

  v14 = sub_1000120C4(a1, a2);
  v30 = v15;
  if ( !CGSSpaceCopyTileSpaces(v14) )
  {
    v18 = _swiftEmptyArrayStorage;
    return sub_1000120A8(v18, v30);
  }
  v16 = sub_10000E740();
  v17 = sub_100012134(v16);
  v18 = _swiftEmptyArrayStorage;
  if ( !v10 )
    return sub_1000120A8(v18, v30);
  v19 = sub_1000122A0(v17);
  if ( !v21 )
  {
    v11 = *(_QWORD *)(v20 + 16);
    if ( v11 )
      goto LABEL_5;
LABEL_17:
    swift_bridgeObjectRelease(v10);
    return sub_1000120A8(v18, v30);
  }
  sub_10001214C(v19);
  v29 = sub_10001D060(v11);
  v19 = sub_1000122D0(v29);
  if ( !v11 )
    goto LABEL_17;
LABEL_5:
  result = sub_100012110(v19);
  if ( (v11 & 0x8000000000000000LL) == 0 )
  {
    v23 = sub_100012204(result);
    do
    {
      if ( v12 )
        v24 = (void *)sub_100012288(v23);
      else
        v24 = (void *)sub_100012270(v23);
      v25 = v24;
      objc_msgSend(v24, *(SEL *)(v13 + 728));
      objc_release(v25);
      v26 = sub_1000120E0();
      if ( v27 )
      {
        sub_100012180(v26);
        v18 = a10;
      }
      v23 = sub_1000121A4();
    }
    while ( !v28 );
    goto LABEL_17;
  }
  __break(1u);
  return result;
}