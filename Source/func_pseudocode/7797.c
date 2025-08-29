_$s16EyeCandyGraphics9CGDisplayV11scaleFactorSfvg
float __fastcall CGDisplay.scaleFactor.getter(__int64 a1)
{
  float v2; // s8
  unsigned int v4; // [xsp+0h] [xbp-110h] BYREF
  _BYTE v5[180]; // [xsp+4h] [xbp-10Ch] BYREF
  __int128 v6; // [xsp+B8h] [xbp-58h]
  __int128 v7; // [xsp+C8h] [xbp-48h]

  v4 = 0;
  v2 = 1.0;
  if ( !(unsigned int)CGSGetCurrentDisplayMode(a1, &v4) )
  {
    bzero(v5, 0xB1uLL);
    v7 = 0u;
    v6 = 0u;
    if ( !(unsigned int)CGSGetDisplayModeDescriptionOfLength(a1, v4, v5, 212LL) )
      return *((float *)&v7 + 3);
  }
  return v2;
}