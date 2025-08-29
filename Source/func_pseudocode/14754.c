-[UINSSystemPreferencesServiceViewController observeValueForKeyPath:ofObject:change:context:]
void __cdecl -[UINSSystemPreferencesServiceViewController observeValueForKeyPath:ofObject:change:context:](
        UINSSystemPreferencesServiceViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        void *a6)
{
  NSRunLoop *v7; // x20
  objc_super v8; // [xsp+8h] [xbp-48h] BYREF
  _QWORD v9[5]; // [xsp+18h] [xbp-38h] BYREF

  if ( off_100011A58 == a6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(+[NSRunLoop mainRunLoop](&OBJC_CLASS___NSRunLoop, "mainRunLoop", a3, a4, a5));
    v9[0] = _NSConcreteStackBlock;
    v9[1] = 3254779904LL;
    v9[2] = sub_10000665C;
    v9[3] = &unk_10000C330;
    v9[4] = self;
    -[NSRunLoop performBlock:](v7, "performBlock:", v9);
    objc_release(v7);
  }
  else
  {
    v8.receiver = self;
    v8.super_class = (Class)&OBJC_CLASS___UINSSystemPreferencesServiceViewController;
    -[UINSSystemPreferencesServiceViewController observeValueForKeyPath:ofObject:change:context:](
      &v8,
      "observeValueForKeyPath:ofObject:change:context:",
      a3,
      a4,
      a5);
  }
}