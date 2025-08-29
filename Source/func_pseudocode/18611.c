$s17ControlCenterCore24ScrollGesturePreferencesC4KeysOwet
__int64 __fastcall getEnumTagSinglePayload for ScrollGesturePreferences.Keys(unsigned int *a1, int a2)
{
  int v2; // w9
  int v3; // w8

  if ( !a2 )
    return 0LL;
  if ( (unsigned int)(a2 + 1) >= 0x10000 )
    v2 = 4;
  else
    v2 = 2;
  if ( (unsigned int)(a2 + 1) < 0x100 )
    v3 = 1;
  else
    v3 = v2;
  if ( v3 == 4 )
    return *a1;
  if ( v3 == 2 )
    return *(unsigned __int16 *)a1;
  return *(unsigned __int8 *)a1;
}