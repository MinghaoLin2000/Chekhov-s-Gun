$s17ControlCenterCore24_NavigationHoverModifierVwcp_0
__int64 __fastcall _s17ControlCenterCore24_NavigationHoverModifierVwcp_0(__int64 a1, __int64 a2)
{
  __int64 v3; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  __int64 v7; // x23

  v3 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = v3;
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 32);
  v6 = *(_QWORD *)(a2 + 40);
  v7 = *(unsigned __int8 *)(a2 + 48);
  swift_retain(v3);
  sub_10004680C(v4, v5, v6, v7);
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 40) = v6;
  *(_BYTE *)(a1 + 48) = v7;
  return a1;
}