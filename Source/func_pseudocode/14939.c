-[ATXHeuristicDataSourcesClient travelTimeInfoForEventID:location:expectedArrivalDate:transportType:localOnlyAfterFirstUpdate:callback:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[ATXHeuristicDataSourcesClient travelTimeInfoForEventID:location:expectedArrivalDate:transportType:localOnlyAfterFirstUpdate:callback:](
        ATXHeuristicDataSourcesClient *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        bool a7,
        id a8)
{
  _BOOL8 v8; // x19
  id v14; // x0
  NSXPCConnection *xpcConnection; // x25
  id v16; // x20
  id v17; // x21
  id v18; // x22
  id v19; // x23
  id v20; // x24
  id v21; // x25
  _QWORD v22[4]; // [xsp+8h] [xbp-68h] BYREF
  id v23; // [xsp+28h] [xbp-48h]

  v8 = a7;
  v14 = objc_retain(a8);
  xpcConnection = self->_xpcConnection;
  v22[0] = _NSConcreteStackBlock;
  v22[1] = 3254779904LL;
  v22[2] = sub_100008F7C;
  v22[3] = &unk_100028B90;
  v23 = v14;
  v16 = objc_retain(v14);
  v17 = objc_retain(a6);
  v18 = objc_retain(a5);
  v19 = objc_retain(a4);
  v20 = objc_retain(a3);
  v21 = objc_retainAutoreleasedReturnValue(
          -[NSXPCConnection synchronousRemoteObjectProxyWithErrorHandler:](
            xpcConnection,
            "synchronousRemoteObjectProxyWithErrorHandler:",
            v22));
  objc_msgSend(
    v21,
    "travelTimeInfoForEventID:location:expectedArrivalDate:transportType:localOnlyAfterFirstUpdate:callback:",
    v20,
    v19,
    v18,
    v17,
    v8,
    v16);
  objc_release(v17);
  objc_release(v18);
  objc_release(v19);
  objc_release(v20);
  objc_release(v21);
  objc_release(v23);
  objc_release(v16);
}