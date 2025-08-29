_$s16EyeCandyGraphics8CGSSpaceV22isWindowOnManagedSpace_10connectionSbAA9CGSWindowV_AA13CGSConnectionVtFZ
bool __fastcall static CGSSpace.isWindowOnManagedSpace(_:connection:)(int a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v5; // x21
  void *v6; // x22
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x20
  __int64 v14; // x0

  v4 = sub_100002BF4(&unk_100029A80);
  v5 = swift_allocObject(v4, 36LL, 7LL);
  *(_OWORD *)(v5 + 16) = xmmword_10001FC20;
  *(_DWORD *)(v5 + 32) = a1;
  v6 = (void *)sub_10001CB60(v5, &type metadata for UInt32);
  swift_bridgeObjectRelease(v5);
  v7 = CGSCopySpacesForWindows(a2, 7LL, v6);
  objc_release(v6);
  if ( !v7 )
    return 0LL;
  v8 = sub_10000E740();
  v9 = sub_100012134(v8);
  if ( !a2 )
    return 0LL;
  sub_1000122A0(v9);
  if ( v11 )
  {
    if ( a2 >= 0 )
      v12 = v10;
    else
      v12 = a2;
    swift_bridgeObjectRetain(a2);
    v14 = sub_10001D060(v12);
    sub_10001231C(v14);
  }
  else
  {
    v12 = *(_QWORD *)(v10 + 16);
  }
  swift_bridgeObjectRelease(a2);
  return v12 != 0;
}