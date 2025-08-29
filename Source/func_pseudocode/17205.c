-[AMLoaderServiceAction remoteActionUpdateParameters:]
void __cdecl -[AMLoaderServiceAction remoteActionUpdateParameters:](AMLoaderServiceAction *self, SEL a2, id a3)
{
  id v3; // x20
  _QWORD v4[4]; // [xsp+0h] [xbp-40h] BYREF
  AMLoaderServiceAction *v5; // [xsp+20h] [xbp-20h]
  id v6; // [xsp+28h] [xbp-18h]

  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_10000C04C;
  v4[3] = &unk_10001C788;
  v5 = self;
  v6 = objc_retain(a3);
  v3 = objc_retain(v6);
  -[AMLoaderServiceAction _executeSynchronouslyWithLoadedActionOnMainThread:](
    v5,
    "_executeSynchronouslyWithLoadedActionOnMainThread:",
    v4);
  objc_release(v6);
  objc_release(v3);
}