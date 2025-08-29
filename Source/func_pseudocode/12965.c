-[TSUBufferedReadChannelHelper readWithHandler:]
void __cdecl -[TSUBufferedReadChannelHelper readWithHandler:](TSUBufferedReadChannelHelper *self, SEL a2, id a3)
{
  TSUBufferedReadChannel **p_bufferedReadChannel; // x19
  id v4; // x20
  id WeakRetained; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  p_bufferedReadChannel = &self->_bufferedReadChannel;
  v4 = objc_retain(a3);
  WeakRetained = objc_loadWeakRetained((id *)p_bufferedReadChannel);
  objc_msgSend(WeakRetained, "setStreamReadChannelSourceHandler:", v4);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(WeakRetained);
}