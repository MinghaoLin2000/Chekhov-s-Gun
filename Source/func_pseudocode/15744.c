-[UARPUSBDFUAccessory updateQueriesCompleted:]
bool __cdecl -[UARPUSBDFUAccessory updateQueriesCompleted:](UARPUSBDFUAccessory *self, SEL a2, id a3)
{
  id v4; // x20
  OS_os_log *log; // x21
  bool queriesCompleted; // w19
  int v8; // [xsp+0h] [xbp-40h] BYREF
  const char *v9; // [xsp+4h] [xbp-3Ch]
  __int16 v10; // [xsp+Ch] [xbp-34h]
  id v11; // [xsp+Eh] [xbp-32h]

  v4 = objc_retain(a3);
  -[NSCondition lock](self->_queriesCompleteLock, "lock");
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
  {
    v8 = 136315394;
    v9 = "-[UARPUSBDFUAccessory updateQueriesCompleted:]";
    v10 = 2112;
    v11 = v4;
    _os_log_impl(
      (void *)&_mh_execute_header,
      log,
      OS_LOG_TYPE_INFO,
      "%s: Removing pending property query %@",
      (uint8_t *)&v8,
      0x16u);
  }
  -[NSMutableSet removeObject:](self->_pendingProperties, "removeObject:", v4);
  if ( !-[NSMutableSet count](self->_pendingProperties, "count") )
  {
    self->_queriesCompleted = 1;
    -[NSCondition signal](self->_queriesCompleteLock, "signal");
  }
  -[NSCondition unlock](self->_queriesCompleteLock, "unlock");
  queriesCompleted = self->_queriesCompleted;
  objc_release(v4);
  return queriesCompleted;
}