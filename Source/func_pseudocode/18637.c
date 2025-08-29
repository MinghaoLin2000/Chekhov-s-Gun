$s17ControlCenterCore16HoverCoordinatorC5EntryVwca
_QWORD *__fastcall assignWithCopy for HoverCoordinator.Entry(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // x0
  __int64 v5; // x21

  *a1 = *a2;
  v4 = a2[1];
  v5 = a1[1];
  a1[1] = v4;
  swift_bridgeObjectRetain(v4);
  swift_bridgeObjectRelease(v5);
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  a1[5] = a2[5];
  a1[6] = a2[6];
  return a1;
}