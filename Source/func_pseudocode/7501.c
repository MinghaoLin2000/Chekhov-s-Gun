_$sSl16EyeCandyGraphicsAA8CGSSpaceV7ElementRtzrlE8contains_7options7setTags05clearI0SbAA13CGSConnectionV_So29CGSWorkspaceWindowListOptionsVSo0mI0VAOtF
bool __fastcall Collection<>.contains(_:options:setTags:clearTags:)(__int64 a1)
{
  __int64 v1; // x0
  __int64 v2; // x0
  __int64 v3; // x19
  __int64 v4; // x20

  v1 = sub_1000121D4(a1);
  v2 = sub_100012218(v1);
  v3 = v2;
  if ( (unsigned __int64)v2 >> 62 )
  {
    if ( v2 >= 0 )
      v2 &= 0xFFFFFFFFFFFFFF8uLL;
    v4 = sub_10001D060(v2);
  }
  else
  {
    v4 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFF8LL) + 0x10);
  }
  swift_bridgeObjectRelease(v3);
  return v4 != 0;
}