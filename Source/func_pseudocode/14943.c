-[ATXHeuristicDataSourcesClient callNewerThan:showIncoming:showOutgoing:missedOnly:callback:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[ATXHeuristicDataSourcesClient callNewerThan:showIncoming:showOutgoing:missedOnly:callback:](
        ATXHeuristicDataSourcesClient *self,
        SEL a2,
        double a3,
        bool a4,
        bool a5,
        bool a6,
        id a7)
{
  _BOOL8 v7; // x19
  _BOOL8 v8; // x20
  _BOOL8 v9; // x21
  id v12; // x0
  NSXPCConnection *xpcConnection; // x22
  id v14; // x23
  id v15; // x22
  _QWORD v16[4]; // [xsp+8h] [xbp-68h] BYREF
  id v17; // [xsp+28h] [xbp-48h]

  v7 = a6;
  v8 = a5;
  v9 = a4;
  v12 = objc_retain(a7);
  xpcConnection = self->_xpcConnection;
  v16[0] = _NSConcreteStackBlock;
  v16[1] = 3254779904LL;
  v16[2] = sub_10000934C;
  v16[3] = &unk_100028B90;
  v17 = v12;
  v14 = objc_retain(v12);
  v15 = objc_retainAutoreleasedReturnValue(
          -[NSXPCConnection synchronousRemoteObjectProxyWithErrorHandler:](
            xpcConnection,
            "synchronousRemoteObjectProxyWithErrorHandler:",
            v16));
  objc_msgSend(v15, "callNewerThan:showIncoming:showOutgoing:missedOnly:callback:", v9, v8, v7, v14, a3);
  objc_release(v15);
  objc_release(v17);
  objc_release(v14);
}