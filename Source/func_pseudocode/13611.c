+[TSUAssertionHandler logBacktraceThrottled]
void __cdecl +[TSUAssertionHandler logBacktraceThrottled](id a1, SEL a2)
{
  double v3; // d8
  unsigned __int64 v4; // x20
  os_log_s *v5; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = CACurrentMediaTime();
  os_unfair_lock_lock((os_unfair_lock_t)&unk_1001F8098);
  if ( v3 - *(double *)&qword_1001F73C0 > 1.0 )
  {
    qword_1001F73C0 = *(_QWORD *)&v3;
    qword_1001F8090 = 1LL;
    os_unfair_lock_unlock((os_unfair_lock_t)&unk_1001F8098);
LABEL_4:
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_msgSend(a1, "logFullBacktrace");
    return;
  }
  v4 = ++qword_1001F8090;
  os_unfair_lock_unlock((os_unfair_lock_t)&unk_1001F8098);
  if ( v4 <= 0xA )
    goto LABEL_4;
  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DF6B8);
  v5 = (os_log_s *)TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_100174A5C(v5);
}