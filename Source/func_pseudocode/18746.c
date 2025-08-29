$s27BackgroundReplacementHelper15BackgroundsGridVwst
__int64 __fastcall storeEnumTagSinglePayload for BackgroundsGrid(__int64 result, unsigned int a2, unsigned int a3)
{
  if ( a2 > 0x7FFFFFFE )
  {
    *(_QWORD *)(result + 16) = 0LL;
    *(_QWORD *)(result + 24) = 0LL;
    *(_BYTE *)(result + 32) = 0;
    *(_QWORD *)result = a2 - 0x7FFFFFFF;
    *(_QWORD *)(result + 8) = 0LL;
    if ( a3 >= 0x7FFFFFFF )
      *(_BYTE *)(result + 33) = 1;
  }
  else
  {
    if ( a3 >= 0x7FFFFFFF )
      *(_BYTE *)(result + 33) = 0;
    if ( a2 )
      *(_QWORD *)(result + 24) = a2;
  }
  return result;
}