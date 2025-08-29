$s17ControlCenterCore16MenuFlashStepperVwet
__int64 __fastcall getEnumTagSinglePayload for MenuFlashStepper(__int64 a1, unsigned int a2)
{
  int v2; // w8
  unsigned int v3; // w8
  bool v4; // cf

  if ( a2 )
  {
    if ( a2 >= 0xFD && *(_BYTE *)(a1 + 17) )
    {
      v2 = *(_DWORD *)a1 + 252;
    }
    else
    {
      v3 = *(unsigned __int8 *)(a1 + 16);
      v4 = v3 >= 4;
      v2 = v3 - 4;
      if ( !v4 )
        v2 = -1;
    }
  }
  else
  {
    v2 = -1;
  }
  return (unsigned int)(v2 + 1);
}