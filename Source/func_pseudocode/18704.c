$s17ControlCenterCore16MenuFlashStepperVwst
__int64 __fastcall storeEnumTagSinglePayload for MenuFlashStepper(__int64 result, unsigned int a2, unsigned int a3)
{
  if ( a2 > 0xFC )
  {
    *(_BYTE *)(result + 16) = 0;
    *(_QWORD *)result = a2 - 253;
    *(_QWORD *)(result + 8) = 0LL;
    if ( a3 >= 0xFD )
      *(_BYTE *)(result + 17) = 1;
  }
  else
  {
    if ( a3 >= 0xFD )
      *(_BYTE *)(result + 17) = 0;
    if ( a2 )
      *(_BYTE *)(result + 16) = a2 + 3;
  }
  return result;
}