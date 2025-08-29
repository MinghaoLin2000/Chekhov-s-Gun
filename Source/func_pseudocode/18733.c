$s27BackgroundReplacementHelper21BackgroundStylePickerVwet
__int64 __fastcall getEnumTagSinglePayload for BackgroundStylePicker(__int64 *a1, int a2)
{
  __int64 v2; // x8

  if ( a2 )
  {
    if ( a2 < 0 && *((_BYTE *)a1 + 25) )
    {
      LODWORD(v2) = *(_DWORD *)a1 + 0x7FFFFFFF;
    }
    else
    {
      v2 = *a1;
      if ( (unsigned __int64)*a1 >= 0xFFFFFFFF )
        LODWORD(v2) = -1;
    }
  }
  else
  {
    LODWORD(v2) = -1;
  }
  return (unsigned int)(v2 + 1);
}