$s17ControlCenterCore24_NavigationHoverModifierVwta_0
__int64 __fastcall _s17ControlCenterCore24_NavigationHoverModifierVwta_0(__int64 a1, __int64 a2)
{
  __int64 v4; // x9
  __int64 v5; // x0
  char v6; // w8
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int128 v11; // q1

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = v4;
  swift_release(v5);
  v6 = *(_BYTE *)(a2 + 48);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 40);
  v10 = *(unsigned __int8 *)(a1 + 48);
  v11 = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = v11;
  *(_BYTE *)(a1 + 48) = v6;
  sub_1000451E0(v7, v8, v9, v10);
  return a1;
}