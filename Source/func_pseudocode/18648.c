$s17ControlCenterCore19_NavigationModifierVwta
__int64 __fastcall assignWithTake for _NavigationModifier(__int64 a1, __int64 *a2)
{
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x0
  __int64 v7; // x9
  char v8; // w8
  __int64 v9; // x0
  __int64 v10; // x1
  char v11; // w9
  __int64 v12; // x0
  __int64 v13; // x8
  char v14; // w9
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3

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
  v8 = *((_BYTE *)a2 + 32);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(unsigned __int8 *)(a1 + 32);
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
  *(_BYTE *)(a1 + 32) = v8;
  sub_10003040C(v9, v10);
  v11 = *((_BYTE *)a2 + 48);
  v12 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = a2[5];
  *(_BYTE *)(a1 + 48) = v11;
  j__swift_release(v12);
  v13 = a2[9];
  v14 = *((_BYTE *)a2 + 80);
  v15 = *(_QWORD *)(a1 + 56);
  v16 = *(_QWORD *)(a1 + 64);
  v17 = *(_QWORD *)(a1 + 72);
  v18 = *(unsigned __int8 *)(a1 + 80);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 7);
  *(_QWORD *)(a1 + 72) = v13;
  *(_BYTE *)(a1 + 80) = v14;
  sub_1000451E0(v15, v16, v17, v18);
  return a1;
}