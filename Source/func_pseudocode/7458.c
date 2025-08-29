_$s16EyeCandyGraphics8CGSSpaceV4nameSSSgvs
void __fastcall CGSSpace.name.setter(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // x20
  unsigned __int64 v3; // x21
  unsigned int *v4; // x22
  __int64 v5; // x22
  void *v6; // x20

  if ( a2 )
    v2 = a1;
  else
    v2 = 0LL;
  if ( a2 )
    v3 = a2;
  else
    v3 = 0xE000000000000000LL;
  v4 = (unsigned int *)CGSConnection.defaultConnection.unsafeMutableAddressor();
  sub_1000120F4();
  v5 = *v4;
  v6 = (void *)sub_10001CAC0(v2, v3);
  CGSSpaceSetName(v5);
  swift_bridgeObjectRelease(v3);
  objc_release(v6);
}