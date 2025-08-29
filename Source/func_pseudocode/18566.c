$s17ControlCenterCore25MockSampleBufferPublisherVwta
_QWORD *__fastcall assignWithTake for MockSampleBufferPublisher(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // x9
  __int64 v5; // x0
  __int64 v6; // x9
  __int64 v7; // x0

  v4 = a2[1];
  v5 = a1[1];
  *a1 = *a2;
  a1[1] = v4;
  swift_bridgeObjectRelease(v5);
  v6 = a2[3];
  v7 = a1[3];
  a1[2] = a2[2];
  a1[3] = v6;
  swift_bridgeObjectRelease(v7);
  return a1;
}