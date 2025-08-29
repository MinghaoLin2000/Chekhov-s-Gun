_FindPluginByScheme
__int64 __fastcall FindPluginByScheme(const __CFString *a1)
{
  __int64 result; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  result = sub_100004A3C(a1);
  if ( !result )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_100004A3C(a1);
  }
  return result;
}