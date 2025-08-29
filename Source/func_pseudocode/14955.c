-[ATXHeuristicDataSourcesClient duetInteractionCountForHandles:sinceDate:callback:]
void __cdecl -[ATXHeuristicDataSourcesClient duetInteractionCountForHandles:sinceDate:callback:](
        ATXHeuristicDataSourcesClient *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x0
  NSXPCConnection *xpcConnection; // x21
  id v10; // x22
  id v11; // x19
  id v12; // x20
  id v13; // x21
  _QWORD v14[4]; // [xsp+8h] [xbp-48h] BYREF
  id v15; // [xsp+28h] [xbp-28h]

  v8 = objc_retain(a5);
  xpcConnection = self->_xpcConnection;
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 3254779904LL;
  v14[2] = sub_100009ED4;
  v14[3] = &unk_100028B90;
  v15 = v8;
  v10 = objc_retain(v8);
  v11 = objc_retain(a4);
  v12 = objc_retain(a3);
  v13 = objc_retainAutoreleasedReturnValue(
          -[NSXPCConnection synchronousRemoteObjectProxyWithErrorHandler:](
            xpcConnection,
            "synchronousRemoteObjectProxyWithErrorHandler:",
            v14));
  objc_msgSend(v13, "duetInteractionCountForHandles:sinceDate:callback:", v12, v11, v10);
  objc_release(v11);
  objc_release(v12);
  objc_release(v13);
  objc_release(v15);
  objc_release(v10);
}