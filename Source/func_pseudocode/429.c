-[FileEventObserver setPath:]
void __cdecl -[FileEventObserver setPath:](FileEventObserver *self, SEL a2, id a3)
{
  id v5; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( ((unsigned int)objc_msgSend(v5, "isEqualToString:", self->_path) & 1) == 0 )
  {
    objc_storeStrong((id *)&self->_path, a3);
    if ( self->_path )
      -[FileEventObserver startObserving](self, "startObserving");
    else
      -[FileEventObserver stopObserving](self, "stopObserving");
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}