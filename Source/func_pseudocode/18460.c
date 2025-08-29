$s19ControlCenterHelper24ScreenMirroringAlertViewVwca
__int64 __fastcall assignWithCopy for ScreenMirroringAlertView(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x21
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x21
  __int64 v13; // x0

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v4;
  swift_bridgeObjectRetain(v4);
  swift_bridgeObjectRelease(v5);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v6;
  swift_bridgeObjectRetain(v6);
  swift_bridgeObjectRelease(v7);
  v8 = *(_QWORD *)(a2 + 40);
  v9 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = v8;
  swift_retain(v8);
  swift_release(v9);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  v10 = *(_QWORD *)(a1 + 56);
  v11 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 56) = v11;
  swift_retain(v11);
  swift_release(v10);
  *(_BYTE *)(a1 + 64) = *(_BYTE *)(a2 + 64);
  v12 = *(_QWORD *)(a1 + 72);
  v13 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 72) = v13;
  swift_retain(v13);
  swift_release(v12);
  return a1;
}