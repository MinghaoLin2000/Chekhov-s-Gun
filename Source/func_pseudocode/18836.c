-[RemoteViewController hostPositionWindowForGlobalContentFrame:]
void __cdecl -[RemoteViewController hostPositionWindowForGlobalContentFrame:](
        RemoteViewController *self,
        SEL a2,
        CGRect a3)
{
  _QWORD v3[5]; // [xsp+8h] [xbp-48h] BYREF
  CGRect v4; // [xsp+30h] [xbp-20h]

  v3[0] = _NSConcreteStackBlock;
  v3[1] = 3254779904LL;
  v3[2] = sub_100004750;
  v3[3] = &unk_1000206D0;
  v3[4] = self;
  v4 = a3;
  +[NSAnimationContext runAnimationGroup:completionHandler:](
    &OBJC_CLASS___NSAnimationContext,
    "runAnimationGroup:completionHandler:",
    v3,
    0LL);
}