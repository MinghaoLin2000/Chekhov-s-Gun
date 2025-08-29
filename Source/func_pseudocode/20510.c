-[BrowseService _syncTimerFired]
void __cdecl -[BrowseService _syncTimerFired](BrowseService *self, SEL a2)
{
  unsigned __int64 syncTimerSuspendedCount; // x8
  double v4; // d8
  os_log_s *v5; // x19
  unsigned __int64 v6; // x8
  id v7; // x0
  void *v8; // x19
  NSSet *lastBrowseInfos; // x8
  PKPrintdRPC_BrowseClient_ClientProtocol *proxy; // x22
  NSSet *v11; // x21
  PKPrintdRPC_BrowseClient_ClientProtocol *v12; // x22
  void *v13; // x22
  NSSet *v14; // x0
  os_log_s *v15; // x21
  NSSet *v16; // x8
  OS_dispatch_source *syncTimer; // x20
  dispatch_time_t v18; // x0
  int v19; // [xsp+0h] [xbp-60h] BYREF
  double v20; // [xsp+4h] [xbp-5Ch]
  __int16 v21; // [xsp+Ch] [xbp-54h]
  int v22; // [xsp+Eh] [xbp-52h]

  syncTimerSuspendedCount = self->_syncTimerSuspendedCount;
  if ( syncTimerSuspendedCount >= 2 )
    v4 = pow(1.0 / (double)syncTimerSuspendedCount, 0.7);
  else
    v4 = 0.1;
  v5 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEFAULT) )
  {
    v6 = self->_syncTimerSuspendedCount;
    v19 = 134218240;
    v20 = v4;
    v21 = 1024;
    v22 = v6;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v5,
      OS_LOG_TYPE_DEFAULT,
      "next sync timer delay %g, count %d",
      (uint8_t *)&v19,
      0x12u);
  }
  objc_release(v5);
  dispatch_suspend((dispatch_object_t)self->_syncTimer);
  self->_syncTimerSuspendedCount = 0LL;
  v7 = objc_retainAutoreleasedReturnValue(-[PrintInfoSet uniquedBrowseInfos](self->_browseInfos, "uniquedBrowseInfos"));
  v8 = v7;
  lastBrowseInfos = self->_lastBrowseInfos;
  if ( v7 )
  {
    if ( !lastBrowseInfos )
    {
      proxy = self->_proxy;
      v11 = objc_retainAutoreleasedReturnValue(+[NSSet set](&OBJC_CLASS___NSSet, "set"));
      -[PKPrintdRPC_BrowseClient_ClientProtocol browserAdded:removed:](proxy, "browserAdded:removed:", v8, v11);
      goto LABEL_15;
    }
  }
  else if ( lastBrowseInfos )
  {
    v12 = self->_proxy;
    v11 = objc_retainAutoreleasedReturnValue(+[NSSet set](&OBJC_CLASS___NSSet, "set"));
    -[PKPrintdRPC_BrowseClient_ClientProtocol browserAdded:removed:](
      v12,
      "browserAdded:removed:",
      v11,
      self->_lastBrowseInfos);
    goto LABEL_15;
  }
  v11 = (NSSet *)objc_msgSend(v7, "mutableCopy");
  -[NSSet minusSet:](v11, "minusSet:", self->_lastBrowseInfos);
  v13 = -[NSSet mutableCopy](self->_lastBrowseInfos, "mutableCopy");
  objc_msgSend(v13, "minusSet:", v8);
  if ( -[NSSet count](v11, "count") || objc_msgSend(v13, "count") )
    -[PKPrintdRPC_BrowseClient_ClientProtocol browserAdded:removed:](self->_proxy, "browserAdded:removed:", v11, v13);
  objc_release(v13);
LABEL_15:
  objc_release(v11);
  if ( objc_msgSend(v8, "count") )
  {
    v14 = objc_retain(v8);
  }
  else
  {
    v15 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v15, OS_LOG_TYPE_DEFAULT) )
    {
      LOWORD(v19) = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v15,
        OS_LOG_TYPE_DEFAULT,
        "next sync timer delay set to ASAP",
        (uint8_t *)&v19,
        2u);
    }
    objc_release(v15);
    v14 = 0LL;
    v4 = 0.0;
  }
  v16 = self->_lastBrowseInfos;
  self->_lastBrowseInfos = v14;
  objc_release(v16);
  syncTimer = self->_syncTimer;
  v18 = dispatch_time(0xFFFFFFFFFFFFFFFELL, (__int64)(v4 * 1000000000.0));
  dispatch_source_set_timer((dispatch_source_t)syncTimer, v18, 0xFFFFFFFFFFFFFFFFLL, 0LL);
  objc_release(v8);
}