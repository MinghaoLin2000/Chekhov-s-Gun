-[MediaConversionQueue setDelegate:]
void __cdecl -[MediaConversionQueue setDelegate:](MediaConversionQueue *self, SEL a2, id a3)
{
  objc_storeWeak((id *)&self->_delegate, a3);
}