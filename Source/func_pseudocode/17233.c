-[AMLoaderServiceAction remoteActionGetViewInfo:]
void __cdecl -[AMLoaderServiceAction remoteActionGetViewInfo:](AMLoaderServiceAction *self, SEL a2, id a3)
{
  Block_layout *v4; // x0
  Block_layout *v5; // x20
  _QWORD v6[4]; // [xsp+8h] [xbp-38h] BYREF
  id v7; // [xsp+28h] [xbp-18h]

  v4 = (Block_layout *)objc_retain(a3);
  if ( !v4 )
    v4 = &stru_10001C9E8;
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_10000E618;
  v6[3] = &unk_10001CA08;
  v7 = v4;
  v5 = objc_retain(v4);
  -[AMLoaderServiceAction _executeSynchronouslyWithLoadedActionOnMainThread:](
    self,
    "_executeSynchronouslyWithLoadedActionOnMainThread:",
    v6);
  objc_release(v7);
  objc_release(v5);
}