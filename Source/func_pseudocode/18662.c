$s17ControlCenterCore25_NavigationHiddenModifierVwca
__int64 __fastcall assignWithCopy for _NavigationHiddenModifier(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  char v5; // w22
  __int64 v6; // x0
  __int64 v7; // x21
  __int64 v8; // x22
  __int64 v9; // x23
  __int64 v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3

  *(_BYTE *)a1 = *(_BYTE *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_BYTE *)(a2 + 16);
  j__swift_retain(v4);
  v6 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  *(_BYTE *)(a1 + 16) = v5;
  j__swift_release(v6);
  v7 = *(_QWORD *)(a2 + 24);
  v8 = *(_QWORD *)(a2 + 32);
  v9 = *(_QWORD *)(a2 + 40);
  v10 = *(unsigned __int8 *)(a2 + 48);
  sub_10004680C(v7, v8, v9, v10);
  v11 = *(_QWORD *)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 32);
  v13 = *(_QWORD *)(a1 + 40);
  v14 = *(unsigned __int8 *)(a1 + 48);
  *(_QWORD *)(a1 + 24) = v7;
  *(_QWORD *)(a1 + 32) = v8;
  *(_QWORD *)(a1 + 40) = v9;
  *(_BYTE *)(a1 + 48) = v10;
  sub_1000451E0(v11, v12, v13, v14);
  return a1;
}