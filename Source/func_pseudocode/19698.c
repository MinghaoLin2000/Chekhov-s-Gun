-[IPPSessionTransaction _send1_sendClearToSendBody:]
void __cdecl -[IPPSessionTransaction _send1_sendClearToSendBody:](IPPSessionTransaction *self, SEL a2, bool a3)
{
  os_log_s *v4; // x19
  const char *v5; // x3
  uint8_t *v6; // x4
  void (__fastcall **v7)(_QWORD); // x19
  id initialPayloadSentCallback; // x0
  __int16 v9; // [xsp+0h] [xbp-30h] BYREF
  uint8_t buf[2]; // [xsp+10h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( self->_tlsRetry != a3 )
  {
    v4 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v4, OS_LOG_TYPE_DEFAULT) )
    {
      *(_WORD *)buf = 0;
      v5 = "Retry with TLS changed, so not signaling";
      v6 = buf;
      goto LABEL_7;
    }
LABEL_8:
    objc_release(v4);
    return;
  }
  if ( self->_httpResponse )
  {
    v4 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v4, OS_LOG_TYPE_DEFAULT) )
    {
      v9 = 0;
      v5 = "We already got a response";
      v6 = (uint8_t *)&v9;
LABEL_7:
      _os_log_impl((void *)&_mh_execute_header, v4, OS_LOG_TYPE_DEFAULT, v5, v6, 2u);
      goto LABEL_8;
    }
    goto LABEL_8;
  }
  v7 = (void (__fastcall **)(_QWORD))objc_retainBlock(self->_initialPayloadSentCallback);
  initialPayloadSentCallback = self->_initialPayloadSentCallback;
  self->_initialPayloadSentCallback = 0LL;
  objc_release(initialPayloadSentCallback);
  if ( v7 )
    v7[2](v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}