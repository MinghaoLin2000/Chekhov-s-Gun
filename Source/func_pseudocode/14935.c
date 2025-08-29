-[ATXHeuristicDataSourcesClient birthdaysWithCallback:]
void __cdecl -[ATXHeuristicDataSourcesClient birthdaysWithCallback:](
        ATXHeuristicDataSourcesClient *self,
        SEL a2,
        id a3)
{
  id v4; // x0
  NSXPCConnection *xpcConnection; // x19
  id v6; // x20
  id v7; // x19
  _QWORD v8[4]; // [xsp+8h] [xbp-38h] BYREF
  id v9; // [xsp+28h] [xbp-18h]

  v4 = objc_retain(a3);
  xpcConnection = self->_xpcConnection;
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_100008B38;
  v8[3] = &unk_100028B90;
  v9 = v4;
  v6 = objc_retain(v4);
  v7 = objc_retainAutoreleasedReturnValue(
         -[NSXPCConnection synchronousRemoteObjectProxyWithErrorHandler:](
           xpcConnection,
           "synchronousRemoteObjectProxyWithErrorHandler:",
           v8));
  objc_msgSend(v7, "birthdaysWithCallback:", v6);
  objc_release(v7);
  objc_release(v9);
  objc_release(v6);
}