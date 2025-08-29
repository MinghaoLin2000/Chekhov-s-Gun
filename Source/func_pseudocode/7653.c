_$sSo17SLSTransactionRefa16EyeCandyGraphicsE17setSpaceTransform_7options9transformyAC8CGSSpaceV_So09CGSAffineH6OptionVSo08CGAffineH0VtF
__int64 __fastcall SLSTransactionRef.setSpaceTransform(_:options:transform:)(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 v3; // x20
  __int128 v4; // q1
  _OWORD v6[3]; // [xsp+0h] [xbp-30h] BYREF

  v4 = a3[1];
  v6[0] = *a3;
  v6[1] = v4;
  v6[2] = a3[2];
  return SLSTransactionSetSpaceTransform(v3, a1, a2, v6);
}