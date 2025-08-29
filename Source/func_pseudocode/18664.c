$s17ControlCenterCore25_NavigationHiddenModifierVwta
__int64 __fastcall assignWithTake for _NavigationHiddenModifier(__int64 a1, __int64 a2)
{
  char v4; // w9
  __int64 v5; // x0
  __int64 v6; // x8
  char v7; // w9
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3

  *(_BYTE *)a1 = *(_BYTE *)a2;
  v4 = *(_BYTE *)(a2 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 16) = v4;
  j__swift_release(v5);
  v6 = *(_QWORD *)(a2 + 40);
  v7 = *(_BYTE *)(a2 + 48);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 40);
  v11 = *(unsigned __int8 *)(a1 + 48);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 40) = v6;
  *(_BYTE *)(a1 + 48) = v7;
  sub_1000451E0(v8, v9, v10, v11);
  return a1;
}