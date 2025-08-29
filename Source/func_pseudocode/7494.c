_$s16EyeCandyGraphics8CGSSpaceV6spaces_7options10connectionSayACGSayAA9CGSWindowVG_So0D11ListOptionsVAA13CGSConnectionVtFZ
__int64 __fastcall static CGSSpace.spaces(_:options:connection:)(__int64 a1, __int64 a2)
{
  __int64 v2; // x25
  __int64 v3; // x26
  __int64 v4; // x0
  __int64 v5; // x3
  __int64 v6; // x2
  __int64 v7; // x19
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x22
  __int64 v11; // x0
  void *v12; // x22
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x0
  _QWORD *v16; // x20
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 v19; // x9
  __int64 result; // x0
  __int64 v21; // x0
  void *v22; // x0
  void *v23; // x24
  __int64 v24; // x0
  char v25; // cf
  char v26; // zf
  __int64 v27; // x0
  _QWORD *v28; // [xsp+8h] [xbp+8h]
  __int64 v29; // [xsp+68h] [xbp+68h]

  v4 = sub_1000120C4(a1, a2);
  v29 = v5;
  v7 = v6;
  v9 = v8;
  v28 = (_QWORD *)v4;
  v10 = sub_100002BF4(&unk_100029BE0);
  v11 = sub_100011A98();
  v12 = (void *)Collection<>.cfarray.getter(v10, v11);
  v13 = CGSCopySpacesForWindows(v7, v9, v12);
  objc_release(v12);
  if ( !v13 )
  {
    v16 = _swiftEmptyArrayStorage;
    return sub_1000120A8(v16, v29);
  }
  v14 = sub_10000E740();
  v15 = sub_100012134(v14);
  v16 = _swiftEmptyArrayStorage;
  if ( !v7 )
    return sub_1000120A8(v16, v29);
  v17 = sub_1000122A0(v15);
  if ( !v19 )
  {
    v9 = *(_QWORD *)(v18 + 16);
    if ( v9 )
      goto LABEL_5;
LABEL_17:
    swift_bridgeObjectRelease(v7);
    return sub_1000120A8(v16, v29);
  }
  sub_10001214C(v17);
  v27 = sub_10001D060(v9);
  v17 = sub_1000122D0(v27);
  if ( !v9 )
    goto LABEL_17;
LABEL_5:
  result = sub_100012110(v17);
  if ( (v9 & 0x8000000000000000LL) == 0 )
  {
    v21 = sub_100012204(result);
    do
    {
      if ( v2 )
        v22 = (void *)sub_100012288(v21);
      else
        v22 = (void *)sub_100012270(v21);
      v23 = v22;
      objc_msgSend(v22, *(SEL *)(v3 + 728));
      objc_release(v23);
      v24 = sub_1000120E0();
      if ( v25 )
      {
        sub_100012180(v24);
        v16 = v28;
      }
      v21 = sub_1000121A4();
    }
    while ( !v26 );
    goto LABEL_17;
  }
  __break(1u);
  return result;
}