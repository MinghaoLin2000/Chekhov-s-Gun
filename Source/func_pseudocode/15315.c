-[UARPUpdaterServiceDisplay init]
UARPUpdaterServiceDisplay *__cdecl -[UARPUpdaterServiceDisplay init](UARPUpdaterServiceDisplay *self, SEL a2)
{
  UARPUpdaterServiceDisplay *v2; // x19
  UARPUpdaterDisplayControllerDelegate *v3; // x0
  UARPUpdaterDisplayControllerDelegate *displayController; // x8
  os_log_t v5; // x0
  OS_os_log *log; // x8
  os_log_s *v7; // x20
  uint8_t v9[16]; // [xsp+0h] [xbp-30h] BYREF
  objc_super v10; // [xsp+10h] [xbp-20h] BYREF

  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___UARPUpdaterServiceDisplay;
  v2 = -[UARPUpdaterServiceDisplay init](&v10, "init");
  if ( v2 )
  {
    v3 = objc_retainAutoreleasedReturnValue(
           +[UARPUpdaterDisplayControllerDelegate sharedInstance](
             &OBJC_CLASS___UARPUpdaterDisplayControllerDelegate,
             "sharedInstance"));
    displayController = v2->_displayController;
    v2->_displayController = v3;
    objc_release(displayController);
    v5 = os_log_create("com.apple.uarpupdaterservice.display", "xpcservice");
    log = v2->_log;
    v2->_log = v5;
    objc_release(log);
    v7 = v2->_log;
    if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
    {
      *(_WORD *)v9 = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v7,
        OS_LOG_TYPE_DEFAULT,
        "UARPDisplayUpdaterService was initialized!",
        v9,
        2u);
    }
  }
  return v2;
}