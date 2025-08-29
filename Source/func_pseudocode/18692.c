$s17ControlCenterCore19NavigationAnchorKeyV5EntryVwcp
__int64 __fastcall initializeWithCopy for NavigationAnchorKey.Entry(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v5; // x0

  if ( *(_QWORD *)a2 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)(a1 + 8) = v4;
    swift_retain(v4);
  }
  else
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
  }
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = v5;
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  swift_retain(v5);
  return a1;
}