-[SpeechSynthesisServerXPC startSpeakingSelectionWithFallback:completionHandler:]
void __cdecl -[SpeechSynthesisServerXPC startSpeakingSelectionWithFallback:completionHandler:](
        SpeechSynthesisServerXPC *self,
        SEL a2,
        id a3,
        id a4)
{
  __CFString *v6; // x19
  void (__fastcall **v7)(_QWORD); // x20
  __CFDictionary *Mutable; // x21
  __int64 v9; // x22
  uint8_t v10[16]; // [xsp+0h] [xbp-30h] BYREF

  v6 = (__CFString *)objc_retain(a3);
  v7 = (void (__fastcall **)(_QWORD))objc_retain(a4);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v10 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "TTS: start speaking received",
      v10,
      2u);
  }
  -[SpeechSynthesisServerXPC _sendCommandViaXPCMessageToAXVisualSupportAgent:](
    self,
    "_sendCommandViaXPCMessageToAXVisualSupportAgent:",
    CFSTR("SpeakSelection.startService"));
  Mutable = CFDictionaryCreateMutable(
              kCFAllocatorDefault,
              1LL,
              &kCFTypeDictionaryKeyCallBacks,
              &kCFTypeDictionaryValueCallBacks);
  if ( !-[__CFString length](v6, "length") )
  {
    objc_release(v6);
    v6 = &stru_100004180;
  }
  CFDictionarySetValue(Mutable, CFSTR("fallbackString"), v6);
  v9 = SendMessageToSpeechSynthesisServer(
         CFSTR("com.apple.speech.synthesis.SpeakingHotKeyPort"),
         500LL,
         Mutable,
         0LL,
         1LL,
         0LL);
  CFRelease(Mutable);
  if ( (_DWORD)v9 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    sub_100003208(v9);
  v7[2](v7);
  objc_release(v7);
  objc_release(v6);
}