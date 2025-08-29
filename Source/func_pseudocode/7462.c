_$s16EyeCandyGraphics8CGSSpaceV9getOwners10connectionSays5Int32VGAA13CGSConnectionV_tF
__int64 __fastcall CGSSpace.getOwners(connection:)(__int64 a1, __int64 a2)
{
  __int64 v2; // x19
  __int64 v3; // x21
  __int64 v4; // x30
  __int64 v5; // x0
  __int64 v6; // x2
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x0
  __int64 result; // x0
  void *v14; // x0
  void *v15; // x24
  __int64 v16; // x0
  char v17; // cf
  char v18; // zf
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // [xsp+68h] [xbp+68h]

  v5 = sub_1000120C4(a1, a2, v4);
  v21 = v6;
  if ( !CGSSpaceCopyOwners(v5) )
    return sub_1000120A8(&_swiftEmptyArrayStorage, v21);
  v7 = sub_10000E740();
  v8 = sub_100012134(v7);
  if ( !v2 )
    return sub_1000120A8(&_swiftEmptyArrayStorage, v21);
  v9 = sub_1000122A0(v8);
  if ( !v11 )
  {
    v3 = *(_QWORD *)(v10 + 16);
    if ( v3 )
      goto LABEL_5;
LABEL_16:
    swift_bridgeObjectRelease(v2);
    return sub_1000120A8(&_swiftEmptyArrayStorage, v21);
  }
  sub_10001214C(v9);
  v20 = sub_10001D060(v3);
  v9 = sub_1000122D0(v20);
  if ( !v3 )
    goto LABEL_16;
LABEL_5:
  v12 = sub_100012308(v9);
  result = sub_10001140C(v12);
  if ( (v3 & 0x8000000000000000LL) == 0 )
  {
    do
    {
      if ( (v2 & 0xC000000000000001LL) != 0 )
        v14 = (void *)sub_100012288(result);
      else
        v14 = (void *)sub_100012270(result);
      v15 = v14;
      objc_msgSend(v14, "intValue");
      objc_release(v15);
      v16 = sub_1000120E0();
      if ( v17 )
      {
        v19 = sub_100012168(v16);
        sub_10001140C(v19);
      }
      result = sub_1000121BC();
    }
    while ( !v18 );
    goto LABEL_16;
  }
  __break(1u);
  return result;
}