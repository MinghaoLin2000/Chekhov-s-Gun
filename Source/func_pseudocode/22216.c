-[QLSatellite handleCancelMessage:]
void __cdecl -[QLSatellite handleCancelMessage:](QLSatellite *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x0
  __int64 v6; // x1
  void *v7; // x21
  os_log_s *v8; // x22
  id v9; // x0
  void *v10; // x22

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "uuid"));
  v7 = v5;
  v8 = (os_log_s *)qlLogHandles[9];
  if ( !v8 )
  {
    QLInitLogging(v5, v6);
    v8 = (os_log_s *)qlLogHandles[9];
  }
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEBUG) )
    sub_100006320(v4, v8);
  v9 = objc_retainAutoreleasedReturnValue((id)_QLRequestGetObject(-[NSMapTable objectForKey:](self->_requests, "objectForKey:", v7)));
  v10 = v9;
  if ( v9 )
  {
    objc_msgSend(v9, "setCancelled:", 1LL);
    objc_msgSend(v10, "cancelGenerator");
    -[NSMapTable removeObjectForKey:](self->_requests, "removeObjectForKey:", v7);
    -[QLSatellite _updateWatchdog](self, "_updateWatchdog");
  }
  objc_release(v10);
  objc_release(v7);
  objc_release(v4);
}