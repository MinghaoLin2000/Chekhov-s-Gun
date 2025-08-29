-[XPCSignpostReader processSignpostEvent:]
void __cdecl -[XPCSignpostReader processSignpostEvent:](XPCSignpostReader *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x21
  unsigned int v6; // w22
  void *v7; // x22
  id v8; // x21
  void *v9; // x21
  unsigned int v10; // w22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
  v6 = (unsigned int)objc_msgSend(v5, "isEqualToString:", CFSTR("ProcessExited"));
  objc_release(v5);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "attributes"));
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKey:", CFSTR("BundleIdOverride")));
    objc_release(v7);
    if ( v8 )
      -[XPCSignpostReader updateProcessExitsForProcess:withEvent:](
        self,
        "updateProcessExitsForProcess:withEvent:",
        v8,
        v4);
  }
  else
  {
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "subsystem"));
    v10 = (unsigned int)objc_msgSend(v9, "isEqualToString:", CFSTR("com.apple.metrickit.log"));
    objc_release(v9);
    if ( !v10 )
      goto LABEL_8;
    v8 = objc_retainAutoreleasedReturnValue(-[XPCSignpostReader getBundleIDFromEvent:](self, "getBundleIDFromEvent:", v4));
    if ( v8 )
      -[XPCSignpostReader updateMXSignpostEventsForProcess:withEvent:](
        self,
        "updateMXSignpostEventsForProcess:withEvent:",
        v8,
        v4);
  }
  objc_release(v8);
LABEL_8:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}