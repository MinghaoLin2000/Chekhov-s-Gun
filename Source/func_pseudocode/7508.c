_$s16EyeCandyGraphics8CGSSpaceV21moveAllWindowsToSpace_11transactionyAC_So17SLSTransactionRefatF
__int64 __fastcall CGSSpace.moveAllWindowsToSpace(_:transaction:)(
        EyeCandyGraphics::CGSSpace a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // x22
  __int64 v6; // x0
  __int64 inited; // x23
  Swift::OpaquePointer v8; // x19
  _BYTE v10[40]; // [xsp+8h] [xbp-58h] BYREF

  v5 = *(unsigned int *)CGSConnection.null.unsafeMutableAddressor(a1.spid);
  v6 = sub_100002BF4(&unk_100029A70);
  inited = swift_initStackObject(v6, v10);
  *(_OWORD *)(inited + 16) = xmmword_10001FC20;
  *(_QWORD *)(inited + 32) = a3;
  v8._rawValue = (void *)sub_10000F97C(v5, 1LL, 0LL, 0x3000000000000LL, inited);
  swift_bridgeObjectRelease(inited);
  SLSTransactionRef.batchReassociateWindowsToSpace(_:space:)(v8, a1);
  return swift_bridgeObjectRelease(v8._rawValue);
}