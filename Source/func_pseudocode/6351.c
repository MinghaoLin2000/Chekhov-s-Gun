-[VideoConversionTask setProgressObserver:]
void __cdecl -[VideoConversionTask setProgressObserver:](VideoConversionTask *self, SEL a2, id a3)
{
  objc_storeWeak((id *)&self->_progressObserver, a3);
}