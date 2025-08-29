_$s13DisplayMarkup0B8DelegateCACycfc
id MarkupDelegate.init()()
{
  char *v0; // x20
  __int64 v1; // x22
  id v2; // x19
  char *v3; // x21
  objc_super v5; // [xsp+0h] [xbp-40h] BYREF

  v1 = OBJC_IVAR____TtC13DisplayMarkup14MarkupDelegate_screenAnnotationController;
  v2 = objc_allocWithZone((Class)type metadata accessor for ScreenAnnotationsController(0LL));
  v3 = objc_retain(v0);
  *(_QWORD *)&v0[v1] = objc_msgSend(v2, "init");
  objc_release(v3);
  v5.receiver = v3;
  v5.super_class = (Class)type metadata accessor for MarkupDelegate();
  return objc_msgSendSuper2(&v5, "init");
}