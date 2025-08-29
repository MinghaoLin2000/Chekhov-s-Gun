_$s16EyeCandyGraphics9CGSWindowV8contents10connection4rect7optionsSo10CGImageRefaSgAA13CGSConnectionV_So6CGRectVSo0D14CaptureOptionsVtF
__int64 __fastcall CGSWindow.contents(connection:rect:options:)(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // [xsp+0h] [xbp-10h] BYREF

  v4 = 0LL;
  if ( (sub_10001B03C(&v4, a1, a3, a2) & 1) != 0 )
    return v4;
  else
    return 0LL;
}