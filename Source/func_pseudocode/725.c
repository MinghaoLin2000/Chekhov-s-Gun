-[DeviceModeUnpairedViewController startedPairing]
void __cdecl -[DeviceModeUnpairedViewController startedPairing](DeviceModeUnpairedViewController *self, SEL a2)
{
  NSButton *v3; // x19
  NSTimer *v4; // x21
  NSRunLoop *v5; // x21
  NSTimer *v6; // x20
  void **v7; // [xsp+0h] [xbp-50h] BYREF
  __int64 v8; // [xsp+8h] [xbp-48h]
  __int64 (__fastcall *v9)(); // [xsp+10h] [xbp-40h]
  void *v10; // [xsp+18h] [xbp-38h]
  id v11; // [xsp+20h] [xbp-30h] BYREF
  id location; // [xsp+28h] [xbp-28h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController pairButton](self, "pairButton"));
  -[NSButton setEnabled:](v3, "setEnabled:", 0LL);
  objc_release(v3);
  objc_initWeak(&location, self);
  v7 = _NSConcreteStackBlock;
  v8 = 3254779904LL;
  v9 = sub_1000135BC;
  v10 = &unk_1000B8F08;
  objc_copyWeak(&v11, &location);
  v4 = objc_retainAutoreleasedReturnValue(
         +[NSTimer timerWithTimeInterval:repeats:block:](
           &OBJC_CLASS___NSTimer,
           "timerWithTimeInterval:repeats:block:",
           0LL,
           &v7,
           1.0));
  -[DeviceModeUnpairedViewController setPairSpinnerTimer:](self, "setPairSpinnerTimer:", v4, v7, v8, v9, v10);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(+[NSRunLoop currentRunLoop](&OBJC_CLASS___NSRunLoop, "currentRunLoop"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeUnpairedViewController pairSpinnerTimer](self, "pairSpinnerTimer"));
  -[NSRunLoop addTimer:forMode:](v5, "addTimer:forMode:", v6, NSRunLoopCommonModes);
  objc_release(v6);
  objc_release(v5);
  objc_destroyWeak(&v11);
  objc_destroyWeak(&location);
}