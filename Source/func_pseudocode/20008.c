-[LocalProxyConnection _checkWrite]
void __cdecl -[LocalProxyConnection _checkWrite](LocalProxyConnection *self, SEL a2)
{
  OS_dispatch_data *dataToSendToSocket; // x0
  dispatch_data_s *v4; // x20
  OS_dispatch_data *v5; // x0
  size_t size; // x0
  size_t v7; // x1
  OS_dispatch_data *subrange; // x0
  OS_dispatch_data *v9; // x8
  dispatch_object_s *ws; // x0
  _QWORD v11[6]; // [xsp+0h] [xbp-60h] BYREF
  __int64 v12; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v13; // [xsp+38h] [xbp-28h]
  __int64 v14; // [xsp+40h] [xbp-20h]
  __int64 v15; // [xsp+48h] [xbp-18h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  if ( self->_writeOK )
  {
    dataToSendToSocket = self->_dataToSendToSocket;
    if ( dataToSendToSocket )
    {
      self->_writeOK = 0;
      if ( self->_ws_suspended )
      {
        self->_ws_suspended = 0;
        dispatch_resume((dispatch_object_t)self->_ws);
        dataToSendToSocket = self->_dataToSendToSocket;
      }
      v4 = objc_retain(dataToSendToSocket);
      v5 = self->_dataToSendToSocket;
      self->_dataToSendToSocket = 0LL;
      objc_release(v5);
      v12 = 0LL;
      v13 = &v12;
      v14 = 0x2020000000LL;
      v15 = 0LL;
      v11[0] = _NSConcreteStackBlock;
      v11[1] = 3254779904LL;
      v11[2] = sub_1000293EC;
      v11[3] = &unk_10009E0E8;
      v11[4] = self;
      v11[5] = &v12;
      dispatch_data_apply(v4, v11);
      size = dispatch_data_get_size(v4);
      v7 = v13[3];
      if ( v7 < size )
      {
        subrange = (OS_dispatch_data *)dispatch_data_create_subrange(v4, v7, size);
        v9 = self->_dataToSendToSocket;
        self->_dataToSendToSocket = subrange;
        objc_release(v9);
      }
      _Block_object_dispose(&v12, 8);
      objc_release(v4);
    }
    else if ( !self->_ws_suspended )
    {
      self->_ws_suspended = 1;
      ws = (dispatch_object_s *)self->_ws;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      dispatch_suspend(ws);
    }
  }
}