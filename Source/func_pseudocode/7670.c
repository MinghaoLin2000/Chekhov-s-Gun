_$sSo17SLSTransactionRefa16EyeCandyGraphicsE18setWindowTransform_5place6option9transformyAC9CGSWindowV_So09CGSAffineH9PlacementVSo0mH6OptionVSo08CGAffineH0VtF
__int64 __fastcall SLSTransactionRef.setWindowTransform(_:place:option:transform:)(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4)
{
  __int64 v4; // x20
  __int128 v5; // q1
  _OWORD v7[3]; // [xsp+0h] [xbp-30h] BYREF

  v5 = a4[1];
  v7[0] = *a4;
  v7[1] = v5;
  v7[2] = a4[2];
  return SLSTransactionSetWindowTransform(v4, a1, a2, a3, v7);
}