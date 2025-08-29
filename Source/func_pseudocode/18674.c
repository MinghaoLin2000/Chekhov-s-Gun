$s17ControlCenterCore27_NavigationTrackingModifierVwta
__int64 __fastcall assignWithTake for _NavigationTrackingModifier(__int64 a1, __int64 *a2)
{
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x0
  __int64 v7; // x9
  __int64 v8; // x9
  __int64 v9; // x0
  char v10; // w8
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int128 v15; // q1

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
  v8 = a2[3];
  v9 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = a2[2];
  *(_QWORD *)(a1 + 24) = v8;
  swift_release(v9);
  v10 = *((_BYTE *)a2 + 64);
  v11 = *(_QWORD *)(a1 + 40);
  v12 = *(_QWORD *)(a1 + 48);
  v13 = *(_QWORD *)(a1 + 56);
  v14 = *(unsigned __int8 *)(a1 + 64);
  v15 = *((_OWORD *)a2 + 3);
  *(_OWORD *)(a1 + 32) = *((_OWORD *)a2 + 2);
  *(_OWORD *)(a1 + 48) = v15;
  *(_BYTE *)(a1 + 64) = v10;
  sub_1000451E0(v11, v12, v13, v14);
  return a1;
}