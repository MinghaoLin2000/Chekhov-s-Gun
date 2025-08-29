-[XPCSignpostReader processSignpostAnimationInterval:]
void __cdecl -[XPCSignpostReader processSignpostAnimationInterval:](XPCSignpostReader *self, SEL a2, id a3)
{
  id v4; // x19
  id v5; // x20
  void *v6; // x22
  unsigned int v7; // w23
  void *v8; // x22
  void *v9; // x23
  void *v10; // x24
  void *v11; // x25
  unsigned int v12; // w26
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[XPCSignpostReader getBundleIDFromInterval:](self, "getBundleIDFromInterval:", v4));
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "subsystem"));
    v7 = (unsigned int)objc_msgSend(v6, "isEqualToString:", CFSTR("com.apple.metrickit.log"));
    objc_release(v6);
    if ( v7 )
    {
      -[XPCSignpostReader updateMXSignpostsForProcess:withInterval:](
        self,
        "updateMXSignpostsForProcess:withInterval:",
        v5,
        v4);
      goto LABEL_8;
    }
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "beginEvent"));
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "name"));
    if ( (unsigned int)objc_msgSend(v9, "isEqualToString:", CFSTR("Scroll_Dragging")) )
    {
      objc_release(v9);
      objc_release(v8);
    }
    else
    {
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "beginEvent"));
      v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "name"));
      v12 = (unsigned int)objc_msgSend(v11, "isEqualToString:", CFSTR("Scroll_Deceleration"));
      objc_release(v11);
      objc_release(v10);
      objc_release(v9);
      objc_release(v8);
      if ( !v12 )
        goto LABEL_8;
    }
    -[XPCSignpostReader updateGlitchesForProcess:withAnimationInterval:](
      self,
      "updateGlitchesForProcess:withAnimationInterval:",
      v5,
      v4);
  }
LABEL_8:
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}