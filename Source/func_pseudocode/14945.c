-[ATXHeuristicDataSourcesClient allHandlesForContact:callback:]
void __cdecl -[ATXHeuristicDataSourcesClient allHandlesForContact:callback:](
        ATXHeuristicDataSourcesClient *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x0
  NSXPCConnection *xpcConnection; // x20
  id v8; // x21
  id v9; // x19
  id v10; // x20
  _QWORD v11[4]; // [xsp+8h] [xbp-48h] BYREF
  id v12; // [xsp+28h] [xbp-28h]

  v6 = objc_retain(a4);
  xpcConnection = self->_xpcConnection;
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_100009518;
  v11[3] = &unk_100028B90;
  v12 = v6;
  v8 = objc_retain(v6);
  v9 = objc_retain(a3);
  v10 = objc_retainAutoreleasedReturnValue(
          -[NSXPCConnection synchronousRemoteObjectProxyWithErrorHandler:](
            xpcConnection,
            "synchronousRemoteObjectProxyWithErrorHandler:",
            v11));
  objc_msgSend(v10, "allHandlesForContact:callback:", v9, v8);
  objc_release(v9);
  objc_release(v10);
  objc_release(v12);
  objc_release(v8);
}