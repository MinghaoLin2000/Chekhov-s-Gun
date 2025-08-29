_$s16EyeCandyGraphics8CGSSpaceV8contains_7options7setTags05clearH0SbAA13CGSConnectionV_So29CGSWorkspaceWindowListOptionsVSo0lH0VAMtF
__int64 CGSSpace.contains(_:options:setTags:clearTags:)()
{
  __int64 v0; // x19
  __int64 v1; // x20
  __int64 v2; // x21
  __int64 v3; // x22
  __int64 v4; // x23
  __int64 v5; // x0
  __int64 inited; // x24
  char v7; // w19
  _BYTE v9[40]; // [xsp+8h] [xbp-58h] BYREF

  sub_1000122AC();
  v5 = sub_100002BF4(&unk_100029A70);
  inited = swift_initStackObject(v5, v9);
  *(_OWORD *)(inited + 16) = xmmword_10001FC20;
  *(_QWORD *)(inited + 32) = v0;
  v7 = sub_10000FD24(v4, v3, v2, v1, inited);
  swift_bridgeObjectRelease(inited);
  return v7 & 1;
}