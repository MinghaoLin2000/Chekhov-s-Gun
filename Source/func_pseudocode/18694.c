$s17ControlCenterCore19NavigationAnchorKeyV5EntryVwta
__int64 __fastcall assignWithTake for NavigationAnchorKey.Entry(__int64 a1, __int64 *a2)
{
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x0
  __int64 v7; // x9
  __int64 v8; // x0

  v4 = *a2;
  if ( !*(_QWORD *)a1 )
  {
    if ( v4 )
    {
      v7 = a2[1];
      *(_QWORD *)a1 = v4;
      *(_QWORD *)(a1 + 8) = v7;
      goto LABEL_8;
    }
LABEL_7:
    *(_OWORD *)a1 = *(_OWORD *)a2;
    goto LABEL_8;
  }
  if ( !v4 )
  {
    swift_release(*(_QWORD *)(a1 + 8));
    goto LABEL_7;
  }
  v5 = a2[1];
  v6 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = v5;
  swift_release(v6);
LABEL_8:
  v8 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = a2[2];
  swift_release(v8);
  *(_BYTE *)(a1 + 24) = *((_BYTE *)a2 + 24);
  return a1;
}