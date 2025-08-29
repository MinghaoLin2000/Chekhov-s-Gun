$s17ControlCenterCore19_NavigationModifierVwcp
__int64 __fastcall initializeWithCopy for _NavigationModifier(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v5; // x21
  unsigned __int8 v6; // w22
  __int64 v7; // x21
  char v8; // w22
  __int64 v9; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  __int64 v12; // x20

  if ( *(_QWORD *)a2 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)(a1 + 8) = v4;
    swift_retain(v4);
  }
  else
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
  }
  v5 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v6 = *(_BYTE *)(a2 + 32);
  sub_100032140(v5, v6);
  *(_QWORD *)(a1 + 24) = v5;
  *(_BYTE *)(a1 + 32) = v6;
  v7 = *(_QWORD *)(a2 + 40);
  v8 = *(_BYTE *)(a2 + 48);
  j__swift_retain(v7);
  *(_QWORD *)(a1 + 40) = v7;
  *(_BYTE *)(a1 + 48) = v8;
  v9 = *(_QWORD *)(a2 + 56);
  v10 = *(_QWORD *)(a2 + 64);
  v11 = *(_QWORD *)(a2 + 72);
  v12 = *(unsigned __int8 *)(a2 + 80);
  sub_10004680C(v9, v10, v11, v12);
  *(_QWORD *)(a1 + 56) = v9;
  *(_QWORD *)(a1 + 64) = v10;
  *(_QWORD *)(a1 + 72) = v11;
  *(_BYTE *)(a1 + 80) = v12;
  return a1;
}