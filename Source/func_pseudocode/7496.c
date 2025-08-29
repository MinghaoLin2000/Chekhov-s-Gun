_$s16EyeCandyGraphics8CGSSpaceV13managedSpacesSayACGvgZ
__int64 static CGSSpace.managedSpaces.getter()
{
  unsigned int *v0; // x19
  __int64 v1; // x2
  __int64 v2; // x3
  __int64 v3; // x4
  __int64 v4; // x5
  __int64 v5; // x6
  __int64 v6; // x7
  __int64 v8; // [xsp+0h] [xbp-30h]
  _QWORD *v9; // [xsp+8h] [xbp-28h]

  v0 = (unsigned int *)CGSConnection.defaultConnection.unsafeMutableAddressor();
  sub_1000120F4();
  return static CGSSpace.spaces(_:connection:)(7LL, *v0, v1, v2, v3, v4, v5, v6, v8, v9);
}