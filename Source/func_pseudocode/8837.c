$s34AppleMediaServicesUIDynamicService36JSAccountPrivacyAcknowledgementStateVwca
__int64 __fastcall assignWithCopy for JSAccountPrivacyAcknowledgementState(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v5; // x21
  __int64 v6; // x8

  sub_10000EE60();
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  v4 = *(_QWORD *)(a2 + 48);
  v5 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v4;
  swift_bridgeObjectRetain(v4);
  swift_bridgeObjectRelease(v5);
  v6 = *(_QWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 64) = *(_BYTE *)(a2 + 64);
  *(_QWORD *)(a1 + 56) = v6;
  *(_BYTE *)(a1 + 65) = *(_BYTE *)(a2 + 65);
  return a1;
}