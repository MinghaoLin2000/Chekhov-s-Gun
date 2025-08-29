-[TSPIOHandlerWriteChannelAdapter close]
void __cdecl -[TSPIOHandlerWriteChannelAdapter close](TSPIOHandlerWriteChannelAdapter *self, SEL a2)
{
  (*((void (__fastcall **)(id, __int64, _QWORD, NSError *))self->_handler + 2))(self->_handler, 1LL, 0LL, self->_error);
}