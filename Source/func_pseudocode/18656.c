$s17ControlCenterCore23_NavigationPathModifierVwta
__int64 __fastcall assignWithTake for _NavigationPathModifier(__int64 a1, __int64 a2)
{
  __int128 v4; // q1
  __int64 v5; // x8
  char v6; // w9
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3

  sub_100008844();
  v4 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  v5 = *(_QWORD *)(a2 + 56);
  v6 = *(_BYTE *)(a2 + 64);
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_QWORD *)(a1 + 56);
  v10 = *(unsigned __int8 *)(a1 + 64);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 56) = v5;
  *(_BYTE *)(a1 + 64) = v6;
  sub_1000451E0(v7, v8, v9, v10);
  return a1;
}