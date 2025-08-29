-[LocalProxyConnection _receiveFromHTTP:]
void __cdecl -[LocalProxyConnection _receiveFromHTTP:](LocalProxyConnection *self, SEL a2, id a3)
{
  dispatch_data_s *v4; // x19
  OS_dispatch_data *dataToSendToSocket; // x0
  OS_dispatch_data *concat; // x0
  OS_dispatch_data *v7; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = (dispatch_data_s *)objc_retain(a3);
  dataToSendToSocket = self->_dataToSendToSocket;
  if ( dataToSendToSocket )
    concat = (OS_dispatch_data *)dispatch_data_create_concat((dispatch_data_t)dataToSendToSocket, v4);
  else
    concat = objc_retain(v4);
  v7 = self->_dataToSendToSocket;
  self->_dataToSendToSocket = concat;
  objc_release(v7);
  -[LocalProxyConnection _checkWrite](self, "_checkWrite");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}