-[SKUnmount .cxx_destruct]
void __cdecl -[SKUnmount .cxx_destruct](SKUnmount *self, SEL a2)
{
  objc_storeStrong((id *)&self->_populateMutex, 0LL);
}