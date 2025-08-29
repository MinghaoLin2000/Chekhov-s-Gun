-[_TtC17ControlCenterCoreP33_05528DDA50FE2858EF67F40CA99DB9B228CaptureFrameReceiverObserver observeValueForKeyPath:ofObject:change:context:]
void __cdecl -[CaptureFrameReceiverObserver observeValueForKeyPath:ofObject:change:context:](
        _TtC17ControlCenterCoreP33_05528DDA50FE2858EF67F40CA99DB9B228CaptureFrameReceiverObserver *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        void *a6)
{
  __int64 v10; // x22
  SEL v11; // x21
  id v12; // x0
  _TtC17ControlCenterCoreP33_05528DDA50FE2858EF67F40CA99DB9B228CaptureFrameReceiverObserver *v13; // x0
  __int64 v14; // x24
  __int64 v15; // x0
  __int64 v16; // x24
  id v17; // x0
  _TtC17ControlCenterCoreP33_05528DDA50FE2858EF67F40CA99DB9B228CaptureFrameReceiverObserver *v18; // x0
  _OWORD v19[2]; // [xsp+0h] [xbp-50h] BYREF

  if ( a3 )
  {
    v10 = sub_1000700D0(a3, a2);
    v11 = a2;
    if ( a4 )
      goto LABEL_3;
LABEL_6:
    memset(v19, 0, sizeof(v19));
    v17 = objc_retain(a5);
    v18 = objc_retain(self);
    if ( a5 )
      goto LABEL_4;
LABEL_7:
    v16 = 0LL;
    goto LABEL_8;
  }
  v10 = 0LL;
  v11 = 0LL;
  if ( !a4 )
    goto LABEL_6;
LABEL_3:
  swift_unknownObjectRetain(a4, a2);
  v12 = objc_retain(a5);
  v13 = objc_retain(self);
  sub_100070510(v19, a4);
  swift_unknownObjectRelease(a4);
  if ( !a5 )
    goto LABEL_7;
LABEL_4:
  v14 = type metadata accessor for NSKeyValueChangeKey(0LL);
  v15 = sub_100027708(&unk_1000952F8, type metadata accessor for NSKeyValueChangeKey, &unk_1000738C0);
  v16 = sub_100070050(a5, v14, (char *)&type metadata for Any + 8, v15);
  objc_release(a5);
LABEL_8:
  sub_1000274A0(v10, v11, v19, v16, a6);
  objc_release(self);
  swift_bridgeObjectRelease(v16);
  swift_bridgeObjectRelease(v11);
  sub_100007F5C(v19);
}