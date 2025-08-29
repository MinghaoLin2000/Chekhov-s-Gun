-[AMLoaderServiceAction remoteActionParametersUpdated:parameterProperties:completionHandler:]
void __cdecl -[AMLoaderServiceAction remoteActionParametersUpdated:parameterProperties:completionHandler:](
        AMLoaderServiceAction *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x22
  id v9; // x19
  id v10; // x22
  id v11; // x20
  _QWORD v12[5]; // [xsp+0h] [xbp-60h] BYREF
  id v13; // [xsp+28h] [xbp-38h]
  id v14; // [xsp+30h] [xbp-30h]
  id v15; // [xsp+38h] [xbp-28h]

  v8 = objc_retain(a3);
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_10000C238;
  v12[3] = &unk_10001C7B8;
  v12[4] = self;
  v13 = objc_retain(a4);
  v14 = v8;
  v15 = objc_retain(a5);
  v9 = objc_retain(v15);
  v10 = objc_retain(v8);
  v11 = objc_retain(v13);
  -[AMLoaderServiceAction _executeSynchronouslyWithLoadedActionOnMainThread:](
    self,
    "_executeSynchronouslyWithLoadedActionOnMainThread:",
    v12);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  objc_release(v9);
  objc_release(v10);
  objc_release(v11);
}