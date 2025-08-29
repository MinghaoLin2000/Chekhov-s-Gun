-[ATXHeuristicDataSourcesClient unreadMessagesWithLimit:callback:]
void __cdecl -[ATXHeuristicDataSourcesClient unreadMessagesWithLimit:callback:](
        ATXHeuristicDataSourcesClient *self,
        SEL a2,
        signed __int64 a3,
        id a4)
{
  id v6; // x0
  NSXPCConnection *xpcConnection; // x20
  id v8; // x21
  id v9; // x20
  _QWORD v10[4]; // [xsp+8h] [xbp-48h] BYREF
  id v11; // [xsp+28h] [xbp-28h]

  v6 = objc_retain(a4);
  xpcConnection = self->_xpcConnection;
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_10000A08C;
  v10[3] = &unk_100028B90;
  v11 = v6;
  v8 = objc_retain(v6);
  v9 = objc_retainAutoreleasedReturnValue(
         -[NSXPCConnection synchronousRemoteObjectProxyWithErrorHandler:](
           xpcConnection,
           "synchronousRemoteObjectProxyWithErrorHandler:",
           v10));
  objc_msgSend(v9, "unreadMessagesWithLimit:callback:", a3, v8);
  objc_release(v9);
  objc_release(v11);
  objc_release(v8);
}