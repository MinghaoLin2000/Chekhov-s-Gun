-[VideoConversionService cancelJobWithIdentifier:]
void __cdecl -[VideoConversionService cancelJobWithIdentifier:](VideoConversionService *self, SEL a2, id a3)
{
  -[MediaConversionQueue cancelRequestWithIdentifier:](self->_requestQueue, "cancelRequestWithIdentifier:", a3);
}