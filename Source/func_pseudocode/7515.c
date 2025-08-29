_$s16EyeCandyGraphics8CGSSpaceV17tileSizeForWindow_10connectionSo6CGSizeVAA9CGSWindowV_AA13CGSConnectionVtF
double __fastcall CGSSpace.tileSizeForWindow(_:connection:)(int a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 inited; // x22
  void *v6; // x23
  __int64 v7; // x21
  __int64 v8; // x24
  id v9; // x0
  __int64 v10; // x22
  void *v11; // x21
  __int64 v12; // x0
  double SizeForProposedTile; // d8
  __int64 v15; // [xsp+0h] [xbp-70h] BYREF

  v4 = sub_100002BF4(&unk_100029C28);
  inited = swift_initStackObject(v4, &v15);
  *(_OWORD *)(inited + 16) = xmmword_10001FC20;
  v6 = (void *)kCGSWorkspaceTileWindowKey;
  *(_QWORD *)(inited + 32) = kCGSWorkspaceTileWindowKey;
  *(_DWORD *)(inited + 40) = a1;
  v7 = type metadata accessor for CFString(0LL);
  v8 = sub_100011D24(&unk_100029C10, &unk_10001FEC4);
  v9 = objc_retain(v6);
  v10 = sub_10001CA80(inited, v7, &type metadata for UInt32, v8);
  v11 = (void *)sub_10001CA60(v10, v7, &type metadata for UInt32, v8);
  swift_bridgeObjectRelease(v10);
  v12 = sub_1000122C4(a2);
  SizeForProposedTile = CGSSpaceGetSizeForProposedTile(v12);
  objc_release(v11);
  return SizeForProposedTile;
}