_$s16EyeCandyGraphics8CGSSpaceV8setValue_6forKey10connectionyyXl_SSAA13CGSConnectionVtF
void __fastcall CGSSpace.setValue(_:forKey:connection:)(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v10; // x0
  __int64 inited; // x24
  __int64 v12; // x0
  void *v13; // x21
  _BYTE v14[56]; // [xsp+8h] [xbp-68h] BYREF

  v10 = sub_100002BF4(&unk_100029BD8);
  inited = swift_initStackObject(v10, v14);
  *(_OWORD *)(inited + 16) = xmmword_10001FC20;
  *(_QWORD *)(inited + 32) = a2;
  *(_QWORD *)(inited + 40) = a3;
  *(_QWORD *)(inited + 48) = a1;
  swift_bridgeObjectRetain(a3);
  swift_unknownObjectRetain(a1);
  v12 = sub_10001CA80(
          inited,
          &type metadata for String,
          (char *)&type metadata for Swift.AnyObject + 8,
          &protocol witness table for String);
  v13 = (void *)sub_1000122E8(v12);
  swift_bridgeObjectRelease(inited);
  CGSSpaceSetValues(a4, a5, v13);
  objc_release(v13);
}