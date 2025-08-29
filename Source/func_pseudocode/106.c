$s9SPIHelper12SharingErrorOwet
__int64 __fastcall getEnumTagSinglePayload for SharingError(__int64 a1, unsigned int a2)
{
  unsigned int v3; // w8
  int v4; // w8

  if ( !a2 )
    return 0LL;
  if ( a2 >= 0xF3 && *(_BYTE *)(a1 + 41) )
    return (unsigned int)(*(_DWORD *)a1 + 243);
  v3 = *(unsigned __int8 *)(a1 + 40);
  if ( v3 <= 0xD )
    v4 = -1;
  else
    v4 = v3 ^ 0xFF;
  return (unsigned int)(v4 + 1);
}