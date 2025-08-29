$s19ControlCenterHelper24ScreenMirroringAlertViewVwcp
__int64 __fastcall initializeWithCopy for ScreenMirroringAlertView(__int64 a1, __int64 a2)
{
  __int64 v3; // x0
  __int64 v4; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x22
  __int128 v9; // [xsp+0h] [xbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = v3;
  *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
  v9 = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 24) = v9;
  v5 = *(_QWORD *)(a2 + 40);
  v4 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 40) = v5;
  *(_QWORD *)(a1 + 48) = v4;
  v6 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 56) = v6;
  *(_BYTE *)(a1 + 64) = *(_BYTE *)(a2 + 64);
  v7 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 72) = v7;
  swift_bridgeObjectRetain(v3);
  swift_bridgeObjectRetain(v9);
  swift_retain(v5);
  swift_retain(v6);
  swift_retain(v7);
  return a1;
}