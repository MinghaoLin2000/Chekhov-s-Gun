-[SpeechSynthesisServerXPC _sendCommandViaXPCMessageToAXVisualSupportAgent:]
void __cdecl -[SpeechSynthesisServerXPC _sendCommandViaXPCMessageToAXVisualSupportAgent:](
        SpeechSynthesisServerXPC *self,
        SEL a2,
        id a3)
{
  id v3; // x19
  _xpc_connection_s *mach_service; // x20
  __int64 v5; // x0
  xpc_object_t v6; // x21
  id v7; // x22

  v3 = objc_retain(a3);
  mach_service = xpc_connection_create_mach_service(
                   "com.apple.accessibility.AXVisualSupportAgent",
                   &_dispatch_main_q,
                   0LL);
  if ( mach_service )
  {
    v5 = getuid();
    xpc_connection_set_target_uid(mach_service, v5);
    xpc_connection_set_event_handler(mach_service, &stru_100004140);
    xpc_connection_resume(mach_service);
    v6 = xpc_dictionary_create(0LL, 0LL, 0LL);
    if ( v6 )
    {
      v7 = objc_retainAutorelease(v3);
      xpc_dictionary_set_string(v6, "command", (const char *)objc_msgSend(v7, "UTF8String"));
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
        sub_1000034B0(v7);
      xpc_connection_send_message(mach_service, v6);
    }
    else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      sub_100003468();
    }
    objc_release(v6);
  }
  else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    sub_100003420();
  }
  objc_release(mach_service);
  objc_release(v3);
}