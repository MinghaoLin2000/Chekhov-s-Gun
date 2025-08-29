$s17ControlCenterCore23_NavigationPathModifierVwcp
__int64 __fastcall initializeWithCopy for _NavigationPathModifier(__int64 a1, __int64 a2)
{
  __int128 v4; // q0
  __int64 v5; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  __int64 v8; // x19

  v4 = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 24) = v4;
  (**(void (***)(void))(v4 - 8))();
  v5 = *(_QWORD *)(a2 + 40);
  v6 = *(_QWORD *)(a2 + 48);
  v7 = *(_QWORD *)(a2 + 56);
  v8 = *(unsigned __int8 *)(a2 + 64);
  sub_10004680C(v5, v6, v7, v8);
  *(_QWORD *)(a1 + 40) = v5;
  *(_QWORD *)(a1 + 48) = v6;
  *(_QWORD *)(a1 + 56) = v7;
  *(_BYTE *)(a1 + 64) = v8;
  return a1;
}