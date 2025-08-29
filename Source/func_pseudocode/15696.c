-[UARPDFUUpdater getDfuModeForUARPAccessoryID:]
bool __cdecl -[UARPDFUUpdater getDfuModeForUARPAccessoryID:](UARPDFUUpdater *self, SEL a2, id a3)
{
  id v4; // x19
  OS_os_log *log; // x21
  id v6; // x20
  unsigned __int8 v7; // w21

  v4 = objc_retain(a3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
    sub_100018150(log);
  v6 = objc_retainAutoreleasedReturnValue(-[UARPDFUUpdater getDfuAccessoryForUarpAccessoryID:](self, "getDfuAccessoryForUarpAccessoryID:", v4));
  v7 = (unsigned __int8)objc_msgSend(v6, "dfuModeActive");
  objc_release(v6);
  objc_release(v4);
  return v7;
}