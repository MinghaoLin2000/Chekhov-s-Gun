$s17ControlCenterCore16HoverCoordinatorC5EntryVwet
__int64 __fastcall getEnumTagSinglePayload for HoverCoordinator.Entry(__int64 a1, int a2)
{
  unsigned __int64 v2; // x8

  if ( a2 )
  {
    if ( a2 < 0 && *(_BYTE *)(a1 + 56) )
    {
      LODWORD(v2) = *(_DWORD *)a1 + 0x7FFFFFFF;
    }
    else
    {
      v2 = *(_QWORD *)(a1 + 8);
      if ( v2 >= 0xFFFFFFFF )
        LODWORD(v2) = -1;
    }
  }
  else
  {
    LODWORD(v2) = -1;
  }
  return (unsigned int)(v2 + 1);
}