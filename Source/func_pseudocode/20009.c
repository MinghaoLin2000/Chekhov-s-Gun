-[LocalProxyConnection _httpReceive]
void __cdecl -[LocalProxyConnection _httpReceive](LocalProxyConnection *self, SEL a2)
{
  OS_nw_connection *conn; // x20
  _QWORD v4[4]; // [xsp+0h] [xbp-40h] BYREF
  id v5; // [xsp+20h] [xbp-20h] BYREF
  id location; // [xsp+28h] [xbp-18h] BYREF

  objc_initWeak(&location, self);
  conn = self->_conn;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_10002957C;
  v4[3] = &unk_10009E118;
  objc_copyWeak(&v5, &location);
  nw_connection_receive(conn, 1u, 0x4000u, v4);
  objc_destroyWeak(&v5);
  objc_destroyWeak(&location);
}