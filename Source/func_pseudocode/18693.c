$s17ControlCenterCore19NavigationAnchorKeyV5EntryVwca
__int64 __fastcall assignWithCopy for NavigationAnchorKey.Entry(__int64 a1, __int64 *a2)
{
  __int64 v4; // x8
  __int64 v5; // x0
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x21

  v4 = *a2;
  if ( !*(_QWORD *)a1 )
  {
    if ( v4 )
    {
      v7 = a2[1];
      *(_QWORD *)a1 = v4;
      *(_QWORD *)(a1 + 8) = v7;
      swift_retain(v7);
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
  swift_retain(v5);
  swift_release(v6);
LABEL_8:
  v8 = a2[2];
  v9 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v8;
  swift_retain(v8);
  swift_release(v9);
  *(_BYTE *)(a1 + 24) = *((_BYTE *)a2 + 24);
  return a1;
}