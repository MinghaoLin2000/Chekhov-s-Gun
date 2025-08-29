$s17ControlCenterCore23_NavigationPathModifierVwca
__int64 __fastcall assignWithCopy for _NavigationPathModifier(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  __int64 v5; // x22
  __int64 v6; // x23
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3

  sub_100046D50();
  v4 = *(_QWORD *)(a2 + 40);
  v5 = *(_QWORD *)(a2 + 48);
  v6 = *(_QWORD *)(a2 + 56);
  v7 = *(unsigned __int8 *)(a2 + 64);
  sub_10004680C(v4, v5, v6, v7);
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(a1 + 48);
  v10 = *(_QWORD *)(a1 + 56);
  v11 = *(unsigned __int8 *)(a1 + 64);
  *(_QWORD *)(a1 + 40) = v4;
  *(_QWORD *)(a1 + 48) = v5;
  *(_QWORD *)(a1 + 56) = v6;
  *(_BYTE *)(a1 + 64) = v7;
  sub_1000451E0(v8, v9, v10, v11);
  return a1;
}