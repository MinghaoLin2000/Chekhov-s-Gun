$s17ControlCenterCore25_NavigationHiddenModifierVwcp
__int64 __fastcall initializeWithCopy for _NavigationHiddenModifier(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  char v5; // w22
  __int64 v6; // x21
  __int64 v7; // x22
  __int64 v8; // x23
  __int64 v9; // x19

  *(_BYTE *)a1 = *(_BYTE *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_BYTE *)(a2 + 16);
  j__swift_retain(v4);
  *(_QWORD *)(a1 + 8) = v4;
  *(_BYTE *)(a1 + 16) = v5;
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a2 + 32);
  v8 = *(_QWORD *)(a2 + 40);
  v9 = *(unsigned __int8 *)(a2 + 48);
  sub_10004680C(v6, v7, v8, v9);
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 40) = v8;
  *(_BYTE *)(a1 + 48) = v9;
  return a1;
}