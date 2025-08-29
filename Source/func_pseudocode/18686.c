$s17ControlCenterCore24_NavigationHoverModifierVwca_0
__int64 __fastcall _s17ControlCenterCore24_NavigationHoverModifierVwca_0(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v5; // x21
  __int64 v6; // x21
  __int64 v7; // x22
  __int64 v8; // x23
  __int64 v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  swift_retain(v4);
  swift_release(v5);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a2 + 32);
  v8 = *(_QWORD *)(a2 + 40);
  v9 = *(unsigned __int8 *)(a2 + 48);
  sub_10004680C(v6, v7, v8, v9);
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_QWORD *)(a1 + 32);
  v12 = *(_QWORD *)(a1 + 40);
  v13 = *(unsigned __int8 *)(a1 + 48);
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 40) = v8;
  *(_BYTE *)(a1 + 48) = v9;
  sub_1000451E0(v10, v11, v12, v13);
  return a1;
}