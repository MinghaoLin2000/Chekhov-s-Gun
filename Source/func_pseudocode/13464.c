-[TSUStreamDataCompression handleData:isDone:]
bool __cdecl -[TSUStreamDataCompression handleData:isDone:](TSUStreamDataCompression *self, SEL a2, id a3, bool a4)
{
  OS_dispatch_data *concat; // x0
  OS_dispatch_data *outputData; // x8

  concat = (OS_dispatch_data *)dispatch_data_create_concat((dispatch_data_t)self->_outputData, (dispatch_data_t)a3);
  outputData = self->_outputData;
  self->_outputData = concat;
  objc_release(outputData);
  return 1;
}