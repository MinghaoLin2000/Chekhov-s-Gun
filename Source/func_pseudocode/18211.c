-[SpeechSynthesisServerXPC stopSpeakingSelectionWithCompletionHandler:]
void __cdecl -[SpeechSynthesisServerXPC stopSpeakingSelectionWithCompletionHandler:](
        SpeechSynthesisServerXPC *self,
        SEL a2,
        id a3)
{
  void (__fastcall **v3)(_QWORD); // x19
  __int64 v4; // x0
  __int64 v5; // x20
  uint8_t v6[16]; // [xsp+0h] [xbp-20h] BYREF

  v3 = (void (__fastcall **)(_QWORD))objc_retain(a3);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v6 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "TTS: stop speaking received",
      v6,
      2u);
  }
  v4 = SendMessageToSpeechSynthesisServer(
         CFSTR("com.apple.speech.synthesis.SpeakingHotKeyPort"),
         600LL,
         0LL,
         0LL,
         1LL,
         0LL);
  if ( (_DWORD)v4 )
  {
    v5 = v4;
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      sub_10000327C(v5);
  }
  v3[2](v3);
  objc_release(v3);
}