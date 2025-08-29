-[LocalProxyConnection _start]
void __cdecl -[LocalProxyConnection _start](LocalProxyConnection *self, SEL a2)
{
  os_log_s *v3; // x20
  OS_nw_connection *conn; // x21
  const char *v5; // x22
  unsigned int v6; // w21
  OS_dispatch_source *v7; // x0
  OS_dispatch_source *rs; // x8
  OS_dispatch_source *v9; // x0
  OS_dispatch_source *ws; // x8
  int fd; // w27
  OS_dispatch_source *v12; // x21
  OS_dispatch_source *v13; // x23
  OS_dispatch_source *v14; // x24
  OS_dispatch_source *v15; // x25
  OS_dispatch_source *v16; // x23
  OS_dispatch_source *v17; // [xsp+10h] [xbp-190h]
  _QWORD v18[4]; // [xsp+20h] [xbp-180h] BYREF
  OS_dispatch_source *v19; // [xsp+40h] [xbp-160h]
  id v20; // [xsp+48h] [xbp-158h] BYREF
  int v21; // [xsp+50h] [xbp-150h]
  _QWORD v22[4]; // [xsp+58h] [xbp-148h] BYREF
  OS_dispatch_source *v23; // [xsp+78h] [xbp-128h]
  id v24; // [xsp+80h] [xbp-120h] BYREF
  int v25; // [xsp+88h] [xbp-118h]
  _QWORD handler[4]; // [xsp+90h] [xbp-110h] BYREF
  id v27; // [xsp+B0h] [xbp-F0h] BYREF
  id location; // [xsp+B8h] [xbp-E8h] BYREF
  uint8_t buf[16]; // [xsp+C0h] [xbp-E0h] BYREF
  __int128 v30; // [xsp+D0h] [xbp-D0h]
  __int128 v31; // [xsp+E0h] [xbp-C0h]
  __int128 v32; // [xsp+F0h] [xbp-B0h]
  __int128 v33; // [xsp+100h] [xbp-A0h]
  _BYTE v34[26]; // [xsp+110h] [xbp-90h] BYREF

  v3 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)buf = 0;
    _os_log_impl((void *)&_mh_execute_header, v3, OS_LOG_TYPE_DEFAULT, "LocalProxyConnection _start", buf, 2u);
  }
  objc_release(v3);
  nw_connection_set_queue(self->_conn, (dispatch_queue_t)self->_queue);
  objc_initWeak(&location, self);
  conn = self->_conn;
  handler[0] = _NSConcreteStackBlock;
  handler[1] = 3254779904LL;
  handler[2] = sub_100029C30;
  handler[3] = &unk_10009E188;
  objc_copyWeak(&v27, &location);
  nw_connection_set_state_changed_handler(conn, handler);
  v5 = -[NSString UTF8String](self->_path, "UTF8String");
  v33 = 0u;
  memset(v34, 0, sizeof(v34));
  v31 = 0u;
  v32 = 0u;
  *(_OWORD *)buf = 0u;
  v30 = 0u;
  v6 = socket(1, 1, 0);
  if ( (v6 & 0x80000000) != 0
    || (buf[1] = 1, snprintf((char *)&buf[2], 0x68uLL, "%s", v5), connect(v6, (const sockaddr *)buf, 0x6Au) < 0) )
  {
    self->_fd = -1;
  }
  else
  {
    self->_fd = v6;
    v7 = (OS_dispatch_source *)dispatch_source_create(
                                 (dispatch_source_type_t)&_dispatch_source_type_read,
                                 v6,
                                 0LL,
                                 (dispatch_queue_t)self->_queue);
    rs = self->_rs;
    self->_rs = v7;
    objc_release(rs);
    v9 = (OS_dispatch_source *)dispatch_source_create(
                                 (dispatch_source_type_t)&_dispatch_source_type_write,
                                 self->_fd,
                                 0LL,
                                 (dispatch_queue_t)self->_queue);
    ws = self->_ws;
    self->_ws = v9;
    objc_release(ws);
    fd = self->_fd;
    v12 = objc_retain(self->_rs);
    v13 = objc_retain(self->_ws);
    v14 = self->_rs;
    v22[0] = _NSConcreteStackBlock;
    v22[1] = 3254779904LL;
    v22[2] = sub_100029C98;
    v22[3] = &unk_10009E1B8;
    v25 = fd;
    v23 = v12;
    v17 = objc_retain(v12);
    objc_copyWeak(&v24, &location);
    dispatch_source_set_event_handler((dispatch_source_t)v14, v22);
    v15 = self->_ws;
    v18[0] = _NSConcreteStackBlock;
    v18[1] = 3254779904LL;
    v18[2] = sub_100029D98;
    v18[3] = &unk_10009E1B8;
    v21 = fd;
    v19 = v13;
    v16 = objc_retain(v13);
    objc_copyWeak(&v20, &location);
    dispatch_source_set_event_handler((dispatch_source_t)v15, v18);
    dispatch_resume((dispatch_object_t)self->_rs);
    dispatch_resume((dispatch_object_t)self->_ws);
    objc_destroyWeak(&v20);
    objc_release(v19);
    objc_destroyWeak(&v24);
    objc_release(v23);
    objc_release(v16);
    objc_release(v17);
  }
  nw_connection_start(self->_conn);
  objc_destroyWeak(&v27);
  objc_destroyWeak(&location);
}