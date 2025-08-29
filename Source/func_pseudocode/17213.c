-[AMLoaderServiceAction remoteActionSetComment:]
void __cdecl -[AMLoaderServiceAction remoteActionSetComment:](AMLoaderServiceAction *self, SEL a2, id a3)
{
  id v4; // x20
  _QWORD v5[4]; // [xsp+8h] [xbp-38h] BYREF
  id v6; // [xsp+28h] [xbp-18h]

  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_10000C6C0;
  v5[3] = &unk_10001C758;
  v6 = objc_retain(a3);
  v4 = objc_retain(v6);
  -[AMLoaderServiceAction _executeSynchronouslyWithLoadedActionOnMainThread:](
    self,
    "_executeSynchronouslyWithLoadedActionOnMainThread:",
    v5);
  objc_release(v6);
  objc_release(v4);
}