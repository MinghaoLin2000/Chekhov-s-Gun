-[TSPMemoryReadChannel _close]
void __cdecl -[TSPMemoryReadChannel _close](TSPMemoryReadChannel *self, SEL a2)
{
  OS_dispatch_data *dispatchData; // x8

  dispatchData = self->_dispatchData;
  self->_dispatchData = 0LL;
  objc_release(dispatchData);
}