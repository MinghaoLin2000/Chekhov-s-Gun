-[AUCrashHandlerService removeCrashObserver:]
void __cdecl -[AUCrashHandlerService removeCrashObserver:](AUCrashHandlerService *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, __int64); // x19
  void *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = (void (__fastcall **)(id, __int64))objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[OSADiagnosticMonitor sharedMonitor](&OBJC_CLASS___OSADiagnosticMonitor, "sharedMonitor"));
  objc_msgSend(v5, "removeEventObserver:", self);
  objc_release(v5);
  v4[2](v4, 1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}