__Z23withDebuggableSemaphoreP8NSStringdU13block_pointerFvPU32objcproto21OS_dispatch_semaphore8NSObjectE
void __fastcall withDebuggableSemaphore(void *a1, void *a2, double a3)
{
  id v5; // x19
  void (__fastcall **v6)(id, dispatch_semaphore_s *); // x20
  unsigned int add; // w24
  os_log_s *v8; // x21
  dispatch_semaphore_s *v9; // x21
  dispatch_time_t v10; // x0
  intptr_t v11; // x23
  os_log_s *v12; // x22
  const char *v13; // x8
  int v14; // [xsp+0h] [xbp-70h] BYREF
  unsigned int v15; // [xsp+4h] [xbp-6Ch]
  __int16 v16; // [xsp+8h] [xbp-68h]
  id v17; // [xsp+Ah] [xbp-66h]
  __int16 v18; // [xsp+12h] [xbp-5Eh]
  const char *v19; // [xsp+14h] [xbp-5Ch]

  v5 = objc_retain(a1);
  v6 = objc_retain(a2);
  add = atomic_fetch_add(dword_1000C3B08, 1u);
  v8 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEFAULT) )
  {
    v14 = 67109378;
    v15 = add;
    v16 = 2114;
    v17 = v5;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v8,
      OS_LOG_TYPE_DEFAULT,
      "[%d] synchronous callout from %{public}@ - begin",
      (uint8_t *)&v14,
      0x12u);
  }
  objc_release(v8);
  v9 = dispatch_semaphore_create(0LL);
  v6[2](v6, v9);
  v10 = dispatch_time(0LL, (__int64)(a3 * 1000000000.0));
  v11 = dispatch_semaphore_wait(v9, v10);
  v12 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEFAULT) )
  {
    v13 = "timed out";
    v14 = 67109634;
    v15 = add;
    if ( !v11 )
      v13 = "completed";
    v16 = 2114;
    v17 = v5;
    v18 = 2082;
    v19 = v13;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v12,
      OS_LOG_TYPE_DEFAULT,
      "[%d] synchronous callout from %{public}@ - %{public}s",
      (uint8_t *)&v14,
      0x1Cu);
  }
  objc_release(v12);
  objc_release(v9);
  objc_release(v6);
  objc_release(v5);
}