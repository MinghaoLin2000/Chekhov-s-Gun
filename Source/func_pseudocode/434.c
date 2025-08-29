-[FileEventObserver notifyDelegateWithEvent:]
void __cdecl -[FileEventObserver notifyDelegateWithEvent:](FileEventObserver *self, SEL a2, id a3)
{
  id v4; // x20
  FileEventObserverDelegate *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[FileEventObserver delegate](self, "delegate"));
  -[FileEventObserverDelegate fileEventObserver:didProcessEvent:](v5, "fileEventObserver:didProcessEvent:", self, v4);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}