-[TSUBufferedReadChannelHelper .cxx_destruct]
void __cdecl -[TSUBufferedReadChannelHelper .cxx_destruct](TSUBufferedReadChannelHelper *self, SEL a2)
{
  objc_destroyWeak((id *)&self->_bufferedReadChannel);
}