$s17ControlCenterCore19_NavigationModifierVwca
__int64 __fastcall assignWithCopy for _NavigationModifier(__int64 a1, __int64 *a2)
{
  __int64 v4; // x8
  __int64 v5; // x0
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x21
  unsigned __int8 v9; // w22
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x21
  char v13; // w22
  __int64 v14; // x0
  __int64 v15; // x21
  __int64 v16; // x22
  __int64 v17; // x23
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3

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
  *(_QWORD *)(a1 + 16) = a2[2];
  v8 = a2[3];
  v9 = *((_BYTE *)a2 + 32);
  sub_100032140(v8, v9);
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(unsigned __int8 *)(a1 + 32);
  *(_QWORD *)(a1 + 24) = v8;
  *(_BYTE *)(a1 + 32) = v9;
  sub_10003040C(v10, v11);
  v12 = a2[5];
  v13 = *((_BYTE *)a2 + 48);
  j__swift_retain(v12);
  v14 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v12;
  *(_BYTE *)(a1 + 48) = v13;
  j__swift_release(v14);
  v15 = a2[7];
  v16 = a2[8];
  v17 = a2[9];
  v18 = *((unsigned __int8 *)a2 + 80);
  sub_10004680C(v15, v16, v17, v18);
  v19 = *(_QWORD *)(a1 + 56);
  v20 = *(_QWORD *)(a1 + 64);
  v21 = *(_QWORD *)(a1 + 72);
  v22 = *(unsigned __int8 *)(a1 + 80);
  *(_QWORD *)(a1 + 56) = v15;
  *(_QWORD *)(a1 + 64) = v16;
  *(_QWORD *)(a1 + 72) = v17;
  *(_BYTE *)(a1 + 80) = v18;
  sub_1000451E0(v19, v20, v21, v22);
  return a1;
}