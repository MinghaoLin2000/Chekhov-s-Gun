$s34AppleMediaServicesUIDynamicService36JSAccountPrivacyAcknowledgementStateVwta
__int64 __fastcall assignWithTake for JSAccountPrivacyAcknowledgementState(__int64 a1, __int64 a2)
{
  __int128 v4; // q1
  __int64 v5; // x0

  _s34AppleMediaServicesUIDynamicService9JSAccountVwxx_0((_QWORD *)a1);
  v4 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = v4;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  v5 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  swift_bridgeObjectRelease(v5);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 64) = *(_BYTE *)(a2 + 64);
  *(_BYTE *)(a1 + 65) = *(_BYTE *)(a2 + 65);
  return a1;
}