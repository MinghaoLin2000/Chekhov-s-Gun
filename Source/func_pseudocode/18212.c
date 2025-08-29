-[SpeechSynthesisServerXPC getSpeakingStateWithCompletionHandler:]
void __cdecl -[SpeechSynthesisServerXPC getSpeakingStateWithCompletionHandler:](
        SpeechSynthesisServerXPC *self,
        SEL a2,
        id a3)
{
  void (__fastcall **v4)(id, _BOOL8); // x19
  __int64 v5; // x20
  CFTypeID v6; // x20
  const __CFNumber *ValueAtIndex; // x0
  _BOOL8 v8; // x1
  char valuePtr; // [xsp+7h] [xbp-29h] BYREF
  CFTypeRef cf; // [xsp+8h] [xbp-28h] BYREF
  uint8_t buf[16]; // [xsp+10h] [xbp-20h] BYREF

  v4 = (void (__fastcall **)(id, _BOOL8))objc_retain(a3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)buf = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "TTS: is speaking received",
      buf,
      2u);
  }
  if ( v4 )
  {
    -[SpeechSynthesisServerXPC _sendCommandViaXPCMessageToAXVisualSupportAgent:](
      self,
      "_sendCommandViaXPCMessageToAXVisualSupportAgent:",
      CFSTR("SpeakSelection.startService"));
    cf = 0LL;
    v5 = SendMessageToSpeechSynthesisServer(
           CFSTR("com.apple.speech.synthesis.SpeakingHotKeyPort"),
           700LL,
           0LL,
           &cf,
           0LL,
           1LL);
    if ( cf )
    {
      if ( (v5 & 0x80000000) != 0 )
      {
        if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
          sub_1000033AC(v5);
      }
      else
      {
        v6 = CFGetTypeID(cf);
        if ( v6 == CFArrayGetTypeID() )
        {
          valuePtr = 0;
          ValueAtIndex = (const __CFNumber *)CFArrayGetValueAtIndex((CFArrayRef)cf, 0LL);
          if ( ValueAtIndex )
          {
            CFNumberGetValue(ValueAtIndex, kCFNumberCharType, &valuePtr);
            v8 = valuePtr != 0;
          }
          else
          {
            v8 = 0LL;
          }
          v4[2](v4, v8);
          goto LABEL_19;
        }
      }
      v4[2](v4, 0LL);
LABEL_19:
      CFRelease(cf);
      goto LABEL_20;
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_100003338();
    v4[2](v4, 0LL);
  }
  else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_FAULT) )
  {
    sub_1000032F0();
  }
LABEL_20:
  objc_release(v4);
}