$s19ControlCenterHelper24ScreenMirroringAlertViewVwta
__int64 __fastcall assignWithTake for ScreenMirroringAlertView(__int64 a1, __int64 a2)
{
  __int64 v4; // x9
  __int64 v5; // x0
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = v4;
  swift_bridgeObjectRelease(v5);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
  swift_bridgeObjectRelease(*(_QWORD *)(a1 + 24));
  v6 = *(_QWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v6;
  swift_release(v7);
  v8 = *(_QWORD *)(a1 + 56);
  v9 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = v9;
  swift_release(v8);
  *(_BYTE *)(a1 + 64) = *(_BYTE *)(a2 + 64);
  v10 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  swift_release(v10);
  return a1;
}