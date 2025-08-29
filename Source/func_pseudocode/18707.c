$s17ControlCenterCore16MenuFlashStepperV5StateOwst
_BYTE *__fastcall storeEnumTagSinglePayload for MenuFlashStepper.State(_BYTE *result, unsigned int a2, unsigned int a3)
{
  int v3; // w9
  unsigned int v4; // w8
  __int64 v5; // x16
  unsigned int v6; // w8

  if ( a3 + 3 >= 0xFFFF00 )
    v3 = 4;
  else
    v3 = 2;
  if ( (a3 + 3) >> 8 < 0xFF )
    v4 = 1;
  else
    v4 = v3;
  if ( a3 >= 0xFD )
    v5 = v4;
  else
    v5 = 0LL;
  if ( a2 > 0xFC )
  {
    v6 = ((a2 - 253) >> 8) + 1;
    *result = a2 + 3;
    switch ( v5 )
    {
      case 1LL:
        result[1] = v6;
        break;
      case 2LL:
        *(_WORD *)(result + 1) = v6;
        break;
      case 3LL:
LABEL_23:
        __break(1u);
        JUMPOUT(0x100049368LL);
      case 4LL:
        *(_DWORD *)(result + 1) = v6;
        break;
      default:
        return result;
    }
  }
  else
  {
    switch ( v5 )
    {
      case 1LL:
        result[1] = 0;
        if ( !a2 )
          return result;
        goto LABEL_18;
      case 2LL:
        *(_WORD *)(result + 1) = 0;
        goto LABEL_17;
      case 3LL:
        goto LABEL_23;
      case 4LL:
        *(_DWORD *)(result + 1) = 0;
        if ( !a2 )
          return result;
        goto LABEL_18;
      default:
LABEL_17:
        if ( a2 )
LABEL_18:
          *result = a2 + 3;
        break;
    }
  }
  return result;
}