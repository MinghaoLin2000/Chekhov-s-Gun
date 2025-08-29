_TSUDynamicCast
__int64 __fastcall TSUDynamicCast(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 0LL;
  if ( (objc_opt_isKindOfClass(a2, a1) & 1) != 0 )
    return a2;
  return 0LL;
}