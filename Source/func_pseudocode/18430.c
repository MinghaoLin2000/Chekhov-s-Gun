-[_TtC19ControlCenterHelper22ControlCenterHelperApp sendAction:to:from:]
bool __cdecl -[ControlCenterHelperApp sendAction:to:from:](
        _TtC19ControlCenterHelper22ControlCenterHelperApp *self,
        SEL a2,
        SEL a3,
        id a4,
        id a5)
{
  _TtC19ControlCenterHelper22ControlCenterHelperApp *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x0
  _TtC19ControlCenterHelper22ControlCenterHelperApp *v12; // x0
  char v13; // w19
  _OWORD v15[2]; // [xsp+0h] [xbp-60h] BYREF
  _OWORD v16[2]; // [xsp+20h] [xbp-40h] BYREF

  if ( !a4 )
  {
    memset(v16, 0, sizeof(v16));
    swift_unknownObjectRetain(a5, a2);
    v12 = objc_retain(self);
    if ( a5 )
      goto LABEL_3;
LABEL_5:
    memset(v15, 0, sizeof(v15));
    goto LABEL_6;
  }
  swift_unknownObjectRetain(a5, a2);
  v9 = objc_retain(self);
  v11 = swift_unknownObjectRetain(a4, v10);
  sub_100070510(v16, v11);
  swift_unknownObjectRelease(a4);
  if ( !a5 )
    goto LABEL_5;
LABEL_3:
  sub_100070510(v15, a5);
  swift_unknownObjectRelease(a5);
LABEL_6:
  v13 = sub_1000079B8(a3, v16, v15);
  objc_release(self);
  sub_100007F5C(v15);
  sub_100007F5C(v16);
  return v13 & 1;
}