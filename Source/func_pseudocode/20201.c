_urfWriteStart
__int64 __fastcall urfWriteStart(__int64 result, int a2)
{
  __int64 v2; // x19
  __int64 v3; // [xsp+8h] [xbp-28h] BYREF
  char v4; // [xsp+10h] [xbp-20h]
  char v5; // [xsp+11h] [xbp-1Fh]
  char v6; // [xsp+12h] [xbp-1Eh]
  char v7; // [xsp+13h] [xbp-1Dh]

  if ( result )
  {
    v2 = result;
    *(_DWORD *)(result + 16) = a2;
    v3 = 0x54534152494E55LL;
    v4 = HIBYTE(a2);
    v5 = BYTE2(a2);
    v6 = BYTE1(a2);
    v7 = a2;
    if ( (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))result)(*(_QWORD *)(result + 8), &v3, 12LL) == 12 )
    {
      return 1LL;
    }
    else
    {
      result = 0LL;
      *(_QWORD *)(v2 + 112) = "Unable to write file header";
    }
  }
  return result;
}