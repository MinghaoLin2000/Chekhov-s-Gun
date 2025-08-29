$s34AppleMediaServicesUIDynamicService30EngagementMessagePlacementInfoVwst
__int64 __fastcall storeEnumTagSinglePayload for EngagementMessagePlacementInfo(__int64 result, int a2, int a3)
{
  if ( a2 < 0 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    *(_QWORD *)(result + 16) = 0LL;
    *(_QWORD *)result = a2 ^ 0x80000000;
    if ( a3 < 0 )
      *(_BYTE *)(result + 24) = 1;
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
    *(_BYTE *)(result + 24) = 0;
    if ( a2 )
      goto LABEL_8;
  }
  return result;
}