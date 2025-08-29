_$s16EyeCandyGraphics9CGSWindowV8setTitle_10connectionySS_AA13CGSConnectionVtF
// local variable allocation has failed, the output may be wrong!
Swift::Void __swiftcall CGSWindow.setTitle(_:connection:)(Swift::String _, EyeCandyGraphics::CGSConnection connection)
{
  __int64 v2; // x3
  __int64 v3; // x19
  __int64 v4; // x20
  void *object; // x21
  __int64 countAndFlagsBits; // x22
  __int64 v7; // x0
  void *v8; // x23
  __int64 v9; // x22
  _QWORD v10[2]; // [xsp+0h] [xbp-40h] BYREF

  v3 = v2;
  v4 = *(_QWORD *)&connection.cid;
  object = _._object;
  countAndFlagsBits = _._countAndFlagsBits;
  v7 = swift_bridgeObjectRetain(_._object);
  v8 = (void *)sub_10001B1EC(v7);
  v10[0] = countAndFlagsBits;
  v10[1] = object;
  swift_bridgeObjectRetain(object);
  v9 = sub_10001D0F0(v10, &type metadata for String);
  CGSSetWindowProperty(v4, v3, v8, v9);
  swift_bridgeObjectRelease(object);
  objc_release(v8);
  swift_unknownObjectRelease(v9);
}