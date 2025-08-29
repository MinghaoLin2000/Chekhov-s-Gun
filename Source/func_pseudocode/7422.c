-[_TtC13DisplayMarkup16AnnotationWindow setContentSize:]
void __cdecl -[AnnotationWindow setContentSize:](_TtC13DisplayMarkup16AnnotationWindow *self, SEL a2, CGSize a3)
{
  double height; // d8
  double width; // d9
  _TtC13DisplayMarkup16AnnotationWindow *v5; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  height = a3.height;
  width = a3.width;
  v5 = objc_retain(self);
  sub_100007BE8(width, height);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}