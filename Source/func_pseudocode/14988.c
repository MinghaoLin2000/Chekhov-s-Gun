-[ATXHeuristicJSEnv setNow:]
void __cdecl -[ATXHeuristicJSEnv setNow:](ATXHeuristicJSEnv *self, SEL a2, id a3)
{
  NSDate *v5; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = (NSDate *)objc_retain(a3);
  if ( self->_now != v5 )
  {
    objc_storeStrong((id *)&self->_now, a3);
    -[ATXHeuristicDevice setNow:](self->_device, "setNow:", v5);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}