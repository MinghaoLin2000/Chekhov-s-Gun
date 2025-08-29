_$s16EyeCandyGraphics9CGSWindowV13getResolution10connection04CoreC07CGFloatVSgAA13CGSConnectionV_tF
__int64 __fastcall CGSWindow.getResolution(connection:)(__int64 a1, __int64 a2)
{
  __int64 v3; // [xsp+0h] [xbp-10h] BYREF

  v3 = 0x3FF0000000000000LL;
  if ( (unsigned int)CGSGetWindowResolution(a1, a2, &v3, 0LL) )
    return 0LL;
  else
    return v3;
}