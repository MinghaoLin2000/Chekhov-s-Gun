_$s16EyeCandyGraphics8CGSSpaceV10createTile_10connectionACSgAA9CGSWindowVSg_AA13CGSConnectionVtF
// local variable allocation has failed, the output may be wrong!
EyeCandyGraphics::CGSSpace_optional __swiftcall CGSSpace.createTile(_:connection:)(
        EyeCandyGraphics::CGSWindow_optional _,
        EyeCandyGraphics::CGSConnection connection)
{
  __int64 v2; // x20
  CGFloat v3; // d8
  CGFloat v4; // d9
  CGFloat v5; // d10
  CGFloat v6; // d11
  CGFloat v7; // d12
  CGFloat v8; // d13
  __int64 v9; // x0
  __int64 inited; // x24
  void *v11; // x0
  id v12; // x0
  CFDictionaryRef DictionaryRepresentation; // x0
  void *v14; // x8
  id v15; // x0
  CFDictionaryRef v16; // x0
  void *v17; // x8
  id v18; // x0
  __int64 v19; // x22
  __int64 v20; // x25
  __int64 v21; // x23
  __int64 v22; // x24
  __int64 v23; // x0
  __int64 v24; // x25
  void *v25; // x26
  __int64 v26; // x0
  void *v27; // x24
  id v28; // x0
  id v29; // x0
  Swift::Int32 v30; // w0
  __int64 v31; // x0
  void *v32; // x21
  __int64 v33; // x0
  __int64 Tile; // x19
  Swift::Bool v35; // w1
  Swift::UInt64 v36; // x0
  __int64 v37; // [xsp+0h] [xbp-170h] BYREF
  _BYTE v38[80]; // [xsp+70h] [xbp-100h] BYREF
  _QWORD v39[6]; // [xsp+C0h] [xbp-B0h] BYREF
  EyeCandyGraphics::CGSSpace_optional result; // 0:x0.9
  CGSize v41; // 0:d0.8,8:d1.8
  CGSize v42; // 0:d0.8,8:d1.8
  CGSize v43; // 0:d0.8,8:d1.8

  v2 = *(_QWORD *)&connection.cid;
  if ( (*(_QWORD *)&_.value.wid & 0x100000000LL) != 0 )
  {
    v32 = 0LL;
  }
  else
  {
    CGSWindow.getConstraints(connection:)(v39, *(_QWORD *)&connection.cid, *(_QWORD *)&_.value.wid);
    v3 = *(double *)v39;
    v4 = *(double *)&v39[1];
    v5 = *(double *)&v39[2];
    v6 = *(double *)&v39[3];
    v7 = *(double *)&v39[4];
    v8 = *(double *)&v39[5];
    v9 = sub_100002BF4(&unk_100029C08);
    inited = swift_initStackObject(v9, v38);
    *(_OWORD *)(inited + 16) = xmmword_10001FD70;
    v11 = (void *)kCGSWorkspaceSizeConstraintsMinKey;
    *(_QWORD *)(inited + 32) = kCGSWorkspaceSizeConstraintsMinKey;
    v12 = objc_retain(v11);
    v41.width = v3;
    v41.height = v4;
    DictionaryRepresentation = CGSizeCreateDictionaryRepresentation(v41);
    v14 = (void *)kCGSWorkspaceSizeConstraintsMaxKey;
    *(_QWORD *)(inited + 40) = DictionaryRepresentation;
    *(_QWORD *)(inited + 48) = v14;
    v15 = objc_retain(v14);
    v42.width = v5;
    v42.height = v6;
    v16 = CGSizeCreateDictionaryRepresentation(v42);
    v17 = (void *)kCGSWorkspaceSizeConstraintsPreferredKey;
    *(_QWORD *)(inited + 56) = v16;
    *(_QWORD *)(inited + 64) = v17;
    v18 = objc_retain(v17);
    v43.width = v7;
    v43.height = v8;
    *(_QWORD *)(inited + 72) = CGSizeCreateDictionaryRepresentation(v43);
    v19 = type metadata accessor for CFString(0LL);
    v20 = type metadata accessor for CFDictionary(0LL);
    v21 = sub_100011D24(&unk_100029C10, &unk_10001FEC4);
    v22 = sub_10001CA80(inited, v19, v20, v21);
    v23 = sub_100002BF4(&unk_100029C18);
    v24 = swift_initStackObject(v23, &v37);
    *(_OWORD *)(v24 + 16) = xmmword_10001FC30;
    v25 = (void *)kCGSWorkspaceSizeConstraintsKey;
    *(_QWORD *)(v24 + 32) = kCGSWorkspaceSizeConstraintsKey;
    v26 = sub_100002BF4(&unk_100029C20);
    *(_QWORD *)(v24 + 40) = v22;
    v27 = (void *)kCGSWorkspaceOwnerKey;
    *(_QWORD *)(v24 + 64) = v26;
    *(_QWORD *)(v24 + 72) = v27;
    v28 = objc_retain(v25);
    v29 = objc_retain(v27);
    v30 = CGSWindow.getPid(connection:)((EyeCandyGraphics::CGSConnection)v2);
    *(_QWORD *)(v24 + 104) = &type metadata for Int32;
    *(_DWORD *)(v24 + 80) = v30;
    v31 = sub_10001CA80(v24, v19, (char *)&type metadata for Any + 8, v21);
    v32 = (void *)sub_1000122E8(v31);
    swift_bridgeObjectRelease(v27);
  }
  v33 = sub_1000122C4(v2);
  Tile = CGSSpaceCreateTile(v33);
  objc_release(v32);
  v35 = Tile == 0;
  v36 = Tile;
  result.value.spid = v36;
  result.is_nil = v35;
  return result;
}