_$s16EyeCandyGraphics9CGSWindowV5levels5Int32VSgvs
__int64 __fastcall CGSWindow.level.setter(__int64 result, __int64 a2)
{
  __int64 v3; // x19
  int *v4; // x21

  if ( (result & 0x100000000LL) == 0 )
  {
    v3 = result;
    v4 = CGSConnection.defaultConnection.unsafeMutableAddressor();
    sub_1000120F4();
    return CGSSetWindowLevel((unsigned int)*v4, a2, v3);
  }
  return result;
}