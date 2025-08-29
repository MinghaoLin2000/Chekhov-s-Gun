__Z32liteSetupDriverInfoFromDeviceIDsP13lite_driver_sP12NSDictionary
void __fastcall liteSetupDriverInfoFromDeviceIDs(lite_driver_s *a1, id a2)
{
  id v2; // x0
  id v3[2]; // [xsp+0h] [xbp-40h] BYREF
  id v4[2]; // [xsp+10h] [xbp-30h]
  id v5; // [xsp+20h] [xbp-20h]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v5 = 0LL;
  *(_OWORD *)v3 = 0u;
  *(_OWORD *)v4 = 0u;
  liteFigureOutDriverSetupInfo((__int64)v3, (__int64)a1, a2);
  objc_release(v5);
  objc_release(v4[1]);
  objc_release(v4[0]);
  v2 = v3[1];
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}