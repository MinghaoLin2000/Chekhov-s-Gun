$s17ControlCenterCore16HoverCoordinatorC5EntryVwcp
__int64 __fastcall initializeWithCopy for HoverCoordinator.Entry(__int64 a1, __int64 a2)
{
  __int64 v3; // x0

  v3 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  swift_bridgeObjectRetain(v3);
  return a1;
}