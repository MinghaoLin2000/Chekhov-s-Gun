$s17ControlCenterCore8VibrancyOwet
__int64 __fastcall getEnumTagSinglePayload for Vibrancy(__int64 a1, unsigned int a2)
{
  unsigned int v2; // w8

  if ( a2 )
  {
    if ( a2 >= 0x7E && *(_BYTE *)(a1 + 8) )
    {
      v2 = *(_DWORD *)a1 + 125;
    }
    else
    {
      v2 = (((unsigned int)(*(_QWORD *)a1 >> 57) >> 5) | (4 * ((*(_QWORD *)a1 >> 57) & 0x18 | *(_QWORD *)a1 & 7))) ^ 0x7F;
      if ( v2 >= 0x7D )
        v2 = -1;
    }
  }
  else
  {
    v2 = -1;
  }
  return v2 + 1;
}