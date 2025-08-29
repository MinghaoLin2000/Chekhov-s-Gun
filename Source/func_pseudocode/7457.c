_$s16EyeCandyGraphics8CGSSpaceV4nameSSSgvg
__int64 __fastcall CGSSpace.name.getter(__int64 a1)
{
  unsigned int *v2; // x20
  __int64 result; // x0

  v2 = (unsigned int *)CGSConnection.defaultConnection.unsafeMutableAddressor();
  sub_1000120F4();
  result = CGSSpaceCopyName(*v2, a1);
  if ( result )
    return sub_10001CAE0();
  return result;
}