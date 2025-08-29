-[AMLoaderServiceAction remoteActionSetIgnoresInput:]
void __cdecl -[AMLoaderServiceAction remoteActionSetIgnoresInput:](AMLoaderServiceAction *self, SEL a2, bool a3)
{
  _QWORD v3[4]; // [xsp+8h] [xbp-28h] BYREF
  bool v4; // [xsp+28h] [xbp-8h]

  v3[0] = _NSConcreteStackBlock;
  v3[1] = 3221225472LL;
  v3[2] = sub_10000C5C0;
  v3[3] = &unk_10001C848;
  v4 = a3;
  -[AMLoaderServiceAction _executeSynchronouslyWithLoadedActionOnMainThread:](
    self,
    "_executeSynchronouslyWithLoadedActionOnMainThread:",
    v3);
}