-[_TtC13DisplayMarkup25AnnotationsViewController penStrokeCompletedForAnnotationController:]
void __cdecl -[AnnotationsViewController penStrokeCompletedForAnnotationController:](
        _TtC13DisplayMarkup25AnnotationsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  _TtC13DisplayMarkup25AnnotationsViewController *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retain(self);
  sub_10000C0A4();
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}