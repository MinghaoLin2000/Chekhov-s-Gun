$s19ControlCenterHelper14ReferenceCountVwst
__int64 __fastcall storeEnumTagSinglePayload for ReferenceCount(__int64 result, int a2, int a3)
{
  if ( a2 < 0 )
  {
    *(_QWORD *)result = a2 ^ 0x80000000;
    *(_QWORD *)(result + 8) = 0LL;
    if ( a3 < 0 )
      *(_BYTE *)(result + 16) = 1;
  }
  else
  {
    if ( (a3 & 0x80000000) == 0 )
    {
      if ( !a2 )
        return result;
LABEL_8:
      *(_QWORD *)result = (unsigned int)(a2 - 1);
      return result;
    }
    *(_BYTE *)(result + 16) = 0;
    if ( a2 )
      goto LABEL_8;
  }
  return result;
}