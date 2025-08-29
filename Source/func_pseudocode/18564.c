$s17ControlCenterCore25MockSampleBufferPublisherVwcp
_QWORD *__fastcall initializeWithCopy for MockSampleBufferPublisher(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // x0
  __int64 v4; // x20

  v3 = a2[1];
  *a1 = *a2;
  a1[1] = v3;
  v4 = a2[3];
  a1[2] = a2[2];
  a1[3] = v4;
  swift_bridgeObjectRetain(v3);
  swift_bridgeObjectRetain(v4);
  return a1;
}