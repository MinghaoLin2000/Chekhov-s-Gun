-[LoadingViewController viewDidLoad]
void __cdecl -[LoadingViewController viewDidLoad](LoadingViewController *self, SEL a2)
{
  NSTextField *v3; // x20
  NSProgressIndicator *v4; // x20
  NSTimer *v5; // x21
  NSRunLoop *v6; // x21
  NSTimer *v7; // x19
  void **v8; // [xsp+0h] [xbp-60h] BYREF
  __int64 v9; // [xsp+8h] [xbp-58h]
  __int64 (__fastcall *v10)(); // [xsp+10h] [xbp-50h]
  void *v11; // [xsp+18h] [xbp-48h]
  id v12; // [xsp+20h] [xbp-40h] BYREF
  id location; // [xsp+28h] [xbp-38h] BYREF
  objc_super v14; // [xsp+30h] [xbp-30h] BYREF

  v14.receiver = self;
  v14.super_class = (Class)&OBJC_CLASS___LoadingViewController;
  -[LoadingViewController viewDidLoad](&v14, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[LoadingViewController label](self, "label"));
  -[NSTextField setHidden:](v3, "setHidden:", 1LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[LoadingViewController spinner](self, "spinner"));
  -[NSProgressIndicator setDisplayedWhenStopped:](v4, "setDisplayedWhenStopped:", 0LL);
  objc_release(v4);
  if ( self->_autoShowDelay == 0.0 )
  {
    -[LoadingViewController showProgress:](self, "showProgress:", 0LL);
  }
  else
  {
    objc_initWeak(&location, self);
    v8 = _NSConcreteStackBlock;
    v9 = 3254779904LL;
    v10 = sub_100032B74;
    v11 = &unk_1000B8F08;
    objc_copyWeak(&v12, &location);
    v5 = objc_retainAutoreleasedReturnValue(
           +[NSTimer timerWithTimeInterval:repeats:block:](
             &OBJC_CLASS___NSTimer,
             "timerWithTimeInterval:repeats:block:",
             0LL,
             &v8,
             1.0));
    -[LoadingViewController setAutoShowTimer:](self, "setAutoShowTimer:", v5, v8, v9, v10, v11);
    objc_release(v5);
    v6 = objc_retainAutoreleasedReturnValue(+[NSRunLoop currentRunLoop](&OBJC_CLASS___NSRunLoop, "currentRunLoop"));
    v7 = objc_retainAutoreleasedReturnValue(-[LoadingViewController autoShowTimer](self, "autoShowTimer"));
    -[NSRunLoop addTimer:forMode:](v6, "addTimer:forMode:", v7, NSRunLoopCommonModes);
    objc_release(v7);
    objc_release(v6);
    objc_destroyWeak(&v12);
    objc_destroyWeak(&location);
  }
}