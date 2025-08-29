$s34AppleMediaServicesUIDynamicService22RemoteJavaScriptLoaderC9LoadErrorOwst
_BYTE *__fastcall storeEnumTagSinglePayload for RemoteJavaScriptLoader.LoadError(_BYTE *result, int a2, int a3)
{
  int v3; // w9
  unsigned int v4; // w8
  __int64 v5; // x16

  if ( (unsigned int)(a3 + 1) >= 0x10000 )
    v3 = 4;
  else
    v3 = 2;
  if ( (unsigned int)(a3 + 1) < 0x100 )
    v4 = 1;
  else
    v4 = v3;
  if ( a3 )
    v5 = v4;
  else
    v5 = 0LL;
  if ( a2 )
  {
    switch ( v5 )
    {
      case 1LL:
        *result = a2;
        return result;
      case 2LL:
        *(_WORD *)result = a2;
        return result;
      case 3LL:
        goto LABEL_19;
      case 4LL:
        *(_DWORD *)result = a2;
        return result;
      default:
        return result;
    }
  }
  switch ( v5 )
  {
    case 1LL:
      *result = 0;
      break;
    case 2LL:
      *(_WORD *)result = 0;
      break;
    case 3LL:
LABEL_19:
      __break(1u);
      JUMPOUT(0x1000398B0LL);
    case 4LL:
      *(_DWORD *)result = 0;
      break;
    default:
      return result;
  }
  return result;
}