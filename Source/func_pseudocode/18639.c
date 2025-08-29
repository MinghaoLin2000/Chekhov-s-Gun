$s17ControlCenterCore16HoverCoordinatorC5EntryVwta
__int64 __fastcall assignWithTake for HoverCoordinator.Entry(__int64 a1, __int64 a2)
{
  __int64 v4; // x9
  __int64 v5; // x0

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = v4;
  swift_bridgeObjectRelease(v5);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  return a1;
}