$s34AppleMediaServicesUIDynamicService9JSAccountVwst
__int64 __fastcall storeEnumTagSinglePayload for JSAccount(__int64 result, int a2, int a3)
{
  if ( a2 < 0 )
  {
    *(_OWORD *)(result + 8) = 0u;
    *(_OWORD *)(result + 24) = 0u;
    *(_QWORD *)result = a2 ^ 0x80000000;
    if ( a3 < 0 )
      *(_BYTE *)(result + 40) = 1;
  }
  else
  {
    if ( (a3 & 0x80000000) == 0 )
    {
      if ( !a2 )
        return result;
LABEL_8:
      *(_QWORD *)(result + 24) = (unsigned int)(a2 - 1);
      return result;
    }
    *(_BYTE *)(result + 40) = 0;
    if ( a2 )
      goto LABEL_8;
  }
  return result;
}