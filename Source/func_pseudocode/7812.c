_$s16EyeCandyGraphics9CGDisplayV8_flatMap9transformSayxGxSgACXE_tlFZ
__int64 __fastcall static CGDisplay._flatMap<A>(transform:)(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0
  __int64 v8; // x22
  __int64 v9; // x0
  _QWORD v10[4]; // [xsp-40h] [xbp-90h] BYREF
  int v11; // [xsp-20h] [xbp-70h]
  __int64 v12; // [xsp-18h] [xbp-68h]
  __int64 v13; // [xsp-10h] [xbp-60h]
  __int64 v14; // [xsp+8h] [xbp-48h] BYREF
  uint32_t displayCount; // [xsp+14h] [xbp-3Ch] BYREF

  displayCount = 0;
  v6 = CGGetActiveDisplayList(1u, 0LL, &displayCount);
  if ( (_DWORD)v6 || !displayCount )
    return sub_10001CBC0(0LL, a3);
  v8 = displayCount + 5;
  if ( displayCount >= 0xFFFFFFFB )
    __break(1u);
  __chkstk_darwin(v6);
  v10[2] = a3;
  v10[3] = &displayCount;
  v11 = v8;
  v12 = a1;
  v13 = a2;
  v9 = sub_10001CBF0(0LL, a3);
  static UnsafeMutablePointer.with<A>(_:_:)(&v14, v8, sub_100019054, v10, &type metadata for UInt32, v9);
  return v14;
}