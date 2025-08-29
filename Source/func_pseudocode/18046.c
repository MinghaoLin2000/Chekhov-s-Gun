_netfs_CreateURL
__int64 __fastcall netfs_CreateURL(const __CFDictionary *a1, __int64 a2)
{
  const __CFString *Value; // x0
  __int64 PluginByScheme; // x0
  __int64 v6; // x0
  __int64 (__fastcall *v7)(const __CFDictionary *, __int64); // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  Value = (const __CFString *)CFDictionaryGetValue(a1, CFSTR("Scheme"));
  if ( !Value )
    return 22LL;
  PluginByScheme = FindPluginByScheme(Value);
  if ( !PluginByScheme )
    return 45LL;
  v6 = sub_100007BE8(PluginByScheme);
  if ( !v6 )
    return 45LL;
  v7 = *(__int64 (__fastcall **)(const __CFDictionary *, __int64))(*(_QWORD *)v6 + 56LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v7(a1, a2);
}