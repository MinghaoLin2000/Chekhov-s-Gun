_$s16EyeCandyGraphics9CGSWindowV14getConstraints10connectionSo6CGSizeV3min_AG3maxAG9preferredtAA13CGSConnectionV_tF
__n128 __usercall CGSWindow.getConstraints(connection:)@<Q0>(__int64 a1@<X0>, __int64 a2@<X1>, __int64 a3@<X8>)
{
  __n128 result; // q0
  __int128 v5; // q1
  __n128 v6; // [xsp+0h] [xbp-50h] BYREF
  __int128 v7; // [xsp+10h] [xbp-40h] BYREF
  __int128 v8; // [xsp+20h] [xbp-30h] BYREF

  v8 = 0uLL;
  v7 = 0uLL;
  v6 = 0uLL;
  CGSPackagesGetWindowConstraints(a1, a2, &v8, &v7, &v6);
  result = v6;
  v5 = v7;
  *(_OWORD *)a3 = v8;
  *(_OWORD *)(a3 + 16) = v5;
  *(__n128 *)(a3 + 32) = result;
  return result;
}