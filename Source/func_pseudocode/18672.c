$s17ControlCenterCore27_NavigationTrackingModifierVwcp
__int64 __fastcall initializeWithCopy for _NavigationTrackingModifier(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  __int64 v8; // x23
  __int64 v9; // x20

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
  *(_QWORD *)(a1 + 24) = v5;
  v6 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  v7 = *(_QWORD *)(a2 + 48);
  v8 = *(_QWORD *)(a2 + 56);
  v9 = *(unsigned __int8 *)(a2 + 64);
  swift_retain(v5);
  sub_10004680C(v6, v7, v8, v9);
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 48) = v7;
  *(_QWORD *)(a1 + 56) = v8;
  *(_BYTE *)(a1 + 64) = v9;
  return a1;
}