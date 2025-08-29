+[lite_printer_t existingPrinterWithEndpoint:]
id __cdecl +[lite_printer_t existingPrinterWithEndpoint:](id a1, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retain(a3);
  liteLockPrinters();
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)qword_1000C3EA0, "objectForKeyedSubscript:", v3));
  pthread_mutex_unlock(&stru_1000C0FD0);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}