$s9SPIHelper12ShareAddressOwet
__int64 __fastcall getEnumTagSinglePayload for ShareAddress(__int64 a1, unsigned int a2)
{
  unsigned int v3; // w8
  int v4; // w8

  if ( !a2 )
    return 0LL;
  if ( a2 >= 0xFF && *(_BYTE *)(a1 + 17) )
    return (unsigned int)(*(_DWORD *)a1 + 255);
  v3 = *(unsigned __int8 *)(a1 + 16);
  if ( v3 <= 1 )
    v4 = -1;
  else
    v4 = v3 ^ 0xFF;
  return (unsigned int)(v4 + 1);
}