-[_TtC13DisplayMarkup27ScreenAnnotationsController showWindow:]
void __cdecl -[ScreenAnnotationsController showWindow:](
        _TtC13DisplayMarkup27ScreenAnnotationsController *self,
        SEL a2,
        id a3)
{
  _TtC13DisplayMarkup27ScreenAnnotationsController *v5; // x0
  __int64 v6; // x0
  _TtC13DisplayMarkup27ScreenAnnotationsController *v7; // x0
  _OWORD v8[2]; // [xsp+0h] [xbp-30h] BYREF

  if ( a3 )
  {
    v5 = objc_retain(self);
    v6 = swift_unknownObjectRetain(a3);
    sub_10001CE20(v8, v6);
    swift_unknownObjectRelease(a3);
  }
  else
  {
    memset(v8, 0, sizeof(v8));
    v7 = objc_retain(self);
  }
  sub_100005600(v8);
  objc_release(self);
  sub_10000AF20(v8, &unk_100029AE8);
}