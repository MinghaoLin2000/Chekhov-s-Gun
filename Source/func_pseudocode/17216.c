-[AMLoaderServiceAction remoteActionSetShowSelectedItemsWhenRun:selectedShowWhenRunItemNames:]
void __cdecl -[AMLoaderServiceAction remoteActionSetShowSelectedItemsWhenRun:selectedShowWhenRunItemNames:](
        AMLoaderServiceAction *self,
        SEL a2,
        bool a3,
        id a4)
{
  id v5; // x19
  _QWORD v6[4]; // [xsp+0h] [xbp-40h] BYREF
  id v7; // [xsp+20h] [xbp-20h]
  bool v8; // [xsp+28h] [xbp-18h]

  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_10000CC20;
  v6[3] = &unk_10001C8C8;
  v8 = a3;
  v7 = objc_retain(a4);
  v5 = objc_retain(v7);
  -[AMLoaderServiceAction _executeSynchronouslyWithLoadedActionOnMainThread:](
    self,
    "_executeSynchronouslyWithLoadedActionOnMainThread:",
    v6);
  objc_release(v7);
  objc_release(v5);
}