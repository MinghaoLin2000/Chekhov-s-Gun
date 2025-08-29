_$s16EyeCandyGraphics9CGSWindowV15isOnMangedSpaceSbvg
bool __fastcall CGSWindow.isOnMangedSpace.getter(int a1)
{
  __int64 v2; // x0
  __int64 v3; // x20
  __int64 v4; // x19
  __int64 v5; // x20

  v2 = sub_100002BF4(&unk_100029A78);
  v3 = swift_allocObject(v2, 36LL, 7LL);
  *(_OWORD *)(v3 + 16) = xmmword_10001FC20;
  *(_DWORD *)(v3 + 32) = a1;
  sub_1000120A4();
  v4 = static CGSSpace.spaces(_:options:connection:)(v3, 7LL);
  swift_bridgeObjectRelease(v3);
  v5 = *(_QWORD *)(v4 + 16);
  swift_bridgeObjectRelease(v4);
  return v5 != 0;
}