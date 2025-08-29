_$sSl16EyeCandyGraphicsSo6CGRectV7ElementRtzrlE5unionACyF
double __fastcall Collection<>.union()(__int64 a1, __int64 a2)
{
  __int64 v5; // x0
  _OWORD v6[2]; // [xsp+10h] [xbp-70h] BYREF
  _OWORD v7[2]; // [xsp+30h] [xbp-50h] BYREF
  char v8; // [xsp+50h] [xbp-30h]

  sub_10001CC70(v7);
  if ( (v8 & 1) != 0 )
    return 0.0;
  v6[0] = v7[0];
  v6[1] = v7[1];
  v5 = type metadata accessor for CGRect(0LL);
  sub_10001CB50(v7, v6, sub_100013A44, 0LL, a1, v5, *(_QWORD *)(a2 + 8));
  return *(double *)v7;
}