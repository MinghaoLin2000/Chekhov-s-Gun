_$s16EyeCandyGraphics8CGSSpaceV6window_7display10connectionAA9CGSWindowVSgSo27CGSManagedDisplayWindowRoleV_AA9CGDisplayVAA13CGSConnectionVtFZ
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall static CGSSpace.window(_:display:connection:)(__int64 a1, CGDirectDisplayID display, __int64 a3)
{
  __int64 v5; // x0
  __int64 v6; // x1
  void *v7; // x21
  __int64 v8; // x22
  __int64 v9; // x1
  __int64 v10; // x23
  __int64 v11; // x0
  __int64 v12; // x21
  void *v13; // x22
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 result; // x0
  void *v17; // x20
  id v18; // x0
  unsigned int v19; // w19
  Swift::UInt32 v20; // w0
  unsigned __int8 v21; // w9
  __int64 v22; // x8
  __int64 v23; // x0
  CGRect v24; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8 OVERLAPPED

  v24 = CGDisplay.bounds.getter(display);
  v5 = CGSCopyBestManagedDisplayForRect(
         a3,
         (__n128)v24.origin,
         *(__n128 *)&v24.origin.y,
         (__n128)v24.size,
         *(__n128 *)&v24.size.height);
  if ( !v5 )
    goto LABEL_15;
  v7 = (void *)v5;
  v8 = sub_10001CAD0(v5, v6);
  v10 = v9;
  objc_release(v7);
  v11 = sub_100002BF4(&unk_100029C00);
  v12 = swift_allocObject(v11, 48LL, 7LL);
  *(_OWORD *)(v12 + 16) = xmmword_10001FC20;
  *(_QWORD *)(v12 + 32) = v8;
  *(_QWORD *)(v12 + 40) = v10;
  v13 = (void *)sub_10001CB60(v12, &type metadata for String);
  swift_bridgeObjectRelease(v12);
  v14 = CGSManagedDisplaysCopyRoleWindows(a3, v13, a1);
  objc_release(v13);
  if ( !v14 )
    goto LABEL_15;
  v15 = sub_10000E740();
  result = sub_100012134(v15);
  if ( !a1 )
    goto LABEL_15;
  if ( !((unsigned __int64)a1 >> 62) )
  {
    v17 = *(void **)((a1 & 0xFFFFFFFFFFFFFF8LL) + 0x10);
    if ( v17 )
      goto LABEL_6;
    goto LABEL_14;
  }
  if ( a1 >= 0 )
    v17 = (void *)(a1 & 0xFFFFFFFFFFFFFF8LL);
  else
    v17 = (void *)a1;
  swift_bridgeObjectRetain(a1);
  v23 = sub_10001D060(v17);
  result = sub_10001231C(v23);
  if ( !v17 )
  {
LABEL_14:
    swift_bridgeObjectRelease(a1);
LABEL_15:
    v22 = 0LL;
    v21 = 1;
    return v22 | ((unsigned __int64)v21 << 32);
  }
LABEL_6:
  if ( (a1 & 0xC000000000000001LL) != 0 )
  {
    v18 = (id)sub_100011754(0LL, a1);
    goto LABEL_9;
  }
  if ( *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFF8LL) + 0x10) )
  {
    v18 = objc_retain(*(id *)(a1 + 32));
LABEL_9:
    sub_10001231C(v18);
    v19 = (unsigned int)objc_msgSend(v17, "unsignedIntValue");
    objc_release(v17);
    v20 = UInt32.init(_:)((EyeCandyGraphics::SystemEventMask)v19);
    v21 = 0;
    v22 = v20;
    return v22 | ((unsigned __int64)v21 << 32);
  }
  __break(1u);
  return result;
}