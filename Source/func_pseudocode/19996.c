-[LocalSocketProxy start]
void __cdecl -[LocalSocketProxy start](LocalSocketProxy *self, SEL a2)
{
  os_log_s *v3; // x19
  NSString *path; // x8
  nw_parameters *secure_tcp; // x19
  OS_nw_listener *v6; // x0
  OS_nw_listener *listener; // x8
  OS_nw_listener *v8; // x22
  OS_nw_listener *v9; // x23
  os_log_s *v10; // x23
  OS_nw_listener *v11; // x8
  _QWORD v12[4]; // [xsp+0h] [xbp-C0h] BYREF
  id v13; // [xsp+20h] [xbp-A0h] BYREF
  _QWORD v14[5]; // [xsp+28h] [xbp-98h] BYREF
  id v15; // [xsp+50h] [xbp-70h] BYREF
  id location; // [xsp+58h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+60h] [xbp-60h] BYREF
  void *v18; // [xsp+64h] [xbp-5Ch]
  __int16 v19; // [xsp+6Ch] [xbp-54h]
  OS_nw_listener *v20; // [xsp+6Eh] [xbp-52h]

  v3 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_DEFAULT) )
  {
    path = self->_path;
    *(_DWORD *)buf = 138412290;
    v18 = path;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v3,
      OS_LOG_TYPE_DEFAULT,
      "LocalSocketProxy: Started to path %@",
      buf,
      0xCu);
  }
  objc_release(v3);
  secure_tcp = nw_parameters_create_secure_tcp(
                 _nw_parameters_configure_protocol_disable,
                 _nw_parameters_configure_protocol_default_configuration);
  nw_parameters_set_required_interface_type(secure_tcp, nw_interface_type_loopback);
  v6 = nw_listener_create(secure_tcp);
  listener = self->_listener;
  self->_listener = v6;
  objc_release(listener);
  nw_listener_set_queue(self->_listener, (dispatch_queue_t)self->_queue);
  objc_initWeak(&location, self);
  v8 = self->_listener;
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 3254779904LL;
  v14[2] = sub_100028648;
  v14[3] = &unk_10009DFD8;
  objc_copyWeak(&v15, &location);
  v14[4] = self;
  nw_listener_set_event_handler(v8, v14);
  v9 = self->_listener;
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_1000286F0;
  v12[3] = &unk_10009E008;
  objc_copyWeak(&v13, &location);
  nw_listener_set_new_connection_handler(v9, v12);
  v10 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v10, OS_LOG_TYPE_DEFAULT) )
  {
    v11 = self->_listener;
    *(_DWORD *)buf = 134218242;
    v18 = v11;
    v19 = 2112;
    v20 = v11;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v10,
      OS_LOG_TYPE_DEFAULT,
      "LocalSocketProxy: Starting listener %p <%@>",
      buf,
      0x16u);
  }
  objc_release(v10);
  nw_listener_start(self->_listener);
  objc_destroyWeak(&v13);
  objc_destroyWeak(&v15);
  objc_destroyWeak(&location);
  objc_release(secure_tcp);
}